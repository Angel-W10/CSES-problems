#include<iostream>

using namespace std;

int main(){

    int len;
    cin>>len;
    long long int moves = 0;

    unsigned long long int arr[len];

    // GETTING IN THE INPUT
    for (int i = 0 ; i < len ; i ++){
        cin>>arr[i];
    }

    // // PRININTG THE ARRAY
    // cout<<"BEFORE: "<<endl;
    // for (int i = 0 ; i < len ;i ++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // CHECKING IF THE CURRENT ELEMENT IS LESS THEN THE PREVIOUS, 
    // THEN ADDING THE DIFF AND INCREASING THE MOVES VARIABLE

    for (int i = 1 ; i < len ;i ++){
        if(arr[i]<arr[i-1]){
            int diff = arr[i-1] - arr[i];
            // cout<<arr[i-1]<<" - "<<arr[i]<<" = "<<diff<<endl;
            arr[i] += diff;
            moves+=diff;
        }
    }

    // // PRININTG THE NEW ARRAY
    // cout<<"AFTER: "<<endl;
    // for (int i = 0 ; i < len ;i ++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    cout<<moves;

    return 0;
}