class MinStack {
private:
    stack<int> mainStack; // main stack to store elements
    stack<int> minStack; // auxiliary stack to store minimum elements
    
public:
    MinStack() {
        // Constructor
    }
    
    void push(int val) {
        mainStack.push(val); // push the value onto the main stack
        
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val); // if the value is smaller or equal to the current minimum, push it onto the minStack
        }
    }
    
    void pop() {
        if (mainStack.top() == minStack.top()) {
            minStack.pop(); // if the element being popped from the main stack is the current minimum, pop from minStack too
        }
        
        mainStack.pop(); // always pop from the main stack
    }
    
    int top() {
        return mainStack.top(); // return the top element of the main stack
    }
    
    int getMin() {
        return minStack.top(); // return the top element of the minStack, which represents the current minimum
    }
};