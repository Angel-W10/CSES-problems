#include <iostream>
#include <string>
#include <cstdint>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long int factorial=1;
    while(n>=1){
        factorial*=n;
        n--;
    }

    // cout<<factorial<<endl;

    string fac = to_string(factorial);
    int zeros = 0;
    int c = fac.size()-1;
    while(c>=0 && fac[c]=='0'){
        zeros++;
        c--;
    }
    
    cout<<zeros;

    return 0;
}