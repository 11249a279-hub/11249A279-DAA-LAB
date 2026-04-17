#include<stdio.h>
int fib(int n)
{
  if(n==0)
{
return 0;
}
if(n==1)
{
return 1;
}
fib(n-1) + fib(n-2);
return fib(n-1) + fib(n-2);
}
int main()
{
  int n,a=0,b=1,c;
printf("Enter n value : ");
scanf("%d",&n);
if(n<0)
{
printf("Invalid Entry\n");
}
printf("Fibonacci Term is : %d",fib(n));
return 0;
}
