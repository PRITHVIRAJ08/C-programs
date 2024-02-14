
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
    r=r*10+rem;
    n=n/10;
    }
    
    if(original==r){
        printf("palindrome");
    }
    else{
        printf("%d not a palindrom",r);
    }
    return 0;
}