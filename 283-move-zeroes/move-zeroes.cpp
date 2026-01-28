class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertionPst = 0;

        for (int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[insertionPst++] = nums[i];
            }
        }

        while (insertionPst < nums.size()){
            nums[insertionPst++] = 0; 
        }
    
    }
};