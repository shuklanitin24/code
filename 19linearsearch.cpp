#include<iostream>
using namespace std;

int search(int arr[],int size,int key){
    for(int i=0;i<size;i++){

        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}

int main(){
    int arr[10]={2,-3,4,-5,3,122,12,34,56};
    cout<<"entry the key u want to search"<<endl;

    int key;
    cin>>key;

    int found = search(arr, 10, key);

    if(found){
        cout<<"the key was found ";

    }
    else{
        cout<<"the key not found ";
    }
}