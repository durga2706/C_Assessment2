#include<stdio.h>
int main()
{
    int num,ones,tens,hundreds,thousands,result;
    printf("enter the number:");
    scanf("%d",&num);
    ones=num%10;
    tens=(num/10)%10;
    hundreds=(num/100)%10;
    thousands=num/1000;
    printf("%d",(thousands==tens)*(hundreds==ones));
    return 0;
}
