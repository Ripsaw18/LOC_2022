#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    if (a%2==0){
        b=1;
    }
    switch(b)
    {
    case (1):
        printf("Even");
        break;
    
    default:
        printf("Odd");
        break;
    }
}