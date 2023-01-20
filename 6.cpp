#include<iostream>
using namespace std;

int main()
{
    int number,i,sum=0;
    cin>>number;
    cout<<"sum of even no. till "<< number <<endl;
    for(i=1;i<=number;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        
    }
    cout<<sum<<endl;
    return 0;
}