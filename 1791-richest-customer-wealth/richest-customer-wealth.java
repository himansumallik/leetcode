class Solution {
    public int maximumWealth(int[][] accounts) {
        int maxWealth=0;
        for(int i=0; i<accounts.length; i++){
            int sumi = 0;
            for(int j=0; j<accounts[i].length; j++){
                sumi = sumi + accounts[i][j];
            }
            maxWealth= (maxWealth>sumi)?maxWealth:sumi;
        }

        return maxWealth;
    }
}