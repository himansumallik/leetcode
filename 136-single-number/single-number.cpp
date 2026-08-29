class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int, int> m;
        // for(int i:nums){
        //     m[i]++;
        // }

        // for(auto num:m){
        //     if(num.second == 1){
        //         return num.first;
        //     }
        // }

        // return -1;

        int xorr = 0;

        for(int i: nums){
            xorr = xorr ^ i;
        }

        return xorr;
       
    }
};