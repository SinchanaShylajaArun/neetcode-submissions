class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int > map1;
        for(int i =0;i<=nums.size()-1;i++){
            int rem=target-nums[i];
            if(map1.count(rem))
                return {map1[rem],i};
            
            map1[nums[i]]=i;

            }
return {};
        }
    //    sorting can't be done coz original position of the ele will be lost
      
    };