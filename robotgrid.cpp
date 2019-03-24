#include<iostream>
using namespace std;
int numberofpaths(int m,int n)
{
   if(m==1||n==1)
        return 1;
   else
    return numberofpaths(m-1,n)+numberofpaths(m,n-1);
}
int main()
{
    int m,n;
    cout<<numberofpaths(3,3);
}
