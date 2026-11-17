class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result{0};
        int tempResult{0};
        for (int num : nums)
        {
            tempResult = num ? tempResult + 1 : 0;
            result = std::max(result, tempResult);
        }
        return result;
    }
};