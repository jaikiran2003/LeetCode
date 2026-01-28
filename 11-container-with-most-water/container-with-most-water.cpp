class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_wtr = 0;
        int l = 0;
        int r = height.size() - 1;

        while (l < r){
            int w = r - l;
            int ht = min(height[l], height[r]);
            int curr_wtr = w * ht;
            max_wtr = max(max_wtr, curr_wtr);
            height[l] < height[r] ? l++ : r--;
        }

        
        return max_wtr;
    }


};
