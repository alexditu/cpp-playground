#!/bin/bash

BUILD_DIR="build"

mkdir -p "${BUILD_DIR}"

cd "${BUILD_DIR}" || (echo "failed to cd to ${BUILD_DIR}" && exit 1)

cmake ..

cmake --build . -j4