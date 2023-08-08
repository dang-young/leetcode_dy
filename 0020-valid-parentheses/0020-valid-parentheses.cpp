class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char c;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='{'|| s[i]=='[')
                st.push(s[i]);
            else if(s[i]==')' || s[i]=='}'|| s[i]==']') {
                if(st.empty()) return false;
                c = st.top(); st.pop();
                if(c=='(' && s[i]!=')') return false;
                if(c=='{' && s[i]!='}') return false;
                if(c=='[' && s[i]!=']') return false;
            }
        }
        if(!st.empty()) return false; //exception
        return true;
    }
};