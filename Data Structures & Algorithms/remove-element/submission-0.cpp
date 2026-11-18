class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> newNums;
        for (int num : nums)
        {
            if (num != val)
            {
                newNums.push_back(num);
            }
        }

        for (int i = 0; i < newNums.size(); i++)
        {
            nums[i] = newNums[i];
        }
        return newNums.size();
    }
};