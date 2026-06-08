class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v(nums.size(), 1); // Initialize result vector with 1s.
        int product = 1;
        
        // Compute the product of all elements to the left of each element.
        for (int i = 0; i < nums.size(); i++) {
            v[i] *= product; // Accumulate product.
            product *= nums[i];
        }
        
        // Reset product for computing product of elements to the right.
        product = 1;
        
        // Compute the product of all elements to the right of each element.
        for (int i = nums.size() - 1; i >= 0; i--) {
            v[i] *= product; // Multiply the accumulated product with product to the right.
            product *= nums[i];
        }
        
        return v;
    }
};

