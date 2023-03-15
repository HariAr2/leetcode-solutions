class Solution {
public:
    int reverse(int x) {
        long long int n,rev=0;
        while(x!=0){
            n=x%10;
            x=x/10;
            rev=rev*10+n;
        }
        if(rev<INT_MIN||rev>INT_MAX){
            return 0;
        }
        else{
            return rev;
        }
        
    }
};