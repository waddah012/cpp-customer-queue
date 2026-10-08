# Customer queue

This is a short example of a customer line using queue in C++. The first customer to enter is the first one to leave.

I added four customers, removed the first one, and then served the rest in order. The customer numbers and arrival times are set in the code, so there is nothing to enter when you run it.

To build and run it, you need a C++17 compiler and Make. Open a terminal in this folder and run:

```sh
make
make run
```

You can also run `make check` to check the sample output. That needs Python 3. Use `make clean` if you want to remove the compiled program.
