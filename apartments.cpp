#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check_apt(int buyer, int apt, int diff){
    // if(apt<diff){
    //     for (int i = apt; i <= apt+diff ;i ++){
    //         if(buyer==i){
    //             return true;
    //         }
    //     }
    // }
    
    for (int i = apt-diff ; i <= apt+diff ; i ++){
        if(buyer==i){
            return true;
        }
    }
    return false;
}

aihfwim;

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
    // int c = 0;

    // sorting the arrays
    sort(buyers, buyers + num_buyers);
    sort(apts, apts + num_apts);

    for (int b = 0 ; b < num_buyers ; b ++){

        for (int a = 0 ; a < num_apts ; a++){
            cout<<"checking: "<<buyers[b]<<" "<<apts[a]<<endl;
            if(check_apt(buyers[b], apts[a], diff)==true){
                cout<<"approved"<<endl;
                allocation++;
                b++;
                c++;
                break;
            }
        }
    }


    // MAKE RECURSION BY REMOVING THE ELEMENT 

    cout<<allocation;

    return 0;
}