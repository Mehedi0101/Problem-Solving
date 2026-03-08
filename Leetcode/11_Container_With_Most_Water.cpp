class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1, ans=0;

        while(i<j){
            int x = min(height[i],height[j]);
            ans = max(ans, x*(j-i));

            if(height[i]>=height[j]){
                j--;
            }
            else{
                i++;
            }
        }

        return ans;
    }
};
