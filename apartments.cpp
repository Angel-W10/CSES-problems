#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check_apt(int buyer, int apt){
    if(apt<5){
        if(buyer==apt || buyer == apt+5){
            return true;
        }
    }
    if(buyer==apt || buyer == apt+5 || buyer == apt-5){
        return true;
    }
    return false;
}


int main(){

    int allocation = 0;

    int num_buyers, num_apts, diff;

    cin>>num_buyers;
    cin>>num_apts;
    cin>>diff;

    // creating arrays of sizes and then sorting them
    int buyers[num_buyers];
    int apts[num_apts];

    for (int i = 0; i< num_buyers;i++){
        cin>>buyers[i];
    }

    for (int i = 0; i< num_apts;i++){
        cin>>apts[i];
    }

    // sorting the arrays
    sort(buyers, buyers + num_buyers);
    sort(apts, apts + num_apts);

    for (int b = 0 ; b < num_buyers ; b ++){
        for (int a = 0 ; a < num_apts ; a++){
            if(check_apt(buyers[b], apts[a])==true){
                // cout<<buyers[b]<<" "<<apts[a]<<endl;
                allocation++;
                b++;
                break;
            }
        }
    }

    cout<<allocation;

    return 0;
}