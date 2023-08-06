//WAP to calculate LCM of two numbers.
#include<stdio.h>
int main()
{
    int num_1,num_2,max;
    printf("Enter two positive integers:\n");
    scanf("%d%d",&num_1,&num_2);
    max=(num_1>num_2)?num_1:num_2;
    while(1)
    {
       if((max%num_1==0)&&(max%num_2==0))
       {
           printf("The LCM of %d and %d is %d.",num_1,num_2,max);
           break;
       }
       ++max;
    }
    return 0;
}
