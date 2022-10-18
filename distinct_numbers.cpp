#include <iostream>

using namespace std;

bool is_it_same(int arr[], int num, int len){
    for (int i = 0 ; i  < len; i ++){
        if(arr[i]==num){
            return true;
        }
    }
    return false;
}

int main(){

    long int len;
    cin>>len;

    int arr[len];
    int cap = 0 ;
    int temp;

    for (int i = 0; i < len; i++){
        cin>>temp;
        // cout<<"temp: "<<temp<<endl;
        if(cap == 0){
            arr[cap]=temp;
            cap++;
        }
        else{
            // int l=sizeof(arr)/sizeof(int); 
            if(is_it_same(arr, temp, cap)==false){
                arr[cap]=temp;
                cap++;
            }
        }
        // cout<<"cap: "<<cap<<endl;
        // cout<<"i: "<<i<<" | arr[i]: "<<arr[i]<<endl;
        // for (int k = 0 ; k < cap; k++){
        //     cout<<arr[k]<<" ";
        // }
        // cout<<endl;
    }

    cout<<cap;

    return 0;
}