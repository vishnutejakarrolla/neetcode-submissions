class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(int i = 0; i < strs.size(); i++) {
            ans += to_string(strs[i].size()) + "#" + strs[i];
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        int i = 0;

        while(i < s.size()) {
            int j = i;

            // Find the delimiter
            while(s[j] != '#') {
                j++;
            }

            // Extract the length
            int len = stoi(s.substr(i, j-i));

            // Extract the original string
            string str = s.substr(j+1, len);

            ans.push_back(str);

            // Move to the next encoded string
            i = j + 1 + len;
        }

        return ans;
    }
};