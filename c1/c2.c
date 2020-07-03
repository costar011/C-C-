#include <stdio.h>
int main(void)
{
    int a = 0xA7, b = 0x43;
    int c = 032, d = 024;

    printf("0x47의 10진수 정수 값: %d \n", a);
    printf("0x43의 10진수 정수 값: %d \n", b);
    printf("032의 10진수 정수 값: %d \n", c);
    printf("024의 10진수 정수 값: %d \n", d);

    printf("%d-%d=%d \n", a, b, a - b);
    printf("%d+%d=%d \n", a, b, a + b);
    return 0;
}