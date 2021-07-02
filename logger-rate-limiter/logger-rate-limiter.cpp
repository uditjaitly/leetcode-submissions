class Logger {
public:
    map<string,int> store;
    
    /** Initialize your data structure here. */
    Logger() {
      
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
        if(store.find(message)==store.end()){
            store.insert(pair<string,int>(message,timestamp));
            return true;
        }
        else{
            if(timestamp-store[message]>=10){
                store[message]=timestamp;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */