class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        std::vector<int> result(n);
        for(int i = 0; i < arr.size(); i++)
        {
            int max {-1};
            for(int j = i + 1; j < arr.size(); j++)
            {
                if(arr[j]>max)
                {
                    max = arr[j];
                }
            }
            result[i] = max;
            
        }
        


        return result;
    }
};