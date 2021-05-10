class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> store;
    int min;
    MinStack() {
        min=INT_MAX;
    }
    
    void push(int val) {
        store.push_back(val);
        if(val<min){
            min=val;
        }
        cout<<min<<" ";
    }
    
    void pop() {
        if(store[store.size()-1]==min){
            min=INT_MAX;
            for(int i=0;i!=store.size()-1;i++){
                cout<<store[i];
                if(store[i]<min){
                    min=store[i];
                }
            }
        }
        store.erase(store.end()-1);
    }
    
    int top() {
        return store.back();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */