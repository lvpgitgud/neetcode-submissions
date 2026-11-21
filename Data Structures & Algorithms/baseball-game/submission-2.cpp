class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::vector<int> stacc;
        for(string op : operations)
        {
            if(op == "D")
            {
                int prevScore = stacc.back() * 2;
                stacc.push_back(prevScore);
            } else if (op == "C")
            {
                stacc.pop_back();
            } else if (op == "+")
            {
                if (!stacc.empty())
                {
                    int lastIndex = stacc.size() - 2;
                    int newScore = stacc.back() + stacc[lastIndex];
                    stacc.push_back(newScore);
                }
                
            } else
            {
                stacc.push_back(std::stoi(op));
            }

        }
        int result{0};
        for(int score : stacc)
        {
            std::cout<<score<<"\n";
            result += score;
        }
        return result;
    }
};