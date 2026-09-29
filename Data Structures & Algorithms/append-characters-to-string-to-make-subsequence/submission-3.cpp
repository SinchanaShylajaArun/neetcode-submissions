class Solution {
public:
    int appendCharacters(string s, string t) {
         int j=0;
         int i=0;
        //  since i and j start from 0, it is only < and not <=
         while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
                i++;
            }
         }
        

        // since j tells us how many characters of j is left, we subtract that from the length
        return t.length()-j;
    }
};