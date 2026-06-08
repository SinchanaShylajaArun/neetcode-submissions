class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int>ans;
        int n =nums.size();
        for(int i =0;i<=n-1;i++){
            ans.push_back(nums[i]);
            // n times is pushed to ans;
            // to push the same thing again ?
        }
           for(int i =0;i<=n-1;i++){
            ans.push_back(nums[i]);
            // this is 1,1,4,4,1,1,2,2 but i want 1,4,1,2,1,4,1,2
            
           
        }
       
    
     return ans;
    }

};