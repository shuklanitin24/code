#include<iostream>
using namespace std;

int main()
{
    int a,b,n=10;
    a=0;
    b=1;
    cout<<a<<" "<<b<< " ";
    for(int i=0;i<=n;i++){
        int sum=a+b;
        cout<<sum<<" ";

        a=b;
        b=sum;
    }

}