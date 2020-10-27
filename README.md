# bitwallet-cxx

Clone this repository with all submodules.

`$ git clone --recurse-submodules https://github.com/tiendq/bitwallet-cxx.git`

If you already cloned the project and forgot `--recurse-submodules`, you can try it again with `git submodule update --init`.

Build with CMake.

```bash
$ mkdir build
$ cd build
$ cmake -DCMAKE_BUILD_TYPE=Debug ..
$ cmake --build .
```
