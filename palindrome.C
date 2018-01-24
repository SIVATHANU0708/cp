#include<stdio.h>
int main()
{
int n,original,remainder=0,reversed;
printf("enter an integer=");
sacnf("%d",&n);
original=n;
while(n!=0)
{
remainder=n%10;
reversed=reversed*10+remainder;
n=n/10;
}
if(original==reversed);
printf("yes %d",reversed);
else
printf("no %d",reversed);
return 0;
}
