class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1, high=num;
        while(low<=high){
            int mid = (high-low)/2+low;
            if(num/mid==mid){
                if(num%mid == 0)
                    return true;
                else
                    return false;
            }
            else if(num/mid>mid)
                low = mid+1;
            else
                high = mid-1;
        }
        return false;
    }
};