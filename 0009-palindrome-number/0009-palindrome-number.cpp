class Solution {
public:
    bool isPalindrome(int x) {
        int o=x;
        int a=0;
        int l;
        while(x>0){
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
        if(a==o){
            return true;
        }
        else return false;
    }
};