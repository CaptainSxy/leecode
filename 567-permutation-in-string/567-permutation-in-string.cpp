class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> A;
        if(s1.size()>s2.size())
            return false;
        else{
            for(char c:s1){   //与s1的每个元素个数进行比较
              if(A.find(c)!=A.end())
                continue;
              else
                A.insert({c, count(s1.begin(),s1.end(), c)});
              }
            for(int i=0;i<s2.size()-s1.size()+1;i++){
                string s2_sub = s2.substr(i, s1.size()); //新的s2子串
                bool flag = true;
                for(auto x:A){   //与s1的每个元素个数进行比较
                  int num1 = x.second;
                  int num2 = count(s2_sub.begin(),s2_sub.end(), x.first);
                  if(num1 != num2){
                    flag = false;
                    break;
                  }
                }
                if(flag)
                  return true;
            }
        }
        return false;
    }
};