#!/bin/bash
if [ ! -d "build" ]; then
    mkdir "build"
fi

cd build
yes | rm -rf *
cmake ..
cmake --build .
