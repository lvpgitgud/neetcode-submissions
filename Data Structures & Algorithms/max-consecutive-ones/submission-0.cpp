class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result{0};
        int tempResult{0};
        for(int i = 0; i < nums.size(); i++)
        {
            
            if(nums[i] == 1)
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

           //std::cout<<result;
        }
        return result;
    }
};