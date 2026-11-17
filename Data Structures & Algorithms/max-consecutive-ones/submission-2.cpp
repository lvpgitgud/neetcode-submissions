class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result{0};
        int tempResult{0};
        for (int num : nums)
        {
            if(num == 1)
            {
                tempResult++;
                if (tempResult > result)
                {
                    result = tempResult;
                }
            }
            else
            {
                tempResult = 0;
            }
        }
        return result;
    }
};