class Solution {
public:
    int maxArea(vector<int>& ht) {
        int max_area=0;
        int l=0,r=ht.size()-1;
        while(l<r){
            int area=min(ht[l],ht[r])*(r-l);
                max_area=max(max_area,area);
            if(ht[l]<ht[r]){
                l++;
            }else{
                r--;
            }
        
            
        }
return max_area;
        
    }
};
