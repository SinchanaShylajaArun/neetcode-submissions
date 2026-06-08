class Solution {
public:
    int scoreOfString(string s) {
int d=0;
        for(char c=0;c<s.length()-1;c++){
            
             d+=abs(s[c]-s[c+1]);
        }
         return d;
    }

};