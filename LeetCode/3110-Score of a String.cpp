class Solution {
public:
    int scoreOfString(string s) {
        
        int sum=0;
        
        for(int k=0;k<s.length()-1;k++){
           
            sum+=abs(s[k]-s[k+1]);
            
        }
        return sum;
    }
};
