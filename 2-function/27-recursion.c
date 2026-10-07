// Print 27 times V's ARC

#include <stdio.h>

void printHV(int count);

int main()
{
    printHV(27);
    return 0;
}

// RECURSIVE F(X)
void printHV(int count)
{
    // Base case (this is the key difference)
    if (count == 0)
    { // WHERE should I stop?
        return;
    }
    printf("V's ARC \n");
    printHV(count - 1); // HOW do I move towards that stop?
    count - 1;
    //"Do the same job again, but reduce the count by 1."
}
