#include<stdio.h>
int main()
{
    int num,ones,tens,result;
    printf("enter the number:");
    scanf("%d",&num);
    ones=num%10;
    tens=num/10;
    printf("%d",tens<=ones);
    return 0;
}
