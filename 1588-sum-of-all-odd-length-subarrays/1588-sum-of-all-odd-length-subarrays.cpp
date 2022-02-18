class Solution {
public:
    int getSubarraysSum(vector<int>& arr, int len){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(i+len>arr.size())
                break;
            for(int j=i;j<i+len;j++){
              sum+=arr[j];
            }
        }
        return sum;
    }
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int len=1;len<=arr.size();len=len+2){  
            sum += getSubarraysSum(arr, len);
        }
        return sum;
    }
};