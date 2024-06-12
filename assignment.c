#include<stdio.h>
int main(){
    int row;
    printf("Enter the number for pyramid ");
    scanf("%d",&row);
    int spaces = row-1;
    for(int i=1;i<row*2;i = i+2){
        for(int k=spaces;k>0;k--){
            printf(" ");
        }
        spaces = spaces-1;
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}