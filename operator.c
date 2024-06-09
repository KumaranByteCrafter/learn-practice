#include<stdio.h>
int main(){
    int x = 10;
    printf("x = %d\n",x);
    printf("++x  = %d\n",++x);//update increment and process value 
    printf("x++ = %d\n",x++);//process current value  after update the increment value
    printf("%d\n",x);

    printf("--x  = %d\n",--x);//decrement and process value 
    printf("x-- = %d\n",x--);//process current value  after decrement the value
    printf("%d\n",x);
}
