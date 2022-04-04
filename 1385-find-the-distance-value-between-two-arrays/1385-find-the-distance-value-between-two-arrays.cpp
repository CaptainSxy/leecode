class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        bool flag = true;
        int count = 0;
        for(int i=0;i<arr1.size();i++){
            int a = arr1[i];
            flag = true;
            for(int j=0;j<arr2.size();j++){
                int b= arr2[j];
                if(abs(a-b)<=d){
                    flag = false;
                    break;
                }
            }
            if(flag)
                count++;
        }
        return count;
    }
};