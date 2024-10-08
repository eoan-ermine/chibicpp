# Building chibicpp with CMake

## With conan

1. Install dependencies
```shell
conan install . --output-folder=build --build=missing
```
2. Build the project
```shell
cmake --preset conan-release
cmake --build --preset conan-release
```

## Without conan

1. Install dependencies
```shell
sudo apt-get install libfmt-dev
```
2. Build the project
```shell
cmake -S . -B build
cmake --build build
```