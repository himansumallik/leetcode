#include <string>
#include <algorithm>
#include <cctype>

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string result = "";
        int charCount = 0;
        
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] != '-') {
                if (charCount > 0 && charCount % k == 0) {
                    result.push_back('-');
                }
                result.push_back(toupper(static_cast<unsigned char>(s[i])));
                charCount++;
            }
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
