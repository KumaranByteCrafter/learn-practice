#include<stdio.h>
int a = 10;//global variable declared outside the funtions
void fun1()
{
    int x;
    x  = a * 10;
    printf("x = %d\n",x);
}
void fun2()
{
    int y;
    y = a * 100;
    printf("y = %d\n",y);
}
int main()
{
    printf("value of a = %d\n",a);
    fun1();
    fun2();
    {//created a new inner clock
        int a=25;
        printf("a from inner block = %d\n",a);
        fun1();
    }
}