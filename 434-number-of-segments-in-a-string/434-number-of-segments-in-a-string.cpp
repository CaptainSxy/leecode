class Solution {
public:
    int countSegments(string s) {
        string temp;
        int count = 0;
        for(char c:s){
            if(c==' '){
                if(temp.size()>0){
                    count++;
                    temp.clear();
                }
                continue;
            }
            temp.push_back(c);
        }
        if(temp.size()>0)
            count++;
        return count;
    }
};