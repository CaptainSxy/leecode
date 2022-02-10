#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums1.size()==nums2.size())
          nums1 = nums2;
        else{
          for(int num:nums2){
              if(num<=nums1[0]){
                  nums1.insert(nums1.begin(), num);
                  nums1.erase(nums1.end()-1, nums1.end());
                  m++;
              }
              else if(num>=nums1[m-1]){
                  nums1[m] = num;
                  m++;
              }
              else{
                  int low=0, high=m-1;
                  int mid = (high-low)/2 + low;
                  // cout<<mid<<endl;
                  while(low<=high){
                      int mid = (high-low)/2 + low;
                      // cout<<low<<" "<<high<<endl;
                      if(nums1[mid]==num){
                          nums1.insert(nums1.begin()+mid, num);
                          nums1.erase(nums1.end()-1, nums1.end());
                          m++;
                          // mid = (high-low)/2 + low;
                          break;
                      }
                      else if(nums1[mid]>num){
                          if(nums1[mid-1]<num){
                              nums1.insert(nums1.begin()+mid, num);
                              nums1.erase(nums1.end()-1, nums1.end());
                              m++;
                              break;
                          }
                          else
                              high = mid-1;
                      }
                      else{
                          if(nums1[mid+1]>num){
                              nums1.insert(nums1.begin()+mid+1, num);
                              nums1.erase(nums1.end()-1, nums1.end());
                              m++;
                              break;
                          }
                          else
                              low = mid + 1;
                      }
                  }
              }
          }
        }
    }
};

int main(){
  vector<int> nums1{4,5,6,0,0,0}, nums2{1,2};
  int m=3, n=2;
  Solution solution;
  solution.merge(nums1, m, nums2, n);
  for (const auto &c : nums1) cout << c << " ";
  cout<<endl;
  // cout<<nums1<<endl;
}
