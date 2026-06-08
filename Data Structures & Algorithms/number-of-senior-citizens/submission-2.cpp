class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n =details.size();
     int seniors=0;
        for(int i=0;i<=n-1;i++){
            
            if(details[i][11] >'6'|| details[i][11]=='6'&& details[i][12]>'0'){
                
                seniors++;
            }
        }
     return seniors ;   
    }
};