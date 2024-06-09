#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the values of a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);
    float e = (a+b+c)/3.0;
    printf("sum of three values : %d\n",a+b+c);
    printf("average of the 3 values : %.1f\n",e);
}