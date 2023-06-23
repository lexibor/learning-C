#include <stdio.h>


void func(int &one, int two, float three)
{
    one = 50;
}

int main()
{
    int i = 1, i2 = 3;
    float f = 2;

    func(i, i2, f);

    printf("%d\n", i);

    float &fr = f;

    fr = 5.0f;

    printf("%g\n", f);


    return 0;
}