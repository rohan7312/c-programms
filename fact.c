#include<stdio.h>
void add();
main()
{
int i,n,fact=i;
printf("\n enter n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("\n fact=%d",fact);
  printf("\n welcome");
  add();
}
void add()
{
  int a,b,c;
  printf("\n enter a&b");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("\n add=%",c);
}
