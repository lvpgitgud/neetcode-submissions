class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        std::vector<int> result(2*size);
        for (int i = 0; i<nums.size();i++)
        {
            result[i] = nums[i];
            result[size+i] = nums[i];
        }
        return result;
    }
};