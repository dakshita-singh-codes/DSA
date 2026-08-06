class Solution {
public:
    int productOfDigits(int j){
        int p=1;
        while(j>0){
            p=p*(j%10);
            j=j/10;
        }
        return p;
    }
    int k,i;
    int smallestNumber(int n, int t) {
        for(i=n;i<=n+10;i++){
            k=productOfDigits(i);
            if(k%t==0)
                break;
        }
        return i;
    }
};