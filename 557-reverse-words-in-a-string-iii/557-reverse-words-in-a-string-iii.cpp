class Solution {
public:
    string reverseWords(string s) {
      vector<char> patch, p;
      for(char c:s){
        if(c==' '){
          p.insert(p.end(), patch.begin(), patch.end());
          vector<char>().swap(patch); //清空清除元素并回收内存，clear不回收空间capacity
          p.push_back(' ');
          continue;
        }
        patch.insert(patch.begin(), c);
      }
      p.insert(p.end(), patch.begin(), patch.end());
      string new_s(p.begin(),p.end());
      return  new_s;
    }
};