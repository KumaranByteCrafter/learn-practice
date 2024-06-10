#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number<0){
        printf("given number is a -ve number\n");
    }
    printf("The given input is %d\n",number);
}