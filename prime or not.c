#include <stdio.h>

int main() {
    int a;
    int i,c=0;
    printf("Enter the  number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    if(a%i==0){
    c=c+1;
    }
    }
    if(c==2){
        printf("  prime");
    }
    else{
        printf("not a prime");
    }
    return 0;
}