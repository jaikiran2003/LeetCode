#include<bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int h = 1;
        if (nums.size() == 0){
            return 0;
        }
        int n = nums.size();
        stack<int> mem;
        mem.push(nums[0]);
        int p = 1;
        
        int count = 0;
        for (int i = 1; i < n; i++){
            if(mem.size() > 0 && nums[i] == mem.top()){
                continue;
            }
            else {
                nums[p] = nums[i];
                mem.push(nums[i]);
                p++;
                h++;
            }
        }

        return h;
    }
};