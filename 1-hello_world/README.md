
How To build
------------

1. Install Emscripten EMSDK
2. Make Emscripten's tools available: `source <path to emsdk>/emsdk_env.sh`
3. Build: `em++ hello.cpp -o hello.js`
4. Test: `node hello.js`
or make an html:
```
<html>
    <script src="hello.js"></script>
</html>
```

Alternatively:
```
em++ hello.cpp -o hello.html
emrun hello.html --browser chromium
```