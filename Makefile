# Makefile wrapper for CMake.

SHELL := /bin/bash
RM    := rm -rf

BUILD_ROOT := build

all: build # make the default be a build without optimization

.PHONY: build
build: ./build/Makefile
	@ $(MAKE) -j`nproc` -C build

.PHONY: debug
debug: ./build/Makefile
	@ $(MAKE) -j`nproc` -C build

./build/Makefile:
	@ mkdir -p build
	(cd build >/dev/null 2>&1 && cmake -DCMAKE_BUILD_TYPE=Debug ..)

./release/Makefile:
	@ mkdir -p release
	(cd release >/dev/null 2>&1 && cmake -DCMAKE_BUILD_TYPE=Release ..)

clean:
	@- $(RM) ./build/
	@- $(RM) ./release/
	@- $(RM) ./bin/