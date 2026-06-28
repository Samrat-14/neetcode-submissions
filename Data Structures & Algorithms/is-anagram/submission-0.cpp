class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> counter(26, 0);
        
        for(char i: s) {
            counter[i - 'a']++;
        }

        for(char i: t) {
            if(counter[i - 'a'] == 0) {
                return false;
            }
            counter[i - 'a']--;
        }

        int aggregate = accumulate(counter.begin(), counter.end(), 0);
        return aggregate == 0;
    }
};
