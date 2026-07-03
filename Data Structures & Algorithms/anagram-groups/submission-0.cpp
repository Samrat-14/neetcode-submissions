class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mp;

        for (string str : strs) {
            vector<int> freq(26, 0);
            for (char i : str) {
                freq[i - 'a']++;
            }

            mp[freq].push_back(str);
        }

        vector<vector<string>> res;
        for (auto i : mp) {
            res.push_back(i.second);
        }

        return res;
    }
};
