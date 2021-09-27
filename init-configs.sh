rm -rf .bdep/ install/ build-*/

bdep init -C ./build-wasm   @wasm   cc --options-file config-wasm.options
bdep init -C ./build-clang  @clang  cc --options-file config-clang.options
bdep init -C ./build-gcc    @gcc    cc --options-file config-gcc.options

bdep update -a
bdep test -a
