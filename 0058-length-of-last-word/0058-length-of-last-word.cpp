class Solution {
public:
    int lengthOfLastWord(string s) {
        int previous = 0, count = 0;
        for (int i=0; i<s.length(); i++){
            if(s[i]==' ' && count!=0) {
                previous = count, count = 0; 
            }else if(s[i]==' ' && count==0) continue;
            else count++;
        }
        if(count==0) return previous;
        else return count;
    }
};