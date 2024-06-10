#include<stdio.h>
int main(){
    int num1;
    printf("Enter the input : ");
    scanf("%d",&num1);
    if(num1>0){
        if(num1<10)
            printf("value within 0 to 9");
        else
            printf("value not within 0 to 9");
    }else
        printf("value is -ve");
    printf("\n");
}