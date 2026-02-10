class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seenNum;

        for (int num : nums){
            if (seenNum.count(num)){
                return true;
            }
            seenNum.insert(num);
        }
        return false;
    }
};