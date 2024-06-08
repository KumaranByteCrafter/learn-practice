#include<stdio.h>
#define AB 10
#undef AB
int main()
{
    printf("AB is %d\n",AB);
}