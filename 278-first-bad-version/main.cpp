#include<iostream>
#include<vector>
using namespace std;

#define bad 1702766719
bool isBadVersion(int version){
  if(version >= bad)
    return true;
  return false;
}

class Solution {
public:
    int firstBadVersion(long n) {
        long low = 1, high = n;
        if(isBadVersion(low))
            return low;
        while(low<=high){
            long mid = (high - low)/2 + low;
            if(isBadVersion(mid)){
                if(!isBadVersion(mid-1))
                    return mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};

int main(){
  long n = 2126753390;
  Solution solution;
  cout << solution.firstBadVersion(n) << endl;
}
