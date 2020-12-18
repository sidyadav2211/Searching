#include<stdio.h>

int Fact(int n){
    if(n==0){
        return 1;
    }
    else
    {
        return n*Fact(n-1);
    }
    
}

int main(){
    int num ,fac;
    printf("Enter the Number :");
    scanf("%d",&num);

    fac=Fact(num);
    printf("Factorial of %d :%d",num,fac);
    return 0;
}