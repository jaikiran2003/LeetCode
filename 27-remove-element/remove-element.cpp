class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector<int> arr;
        int k = 0;
        for(int i = 0; i < n; i++){
            if (nums[i] != val){
                arr.push_back(nums[i]);
                k++;
            }
        }

        for (int j = 0; j < k; j++){
            nums[j] = arr[j];
        }
        return k;
    }
};