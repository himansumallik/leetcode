class Solution
{
public:
    int maximumPossibleSize(vector<int>& nums)
    {
        int maxSize=nums.size(), maxTillNow=nums[0];
        for(auto num:nums)
        {
            if(num<maxTillNow)
            {
                maxSize-=1;
            }
            else
            {
                maxTillNow=num;
            }
        }
        return maxSize;
    }
};