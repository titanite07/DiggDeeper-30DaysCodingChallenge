class Solution {
public:
    int compress(vector<char>& cs) {
        if (cs.empty()) return 0;
        char c = cs[0];
        int cnt = 1;
        string s;
        for (int i = 1; i <= cs.size(); i++) {
            if (i < cs.size() && cs[i] == c) {
                cnt++;
            } else {
                s.push_back(c);
                if (cnt > 1) {
                    string str = to_string(cnt);
                    for (char ch : str) {
                        s.push_back(ch);
                    }
                }
                c = i < cs.size() ? cs[i] : 0;
                cnt = 1;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            cs[i] = s[i];
        }
        return s.size();
    }
};

