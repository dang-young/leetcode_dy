class Solution {
public:
    string reorganizeString(string s) {
        int len = s.length();
        int j; bool flag = false;
        for(int i=0; i<len; i++){
            if(s[i]==s[i+1]){
                j=i+1;
                while(s[i+1]==s[j]) j++;
                if(i==len-2 || j>=len){
                    if(flag) return "";
                    else{
                        reverse(s.begin(), s.end());
                        flag = true;
                        i=-1; continue;
                    }
                }
                swap(s[i+1], s[j]);
            }
        }
        return s;
    }
};

