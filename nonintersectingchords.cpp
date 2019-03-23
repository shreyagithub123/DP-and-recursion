#include<bits/stdc++.h>
using namespace std;
int chord(int A)
{
    int n=2*A;
   int  d[n+1]={0};
    d[0]=d[2]=1;
    for(int i=4;i<=n;i=i+2)
    {
        for(int j=0;j<i-1;j=j+2)
            d[i]+=d[j]*d[i-j-2];
    }
    return d[n];

}
int main()
{
    int N=10;
    int m=chord(N);
    cout<<m<<endl;
    return 0;
}
