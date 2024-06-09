#include<stdio.h>
int sqr(int x)//inside the () this it can be local varibale or parameter
{
    int sq;//inside the function is called local variable
    sq = x * x; 
    return sq;
}
int main(){
    int n;
    printf("Enter the input: ");
    scanf("%d",&n);
    printf("square of %d = %d\n",n,sqr(n));
    return 0;//no run time error or successfully executed program /can be use or not it us wish no proble for not using 
}