#include <iostream>

bool two_sets(int n){
    int sum = 0;

    for (int i = 1 ; i < n+1 ; i++){
        sum+=i;
    }
    // std::cout<<sum<<std::endl;
    if (sum%2==0){
        std::cout<<"YES";
        return true;
    }else{
        std::cout<<"NO";
        return false;
    }

}


int main(){


    two_sets(7);


    return 0;
}