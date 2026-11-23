class MinStack {
    private:
    std::vector<int> myStack;
public:

    MinStack() {
        
    }
    
    void push(int val) {
        myStack.push_back(val);
    }
    
    void pop() {
        myStack.pop_back();
    }
    
    int top() {
        return myStack.back();
    }
    
    int getMin() {
        int min{};
        if(!myStack.empty())
        {
            min = myStack[0];
        }
        for(int i = 1; i<myStack.size(); i++)
        {
            min = std::min(myStack[i],min);
        }
        return min;
    }
};
