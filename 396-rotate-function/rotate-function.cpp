class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = 0, f = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++){
            sum += nums[i];
            f += i * nums[i];
        }

        int maxSum = f;
        for (int k = 1; k < n; k++){
            f = f + sum - n * nums[n - k];
            maxSum = max(maxSum, f);
        }

        return maxSum;

        
    }
};