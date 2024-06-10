#include<stdio.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    if(number%2==0){
        printf("Entered number is even number\n");
    }else{
        printf("Entered number is odd number\n");
    }
    printf("Entered number is %d\n",number);
}