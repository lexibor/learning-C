#include <stdio.h>

void func1();
void func1(int x);
// ORDER OF FUNCTIONS MATTERS, DECLARE FUNCTIONS AT THE TOP
// AND DEFINE AT THE BOTTOM OR DECLARE AND DEFINE AT THE TOP BEFORE MAIN


int main()
{
    printf("Hello there\n");

    func1();
    func1(0);

    return 0;
}

void func1()
{
   printf("func1\n"); 
}

void func1(int x)
{
    printf("func1 with argument %d\n", x);
}

