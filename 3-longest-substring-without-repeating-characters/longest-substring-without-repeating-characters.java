class Solution {
    public int lengthOfLongestSubstring(String s) {
        int[] visited = new int[256]; 
        int left = 0;
        int maxlen = 0;

        for(int right=0; right<s.length(); right++){
            visited[s.charAt(right)]++;

            while(visited[s.charAt(right)] > 1){
                visited[s.charAt(left)]--;
                left++;
            }
            maxlen = Math.max(maxlen, right-left+1);
        }
        return maxlen;
    }
}