#include<stdio.h>
int main()
{
int num,count=0;
{
printf("Enter a number: ");
scanf("%d",&num);
}
{
for(num!=0;num=num/10;count++);
}
{
printf("Digits is: %d",count);
}
 return 0;
}
