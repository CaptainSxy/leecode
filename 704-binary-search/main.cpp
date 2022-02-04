#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int mid = int(high / 2);
        while(1){
            if(nums[mid] == target)
              return mid;
            else if(nums[mid] < target){
              low = mid + 1;
              if(low > nums.size()-1)
                return -1;
              if(nums[mid+1] > target){
                return -1;
              }
            }
            else{
              high = mid - 1;
              if(high < 0)
                return -1;
              if(nums[mid-1]<target){
                return -1;
              }
            }
            mid = int((low + high) / 2);
        }
        return -1;
    }
};

int main() {
    int a[] = {-1,0,3,5,9,12};
    int target =9;
    vector<int> nums(a, a + sizeof(a) / sizeof(int));
    Solution solution;
    cout << solution.search(nums, target) << endl;
}
