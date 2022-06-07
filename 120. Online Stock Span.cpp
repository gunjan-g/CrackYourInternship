class StockSpanner {
    stack<int> s;
    vector<int> v;
    int i=0;
public:
    StockSpanner() {
        v.push_back(0);
        i++;
    }
    
    int next(int price) {
        v.push_back(price);
        while(!s.empty() && price>=v[s.top()]){
            s.pop();
        }
        int betterDay= s.empty()?0:s.top();
        s.push(i);
        i++;
        return (i-betterDay);
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
