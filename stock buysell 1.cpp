#include<stdio.h>
struct interval
{
    int buy;
    int sell;
};
void buysell(int price[],int n)
{
    int i=0,count=0;
    if(n==1)
        return;
    interval sol[n/2+1];
    while(i<n-1)
    {
        while((i<n-1)&&(price[i+1]<=price[i]))
            i++;
        if(i==n-1)
            break;
            sol[count].buy=i++;
            while ((i < n) && (price[i] >= price[i-1]))
            i++;
        sol[count].sell = i-1;
          count++;

    }
    if (count==0)
        printf("no");
    else
    for(i=0;i<count;i++)
    {
        printf("%d %d\n",sol[i].buy,sol[i].sell);
    }

}
int main()
{
    int price[]={100,180,260,310,40,535,695};
    int n=sizeof(price)/sizeof(price[0]);
    buysell(price,n);
    return 0;

}
