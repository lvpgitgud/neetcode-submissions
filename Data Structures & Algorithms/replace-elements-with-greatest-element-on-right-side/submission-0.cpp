class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++)
        {
            int max {0};
            for(int j = i + 1; j < arr.size(); j++)
            {
                if(arr[j]>max)
                {
                    max = arr[j];
                }
            }
            arr[i] = max;
            
        }

        std::vector<int> result;
        for(int num : arr)
        {
            result.push_back(num);
        }
        int lastIndex = result.size() - 1;
        result[lastIndex] = -1;
        return result;
    }
};