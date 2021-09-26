# This file assumes that you have installed and available:
# - build2
# - gcc/g++
# - clang/clang++
# - emcc/em++ (Emscripten)

rm -rf ./*/ install/

bpkg create -d ./wasm cc --options-file config-wasm.options
bpkg create -d ./gcc cc --options-file config-gcc.options
bpkg create -d ./clang cc --options-file config-clang.options

