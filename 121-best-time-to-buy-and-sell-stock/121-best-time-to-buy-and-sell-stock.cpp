class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> p;
        vector<int> m;
        int n=prices.size();
        for(int i=0; i<n; i++){
            p.push_back(0);
            m.push_back(0);
        }
        p[0]=0;
        m[0]=prices[0];
        if(n>1){
            p[1] = max(0, prices[1]-prices[0]);
            m[1]  = min(m[0], prices[1]);
            for(int i=2; i<n; i++){
                m[i] = min(m[i-1], prices[i]);
                p[i] = max(p[i-1], prices[i]-m[i]);
                
            }
        }
        return p[n-1];
    }
};