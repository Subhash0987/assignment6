//WAP to reverse of a given number.
#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reverse of a given number=%d\n",rev);
    return 0;
}
