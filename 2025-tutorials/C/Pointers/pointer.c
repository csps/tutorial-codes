#include <stdio.h>

/*
 * Pointer Syntax in C:
 * 1. Declaration: type *pointer_name;  // e.g., int *p;
 * 2. Assignment: pointer_name = &variable;  // e.g., p = &a;
 * 3. Dereferencing: *pointer_name;  // e.g., *p = 10;
 *  
 * IMPOPRTANT: Dereferencing accesses the value in that address
 */

int main () {
    
    int a = 10;  
    int *p = &a; // Pointer 'p' stores address of 'a'

    // Print value of 'a' and its address
    printf("Value of a: %d\n", a);  
    printf("Address of a: %p\n", &a);  

    // Print value of 'p' (address of 'a') and address of 'p'
    printf("Value of p: %p\n", p);  
    printf("Address of p: %p\n", &p);  

    // Dereference pointer 'p' to modify value of 'a' 
    *p = 20; 
    
    // Print updated value of 'a' and dereferenced value of 'p'
    printf("Value of a: %d\n", a);  
    printf("Value of *p: %d\n", *p);  

    return 0;  
}
