class Solution {
public:
     int reverse(int x){
        int a=0;
        while(x>0){
            a=a*10+x%10;
            x=x/10;
        }
        return a;
     }
    int mirrorDistance(int n) {
        int s=abs(n-reverse(n));
        return s;
        
    }
};
