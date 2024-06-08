#include<stdio.h>
#define AB 10
void fun()
{
    int s = AB * 100;   
    printf("s is %d\n",s);
}
#undef AB
int main(){
    fun();
}