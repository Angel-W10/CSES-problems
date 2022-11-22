#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;


int div(int nums[], int count){
    int max_num = *max_element(nums, nums+count);

    int min_num = *min_element(nums, nums+count);

    // cout<<max_num<<" "<<min_num<<endl;

    int sum1 = max_num+min_num;
    int sum2 = 0;
    for (int i =0;i<count;i++){
        if(nums[i]!=max_num && nums[i]!=min_num){
            sum2+=nums[i];
        }
    }

    int d1 = abs(sum1 - sum2);

    cout<<d1<<endl;
    return d1;
}

int main(){


    int count;
    cin>>count;

    int nums[count];

    for (int i = 0 ; i < count ; i++){
        cin>>nums[i];
    }

    cout<<div(nums, count);


    // d1, d2
    // while(d2<d1){
        // 
    //}





    return 0;
}
