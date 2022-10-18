#include <iostream>
#include <string>
using namespace std;

int repetitions(string s){

    // if string length is 0, return 0
    int len = s.length();
    if(len<1){
        return 0;
    }

    int base_sum = 1;
    int next_sum = 1;

    // go through each element, keep checking if the next character is same
    // then increment the next sum
    // if the next sum becomes greater than the base, base = next
    for (int i = 1 ; i < len ; i++){
        if(s[i-1]==s[i]){
            next_sum++;
            if(next_sum>base_sum){
            base_sum=next_sum;
        }
        }
        else{
            next_sum=1;
        }
    }
    return base_sum;
}


int main(){

    string s;
    cin>>s;

    cout<<repetitions(s);


    return 0;
}