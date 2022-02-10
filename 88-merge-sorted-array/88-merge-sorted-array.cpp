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
                  while(low<=high){
                      int mid = (high-low)/2 + low;
                      if(nums1[mid]==num){
                          nums1.insert(nums1.begin()+mid, num);
                          nums1.erase(nums1.end()-1, nums1.end());
                          m++;
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