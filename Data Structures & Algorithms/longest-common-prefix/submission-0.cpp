class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        vector<char> cs;
        int j = 0;

        for (int i = 0; i < strs.size(); i++) {

            if (i == 0) {
                for (char c : strs[i]) {
                    cs.push_back(c);
                }
            } 
            else {
                j = 0;

                while (j < strs[i].size() && j < cs.size()
                       && strs[i][j] == cs[j]) {
                    j++;
                }

                cs.erase(cs.begin() + j, cs.end());
            }
        }

        string ans(cs.begin(), cs.end());
        return ans;
    }
};