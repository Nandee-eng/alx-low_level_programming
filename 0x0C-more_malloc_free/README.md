README: Malloc and Free in C
This README provides a brief overview of malloc and free in the C programming language. These functions are used for dynamic memory allocation and deallocation, allowing programs to allocate memory at runtime as needed.

malloc Function
The malloc function (short for "memory allocation") is used to dynamically allocate memory in C. It reserves a block of memory of a specified size and returns a pointer to the beginning of that block.

Syntax
c
Copy code
void* malloc(size_t size);
Parameters
size: The number of bytes to allocate.
Return Value
On success: a pointer to the beginning of the allocated memory block.
On failure: NULL (if the allocation failed).
Example Usage
c
Copy code
#include <stdlib.h>

int* numbers = (int*)malloc(5 * sizeof(int));
if (numbers != NULL) {
    // Memory allocation successful
    // Use the 'numbers' array here
}
free Function
The free function is used to deallocate memory that was previously allocated using malloc or related functions. It releases the memory back to the operating system.

Syntax
c
Copy code
void free(void* ptr);
Parameters
ptr: A pointer to the memory block to deallocate.
Return Value
free doesn't return any value.

Example Usage
c
Copy code
int* numbers = (int*)malloc(5 * sizeof(int));
if (numbers != NULL) {
    // Memory allocation successful
    // Use the 'numbers' array here

    // Deallocate the memory when it's no longer needed
    free(numbers);
}
Important Considerations
Memory allocated with malloc should always be freed using free to avoid memory leaks.
Using memory after it has been freed leads to undefined behavior.
The returned pointer from malloc should be cast to the appropriate data type before usage.
