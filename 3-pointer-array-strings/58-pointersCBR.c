#include <stdio.h>

void square(int n);
void _square(int *n);

int main()
{
    int number = 27;
    square(number);
    printf("number is %d\n", number);
    _square(&number);
    printf("number is %d\n", number); // The value of x is changed because, in the _square() function, we use the pointer to access and modify the value stored at x's address.
    return;
}

// call by value = We pass value of variable as argument
void square(int n)
{
    int result = n * n;
    printf("Square of %d is %d\n", n, result);
}

void _square(int *n)
{
    *n = (*n) * (*n);
    printf("square = %d \n", *n); // here we have changed the value of x at his adress usign ptr
}