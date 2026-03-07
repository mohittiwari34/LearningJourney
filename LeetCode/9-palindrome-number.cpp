class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int a=x;
        int rem;
        long long rev=0;
        while(a>0){
            rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }
        if(x==rev){
            return true;
        }
        return false;
    }
};
