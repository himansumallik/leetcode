class Solution {
public:
    struct Comp {
        bool operator()(pair<int, string>& a, pair<int, string>& b) {
            if (a.first == b.first) {
                return a.second < b.second;  
            }
            return a.first > b.first; 
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int, string>, vector<pair<int, string>>, Comp> pq;
        unordered_map<string, int> mp;

        for (auto &word: words) {
            mp[word]++;
        }

        for (auto &m: mp) {
            pq.push({m.second, m.first});
            if (pq.size() > k) {
                pq.pop(); 
            }
        }

        vector<string> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        reverse(result.begin(), result.end()); 
        return result;
    }
};
