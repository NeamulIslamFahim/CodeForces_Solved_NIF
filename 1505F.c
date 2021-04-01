#include<stdio.h>

int main(void)
{

    int a;
    scanf("%d", &a);
    if(a>=-100 || a<=100)
    {
        printf("%d", 2-a*a);
    }
}
