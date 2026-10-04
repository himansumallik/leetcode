class Solution {
public:
    int maxFreqSum(string s) {
       std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        // Fixed frequency arrays for 256 ASCII characters to achieve O(1) space
        std::vector<int> v_freq(256, 0);
        std::vector<int> c_freq(256, 0);

        for (char ch : s) {
            if (std::isalpha(ch)) {
                // Optional: Convert to lowercase if the problem treats 'a' and 'A' as identical
                char lower_ch = std::tolower(ch); 
                
                if (vowels.count(lower_ch)) {
                    v_freq[lower_ch]++;
                } else {
                    c_freq[lower_ch]++;
                }
            }
        }

        // Find the maximum frequency in both distributions
        int max_v = *std::max_element(v_freq.begin(), v_freq.end());
        int max_c = *std::max_element(c_freq.begin(), c_freq.end());

        // Return the combined sum of the highest frequencies
        return max_v + max_c;
    }
};