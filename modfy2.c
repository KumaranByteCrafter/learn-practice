#include<stdio.h>
int main(){
    int x = 100;
    float y = 323.458;
    printf("y = %.2f\n",y);
    printf("x = %d\n",x);
    printf("x = %05d\n",x); //0 flag length & precision
    printf("hexa of x = %#x\n",x);//usage of # to way to display the hexa with 0x if use normal %x return only value not with 0x
}