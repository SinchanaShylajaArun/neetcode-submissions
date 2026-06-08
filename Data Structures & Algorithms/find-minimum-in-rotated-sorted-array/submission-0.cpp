class Solution {
public:
    int findMin(vector<int> &nums) {
  
        sort(nums.begin(),nums.end());
      int min=nums[0];
        // for(int i =0;i<=nums.size();i++){
        //     if(nums[i]<min){
        //         min=nums[i+1];
        //     }
        // }
        return min;
    }
};
