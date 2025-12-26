class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        string b;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])||isdigit(s[i])){
                a+=tolower(s[i]);
            }
        }
        for(int i=a.size()-1;i>=0;i--){
            b+=a[i];
        }
        cout<<a<<endl;
        cout<<b;
        if(a==b){
            return true;
        }
        return false;
        
    }
};
