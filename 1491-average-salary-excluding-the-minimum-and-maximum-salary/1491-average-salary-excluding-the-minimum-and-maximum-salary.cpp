class Solution {
public:
    double average(vector<int>& salary) {
        if(salary.size()<3)
            return 0;
        int max_num = 0, min_num = salary[0];
        double sum = 0;
        for(int num:salary){
            max_num = max(num, max_num);
            min_num = min(num, min_num);
            sum += num;
        }
        sum  = sum - max_num - min_num;
        double avg = sum/(salary.size()-2);
        return avg;
    }
};