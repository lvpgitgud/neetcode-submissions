class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count[2] = {0, 0};
        for (int s : students) 
        {
            count[s]++;
        }
        
        for (int sandwich : sandwiches) 
        {
            if (count[sandwich] == 0) 
            {
            return count[1 - sandwich];
            }
            count[sandwich]--;
        }
        
        return 0;
    
    }
};