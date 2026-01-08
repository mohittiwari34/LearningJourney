class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.size();
        int m=0;
        string a;
        for(int i=0;i<n;){
            if(s[i]==' '){
                i++;
                continue;
            }
            int j=i;
            while(j<n && s[j]!=' '){
                j++;
            }
            a+=s.substr(i,j-i)+' ';
            m++;
            if(m==k){
                break;
            }
            i=j;
        }
        a.erase(a.find_last_not_of(" ")+1);
        return a;
    }
};
