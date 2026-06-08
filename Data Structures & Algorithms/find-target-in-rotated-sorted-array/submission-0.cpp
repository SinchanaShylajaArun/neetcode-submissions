class Solution {
public:
    int search(vector<int>& nums, int target) {
           if (nums.empty()) {
            return -1;
        }
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[low]<=nums[mid]){

            if(target<nums[mid]&& nums[low]<=target){
                high=mid-1;
            }else{
                low=mid+1;
            }}else if(nums[high]>=nums[mid]){
                if(target>nums[mid] && target<=nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }}
            
        }
        return -1;
    }
};
