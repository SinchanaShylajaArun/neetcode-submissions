class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,char> newm1,newm2;
                if(s.size()!=t.size()){
                    return false;
                }
           
                for(char c:s){
                    newm1[c]++;
                }
                 for(char c:t){
                    newm2[c]++;
                }
                return newm1==newm2;

        
    }
};
