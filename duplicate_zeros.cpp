// Input: arr = [1,0,2,3,0,4,5,0]
// Output: [1,0,0,2,3,0,0,4]
// Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

#include <iostream>
#include <vector>

using namespace std;

vector<int> shift(vector<int> arr, int pos){
    int len = arr.size();
    
    for (int j = len-2; j>=pos ; j--){
        // cout<<arr[j+1]<<" <- "<<arr[j]<<endl;
        arr[j+1] = arr[j];
    }
    for (int i =0 ; i < arr.size() ; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    return arr;
}
    
void duplicateZeros(vector<int>& arr) {
    int len = arr.size();
    
    for (int i = 0 ; i<len ; i++){
        if(arr[i]==0){
          // cout<<arr[i]<<" "<<i<<endl;
            arr = shift(arr, i);
            i++;
        }
    }
}


int main(){

  vector <int> arr;
  arr.push_back(1);
  arr.push_back(0);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(0);
  arr.push_back(4);
  arr.push_back(5);
  arr.push_back(0);

  duplicateZeros(arr);

  for (int i =0 ; i < arr.size() ; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}

