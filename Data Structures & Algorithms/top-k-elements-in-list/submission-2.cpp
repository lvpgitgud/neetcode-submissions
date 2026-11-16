class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        std::vector<int> result;
        std::unordered_map<int, int> count;
        for(int num:nums)
        {
            count[num]++;
        }


        std::vector<std::vector<int>> buckets(n+1);
        for(const auto& pair : count)
        {
            int num = pair.first;
            int freq = pair.second;
            buckets[freq].push_back(num);
        }
        for(int freq = n; freq >= 1 && result.size() < k; --freq)
        {
            for(int num : buckets[freq])
            {
                result.push_back(num);
                if(result.size() == k)
                {
                    return result;
                }
            }
        }
        return result;
        
    }
};
