#include<stdio.h>
int main() {
    int n,rem,original;
    int r=0;
    printf("Enter the number");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
    rem=n%10;
    r=r+(rem*rem*rem);
    n=n/10;
    }
    
    if(original==r){
        printf("armstrong");
    }
    else{
        printf("%d not a armstrong",r);
    }
    return 0;
}