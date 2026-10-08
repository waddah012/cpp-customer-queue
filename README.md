# Customer Queue Example

A first-in, first-out customer queue using the standard queue container.

An educational C++ example developed from coursework, organized as a standalone project.

## Build and run

Requires a C++17 compiler and Make. Smoke checks also require Python 3.

```sh
make
make run
make check
```

To choose a compiler: `make CXX=clang++` or `make CXX=g++`. Run `make clean` to remove build outputs.

## Example

The demonstration enqueues four customers, removes the first, then serves the remaining customers.

## Structure

- `src/`: source code and headers.
- `tests/smoke.py`: representative console checks with execution timeouts.
- `Makefile`: builds the source files together into `build/example`.

## Scope

Arrival times and customers are fixed demonstration values.

The source retains the original exercise logic and explanatory comments. Build outputs, submission documents, and course materials are not part of this repository.
