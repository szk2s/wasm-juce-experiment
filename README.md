# wasm-juce-example
Compile JUCE codes written in C++ as WebAssembly modules and play sound from browser UI

## Commands
```shell
# Install
yarn && yarn install:emsdk

# Activate emscripten (needed before first compilation)
source ./node_modules/emsdk/emsdk_env.sh

# Compile C++ code into wasm
yarn compile

# Run
yarn serve
```