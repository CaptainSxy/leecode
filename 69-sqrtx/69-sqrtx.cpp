class Solution {
public:
    int mySqrt(int x) {
        int low = 1, high = x;
        int mid = 0;
        if(x==0)
            return 0;
        while(low<high){
            mid = (high-low)/2 + low;
            if(x/mid==mid){
                return mid;
            }
            else if(x/mid<mid){
                high = mid-1;
            }
            else
                low = mid+1;
        }
        if(x/high<high)
            return high-1;
        else
            return high;
    }
};