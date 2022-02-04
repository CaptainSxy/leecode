// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
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