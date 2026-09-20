class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        // return fib(n-1)+fib(n-2);


        // vector<int> arr(n+1);
        // arr[0]=0;
        // arr[1]=1;
        // for(int i=2; i<=n; i++){
        //     arr[i]= arr[i-1] + arr[i-2];
        // }
        // return arr[n];


        int prev2 = 0;
        int prev1 = 1;
        for(int i = 2; i <= n; i++) {
            int current = prev1 + prev2;

            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};