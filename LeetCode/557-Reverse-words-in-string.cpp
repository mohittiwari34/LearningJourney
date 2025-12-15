class Solution {
public:
    string reverseWords(string s) {
        vector<string>a;
        string temp="";
        for(char c:s){
            if(c==' '){
                a.push_back(temp);
                temp="";
            }
            else{
                temp+=c;
            }
        }
        a.push_back(temp);
        temp="";
        for(int i=0;i<a.size();i++){
            reverse(a[i].begin(),a[i].end());
            temp+=a[i];
           if(i!=a.size()-1){
            temp+=" ";
           }

        }
        return temp;
    }
};
