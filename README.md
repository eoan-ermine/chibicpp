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

# Executing the Tests

Testing is performed when the check-all target is built. For instance, if you are using Makefiles, execute this command in the root of your build directory:

```shell
make check-all
```

Or, with conan presets:

```shell
cmake --build --preset conan-release -t check-all
```