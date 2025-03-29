class MinStack {

    private:
    
        vector<int> stack;
        int min;
    
    public:
    
       
    
        MinStack() {
    }
    
        void push(int val) {
            
            if (stack.size() == 0) {
            
                min = val;
                stack.push_back(val);
                return;
            
            }
            else {
                stack.push_back(val);
                if (val < min) {
                    min = val;
                }
            }
        }
    
        void pop() {
            stack.pop_back();
            min = stack[0];
            for (int i = 0; i < stack.size(); i++) {
                if (stack[i] < min) {
                    min = stack[i];
                }
            }
        }
    
        int top() {
            return stack[stack.size() - 1];
        }
    
        int getMin() {
            return min;
        }
    };