#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a positive integer:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d\n",sum);
    return 0;
}
