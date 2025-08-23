class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool cnt = false;
        for (int i = s.size() - 1; i >= 0; i--){ 
            if (s[i] != ' '){
                cnt = true;
                len++;}
            else if (cnt){
                break;
            }
        }
        return len;   
    }
};