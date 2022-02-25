class Solution {
public:
    int climbStairs(int n) {
        /*if(n==1) return 1;
        else if(n==2) return 2;
        else
            return climbStairs(n-1)+climbStairs(n-2);*/
        vector<int> v;
        for(int i=0; i<n; i++) v.push_back(0);
        v[0]=1;
        if(n>1){
            v[1]=2;
            for(int i=2; i<n; i++) v[i] = v[i-1]+v[i-2];
        }
        return v[n-1];
    }
};