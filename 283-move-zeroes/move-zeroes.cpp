class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        vector<int> temp(len);
        int j = 0;
        for (int i = 0; i < len; i++){
            if(nums[i] != 0){
                temp[j++] = nums[i]; 
            }
        }

        while(j < len){
            temp[j++] = 0;
        }

        for(int i = 0; i < len; i++){
            nums[i] = temp[i];
        }
    }
};