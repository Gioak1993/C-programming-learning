/* pointers practice and examples */

#include <stdio.h>

int main() {

    int x = 4;
    int *address_of_x = &x;
    printf("x lives at %p\n", address_of_x);
    printf("the store value is %i\n", *address_of_x);
    x = 5;
    printf("the store value is %i\n", *address_of_x);

}