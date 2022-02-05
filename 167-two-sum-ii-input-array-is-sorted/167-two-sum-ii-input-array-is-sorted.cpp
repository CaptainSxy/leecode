class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int high = numbers.size()-1, low = 0;
        for(int ind1=0;ind1<numbers.size();ind1++){
            int num1 = numbers[ind1];
            low = ind1+1;
            while(low<=high){
                int mid = (high - low)/2 + low;
                int add = num1 + numbers[mid];
                if(add == target){
                    int ind2 = mid;
                    return {ind1+1, ind2+1};
                }
                else if(num1 + numbers[mid] > target)
                    high = mid - 1;
                else
                    low = mid + 1;        
            }
        }
        return {-1, -1};
    }
};