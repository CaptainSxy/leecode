class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int power_r=0, power_l=0;
        int res = right;
        if(left==right)
            return left;
        while(res>1){
            res /= 2;
            power_r++;
        }
        int num = pow(2, power_r);
        int power_org = power_r;
        while(power_r>0){ 
            if(num<left){
                power_r--;
                num += pow(2, power_r);
            }
            else if(num>right){
                num -= pow(2, power_r);
            }
            else    
                break;
            // cout<<num<<" "<<power_r;
        }
        // cout<<num<<" "<<power_r; //pow(2, power_r);
        if(left>=num)
            return num;
        else if(right==num && left<pow(2, power_org))
            return 0;
        else
            return num - pow(2, power_r);
    }
};