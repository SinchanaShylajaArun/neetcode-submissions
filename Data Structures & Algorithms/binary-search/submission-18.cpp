class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int left=0;
        int right=n;
        
         if(left==right && nums[left]==target){
                return right;
            }
            // nums=[5]& target=5 => left==right and nums[left]=5=target; this means return left i.e
        while(left<=right){
          
            int mid=(left+right)/2;
            if(target==nums[mid]){
                cout<<mid;
                return mid;
            }else if(target<nums[mid]){
                
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return -1;
    }
};
