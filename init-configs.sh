rm -rf .bdep/ install/ build-*/

bdep init -C ./build-wasm   cc --options-file config-wasm.options
bdep init -C ./build-gcc    cc --options-file config-gcc.options
bdep init -C ./build-clang  cc --options-file config-clang.options

bdep update -a
bdep test -a
