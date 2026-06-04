class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> h = new HashMap<>();

        for(int i=0; i<nums.length; i++){
            h.put(nums[i],i);
        }

        for(int i=0; i<nums.length; i++){
            int complement = target - nums[i];
            if (h.containsKey(complement) && h.get(complement) != i) {
                return new int[]{i, h.get(complement)};
            }
        }

        return new int[]{};
    }
}