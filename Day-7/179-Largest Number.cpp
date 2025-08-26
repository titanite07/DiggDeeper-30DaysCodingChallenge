class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strNums;
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }
        sort(strNums.begin(), strNums.end(),
             [](const string& a, const string& b) { return a + b > b + a; });
        string res;
        for (const string& str : strNums) {
            res += str;
        }
        int idx = 0;
        while (idx < res.size() && res[idx] == '0') {
            idx++;
        }
        return idx == res.size() ? "0" : res.substr(idx);
    }
};