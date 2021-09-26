rm -rf .bdep/
../build/init-configs.sh

bdep init -A ../build/wasm @wasm
bdep init -A ../build/gcc @gcc
bdep init -A ../build/clang @clang
