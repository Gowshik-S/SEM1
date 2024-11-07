#include<stdio.h>
int main()
{
    int no,reverse=0,remainder,hun,ten,unit;
    printf("Enter integer : ");
    scanf("%d",&no);
    hun=(no/100);
    ten=((no/10)%10);
         unit=(no%10);
         printf("%d hundered \n%d tens \n%d unit \n",hun,ten,unit);
         while(no!=0)
{
    remainder=no%10;
    reverse = reverse * 10 + remainder;
    no/=10;
}
printf("Reversed number : %d",reverse);
}
