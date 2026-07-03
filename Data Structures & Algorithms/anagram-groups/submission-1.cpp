class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string str : strs) {
            vector<int> freq(26, 0);
            for (char i : str) {
                freq[i - 'a']++;
            }

            string count = "";
            for (int f : freq) {
                count += to_string(f) + ',';
            }
            
            mp[count].push_back(str);
        }

        vector<vector<string>> res;
        for (auto i : mp) {
            res.push_back(i.second);
        }

        return res;
    }
};
