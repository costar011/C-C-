#include <stdio.h>
int main(void)
{
    int a = 2, b = 4, c = 6;
    a += 3;
    b *= 4;
    c %= 5;
    printf("결과: %d, %d,%d \n", a, b, c);
    return 0;
}