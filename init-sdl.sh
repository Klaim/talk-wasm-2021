rm -rf ./sdl/
git clone git@github.com:libsdl-org/SDL.git ./sdl/sources/
cmake -S ./sdl/sources -B ./sdl/build/ -DSDL_CMAKE_DEBUG_POSTFIX= -DBUILD_SHARED_LIBS=NO
cmake --build ./sdl/build/
cmake --install ./sdl/build/ --prefix ./sdl/install/
