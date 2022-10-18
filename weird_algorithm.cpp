#include <iostream>


int weird_algo(long int n){     //long int for higher numbers
    if (n<1){
        return -1;
    }
    if (n==1){                  // check if n==1 and return
        return n;
    }
    if(n%2==0){                 // if n is even, divide by 2
        n = n/2;
        std::cout<<n<<" ";
        return weird_algo(n);
    }
    else{
        n = 3*n + 1;           //if n is odd, times 3 add one
        std::cout<<n<<" ";
        return weird_algo(n);
    }
}

int main(){

    int n;
    std::cin>>n;
    std::cout<<n<<" ";
    weird_algo(n);
    return 0;
}