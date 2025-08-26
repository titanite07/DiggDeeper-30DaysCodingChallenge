class Solution {
public:
    string convert(string s, int n) {
        if(n <= 1) return s;
        string r = "";
        int cy = 2 * n - 2;
        for(int i = 0; i < n; ++i)
        {
            for(int j = i; j < s.length(); j = j + cy){
               r = r + s[j];
               int sdJ = (j - i) + cy - i;
               if(i != 0 && i != n-1 && sdJ < s.length())
                   r = r + s[sdJ];
            }
        }
        return r;
    }
};