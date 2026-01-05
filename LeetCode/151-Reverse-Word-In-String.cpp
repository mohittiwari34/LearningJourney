class Solution {
public:
    string reverseWords(string s) {
        s.erase(0,s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ")+1);
        // reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(s[i+1]==' '){
                    s.erase(i+1,1);
                    i--;
                }
            }
        }
        reverse(s.begin(), s.end());

        int start=0;
        for(int i=0;i<=s.size();i++){
            if(s[i]==' ' || i==s.size()){
                reverse(s.begin()+start,s.begin()+i);
                start=i+1;
            }
        }
        return s;
        
        
    }
};
