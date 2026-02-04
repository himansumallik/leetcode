class Solution {
public:
    int buttonWithLongestTime(std::vector<std::vector<int>>& events) {

        int ans = events[0][0], prev = events[0][1], mx = prev;

        for (size_t i = 1; i < events.size(); ++i) {
            int pusher = events[i][0];
            int time = events[i][1];

            int diff = time - prev;

            if (diff > mx) {
                mx = diff;
                ans = pusher;
            } else if (diff == mx && pusher < ans) {
                ans = pusher;}

            prev = time;}

        return ans;}
};