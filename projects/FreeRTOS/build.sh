#!/bin/bash
CURRENT_DIR=`pwd`
PATH_WORKSPACE_ROOT=$CURRENT_DIR/../../

if [ ! -d "build" ]; then
    mkdir "build"
fi

cd build

if [ "$1" = "clean" ]; then
    yes | rm -rf *
fi

# cmake --build .
if [ -f "Makefile" ]; then
    make clean
else
    cmake ..
fi

if [ -f "compile_commands.json" ]; then
    cp compile_commands.json $PATH_WORKSPACE_ROOT
fi

make -j8
