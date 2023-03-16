class Solution {
public:
    int divide( long long int dividend, long int divisor) {
        long long int x;
        x=dividend/divisor;
        if(x>INT_MAX){
            return INT_MAX;
        }
        else if(x<INT_MIN){
            return INT_MIN;
        }
        else{
            return x;
        }
    }
};