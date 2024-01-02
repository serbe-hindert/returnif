# returnif

returnif returns the value specified if the condtion is true, otherwise it does nothing.

## how to use the library
There is no need for compilation.
Just include the header file like:
```
add_executable(YourProjectName main.c PathToLibrary/returnif.h)
```

Full example:
```
cmake_minimum_required(VERSION 3.27)
project(ReturnIfTrue C)

set(CMAKE_C_STANDARD 23)

add_executable(ReturnIfTrue main.c lib/returnif.h)
```
