#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>
// #include <stdio.h>
// #include<unordered_map>
using namespace std;

class Solution {
public:
    int getSubarraysSum(vector<int>& arr, int len){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(i+len>arr.size())
                break;
            // cout<<i<<" "<<i+len<<endl;
            for(int j=i;j<i+len;j++){
              // cout<<arr[j]<<" ";
              sum+=arr[j];
            }
                // sum+=arr[j];
        }
        return sum;
    }
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int len=1;len<=arr.size();len=len+2){  //arr.size()
            sum += getSubarraysSum(arr, len);
        }
        return sum;
    }
};

int main(){
  vector<int> nums{1,4,2,5,3};
  Solution solution;
  // solution.findMin(nums);
  cout<<solution.sumOddLengthSubarrays(nums);
  cout<<endl;
}
