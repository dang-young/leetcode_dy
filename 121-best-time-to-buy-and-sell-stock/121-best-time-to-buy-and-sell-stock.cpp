class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0; //profit
        int m = pow(10,4); //min
        int n=prices.size();
        m=prices[0];
        if(n>0){
            for(int i=1; i<n; i++){
                m = min(m, prices[i]);
                p = max(p, prices[i]-m);
            }
        }
        return p;
    }
};