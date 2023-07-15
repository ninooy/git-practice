#include <stdio.h>

int main()
{
    int * p ;
    int a;

    p = &a;
    *p = 30;

    printf(" a 의 값은 : %d \n", a);
    printf(" *p 의 값은 : %d \n ", *p);
    printf(" p의 값은 : %p \n", p);
    printf("감사합니다.");

    return 0;
}