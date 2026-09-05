class Solution {
public:
    int reverse(int x) {
        int a=0;
        int l;
        int n;
        while(x!=0){
            l=x%10;
            x=x/10;

            if (a > INT_MAX / 10 ||
                (a == INT_MAX / 10 && l > 7))
                return 0;

            if (a < INT_MIN / 10 ||
                (a == INT_MIN / 10 && l < -8))
                return 0;
            a=(a*10)+l;

        }
        
        return a;
    }
};