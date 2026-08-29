class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int cnt = 0;
        // for(int i=0; i<nums.size(); i++){
        //     int currsum=0;
        //     for(int j=i; j<nums.size();j++){
        //         currsum += nums[j];
        //         if(currsum == k){
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;

        unordered_map<int, int> subNum;
        subNum[0] = 1;
        int total = 0, count = 0;

        for (int n : nums) {
            total += n;

            if (subNum.find(total - k) != subNum.end()) {
                count += subNum[total - k];
            }

            subNum[total]++;
        }

        return count;
    }
};
