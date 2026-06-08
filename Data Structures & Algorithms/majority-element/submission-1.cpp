class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size()-1;
        int maj=n/2;
       sort(nums.begin(),nums.end());
       if(n==0){
        return nums[n];
       }
        for(int i =0;i<=n-1;i++){
            return nums[maj];
          
                
            
        }
        return 0;
    }
};