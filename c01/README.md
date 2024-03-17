https://youtube.com/playlist?list=PLxeKVrYoZO6CZlYBPJVZQ_n4AulUhjV4p

# ex00

## Pointers

https://42.nauman.cc/2023/06/03/basics-of-c-pointers/

int var = 42;
int* ptr = &var;

Pointers are variables that store mem address of another variable.
In this case, int* ptr denotes ptr is a pointer to an integer. 
& in &var **returns the mem address** of var. ONLY for non-pointers.

int a = *ptr; // a = 42

To **access value** stored at mem by pointer, use dereference * ops.

*ptr = 69 // var = 69

Here, var is changed indirectly when *ptr is changed.

### Double Pointers

Pointer of a pointer.

int var = 42;
int* ptr = &var;
int** 2ptr = &ptr;

int a = **2ptr; // a = 42