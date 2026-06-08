class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxOne=0;
       int maxFinal=0;
        for(int i =0;i<=n-1;i++){
            if(nums[i]==1){
               maxOne++;
            maxFinal=max(maxFinal,maxOne);
        }else if(nums[i]==0){
            maxOne=0;
        }else{
            return 0;
        }
        }
        return maxFinal ;
        
    }
};