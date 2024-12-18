# Memory Leak in C due to Unchecked malloc

This repository demonstrates a common error in C programming: a potential memory leak caused by not checking the return value of `malloc`.  The `malloc` function can fail, returning `NULL`, but the code doesn't handle this case.

## Bug Description

The `bug.c` file contains a program that attempts to allocate memory using `malloc` but doesn't check for errors. If `malloc` fails, the program will attempt to write to unallocated memory leading to unexpected crashes or other undefined behaviour.  Moreover, the memory allocated by `malloc` will not be deallocated properly, resulting in memory leakage.

## Solution

The `bugSolution.c` file provides a corrected version of the code. It checks the return value of `malloc` before attempting to use the allocated memory. If `malloc` fails, an error message is printed, and the program exits gracefully.

## How to Reproduce

1.  Clone this repository.
2.  Compile both `bug.c` and `bugSolution.c` using a C compiler (e.g., GCC):
    ```bash
gcc bug.c -o bug
gcc bugSolution.c -o bugSolution
    ```
3.  Run both executables.

## Lessons Learned

- Always check the return value of `malloc` to prevent memory leaks and undefined behavior.
- Proper error handling is crucial for robust and reliable C programs.