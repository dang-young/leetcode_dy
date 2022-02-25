class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> p;
        int m = pow(10,4);
        int n=prices.size();
        for(int i=0; i<n; i++){
            p.push_back(0);
        }
        p[0]=0;
        m=prices[0];
        if(n>0){
            for(int i=1; i<n; i++){
                m = min(m, prices[i]);
                p[i] = max(p[i-1], prices[i]-m);
                
            }
        }
        return p[n-1];
    }
};