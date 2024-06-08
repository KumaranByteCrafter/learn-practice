#include<stdio.h>
void fun()
{
    static int  y=5;
    y=y+1;
    printf("y = %d\n",y);
}
int main(){
    fun();
    fun();
    fun();
}