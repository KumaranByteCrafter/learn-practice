#include<stdio.h>
int main(){
    int z = 1;
    while(z<10)
    {
        printf("x = %d\n",z);
        int a = z++;
        printf("a = %d\n",a);
    }
}