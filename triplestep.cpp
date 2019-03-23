#include<stdio.h>
int count(int n)
{
   if(n==1||n==0)
        return 1;
   else if(n==2)
    return 2;
   else
   return count(n-1)+count(n-2)+count(n-3);
}
int main()
{

int n=3;
int res=count(n);
printf("%d\n",res);
return 0;
}


