class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (string str : strs) {
            encoded += to_string(str.size()) + '#' + str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i=0;
        string buffer = "";
        while(i < s.size()) {
            if (s[i] != '#') {
                buffer += s[i];
                i++;
            }
            else {
                int len = stoi(buffer);
                buffer = "";
                i++;
                while(len--) {
                    buffer += s[i];
                    i++;
                }
                decoded.push_back(buffer);
                buffer = "";
            }

        }
        return decoded;
    }
};
