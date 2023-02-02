#include<iostream>
using namespace std;

int main(){
    int amount,n=1;
    cin>>amount;

    switch(n){
        case 1: cout<<"No. of notes of 100 are "<<(amount/100)<<endl;
               amount=amount-(amount/100)*100;

        case 2: cout<<"No. of notes of 50 required are "<<(amount/50)<<endl;
               amount=amount-(amount/50)*50;

        case 3: cout<<"No. of notes of 20 required are "<<(amount/20)<<endl;
               amount=amount-(amount/20)*20;

        case 4: cout<<"No. of notes of 1 required are "<<(amount/1)<<endl;
        break;

        default: cout<<"Enter valid no. to be counted"<<endl;                    
    }

}