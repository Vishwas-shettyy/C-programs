#include <stdio.h>

void square(int n);

int main()
{
    int number = 27;
    square(number);
    printf("number is %d\n", number);
    return 0;
}

// call by value = We pass value of variable as argument
void square(int n)
{
    int result = n * n;
    printf("Square of %d is %d\n", n, result);
}