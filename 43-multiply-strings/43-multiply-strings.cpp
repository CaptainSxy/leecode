class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")
            return "0";
        int sum = 0, add = 0, num = 0;
        int n, n1, n2;
        string temp;
        vector<string> nums;
        for(int i=num1.size()-1;i>=0;i--){
            n1 = num1[i]-48;
            temp.clear();
            for(int k=i+1;k<num1.size();k++)
                temp.insert(temp.begin(), 48);
            for(int j=num2.size()-1;j>=0;j--){
                n2 = num2[j]-48;
                n = n1 * n2 + add;
                temp.push_back(n%10+48);
                add = n/10;
            }
            if(add>0)
                temp.push_back(add+48);
            nums.push_back(temp);
            add = 0;
        }

        string ans;
        add = 0;
        for(int i=0;i<nums.back().size();i++){
            int num = 0;
            for(int j=nums.size()-1;j>=0;j--){
                if(nums[j].size()<i+1)
                    break;
                num += nums[j][i]-48;
            }
            num += add;
            char c = num%10 + 48;
            add = num/10;
            ans.insert(ans.begin(), c);
        }
        if(add>0){
            ans.insert(ans.begin(), add+48);
        }
        return ans;
    }
};