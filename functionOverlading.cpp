#include <stdio.h>

void func1()
{
   printf("func1\n"); 
}

void func1(int x)
{
    printf("func1 with argument %d\n", x);
}

int main()
{
    printf("Hello there\n");

    func1();
    func1(0);

    return 0;
}

