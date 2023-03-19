class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev=0,n;
        int y;
        y=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            n=x%10;
            rev=rev*10+n;
            x=x/10;
        }
        if(rev==y){
            return true;
        }
        else{
            return false;
        }
    }
};