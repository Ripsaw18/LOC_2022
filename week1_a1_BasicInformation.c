#include<stdio.h>
int main(){
    char n[20],b[40],h[100],r[20];
    printf("Name:\n");
    gets(n);
    printf("Regd. No.:\n");
    gets(r);
    printf("Branch:\n");
    gets(b);
    printf("Hobbies:\n");
    gets(h);
    printf("%s\n",n);
    printf("%d\n",r);
    printf("%s\n",b);
    printf("%s\n",h);
}