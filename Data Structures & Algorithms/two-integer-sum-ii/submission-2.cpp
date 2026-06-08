class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int i =0,j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==target){
                // res.push_back(std::make_pair(nums[i], nums[j]));
                // res.push_back(nums[i],nums[j]);
                // res.push_back(std::pair<int, int>{nums[i], nums[j]});
              res.push_back(i+1);
                res.push_back(j+1);
                break;
                }else if(nums[i]+nums[j]>target){
                    j--;
                }else{
                    i++;
                }
        }
        return res;
    }
};
