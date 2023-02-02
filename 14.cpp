#include<iostream>
using namespace std;

int main(){
    int option ;
    cin>> option;

    cout<<endl;
    switch(option){

        case 1: cout<<"hello"<<endl;
              break;  

        case 2: cout<<"bye"<<endl;
        break;

        default:cout<< "aap ja sakte h yaha se"<<endl;
    }
    //exit() can also be used to come out of loop

    return 0;
}