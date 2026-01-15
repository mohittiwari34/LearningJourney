class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string a;
        int k=(word1.size()>word2.size())?word2.size():word1.size();
        int i=0;
        int j=0;
        while(i<word1.size()&&j<word2.size()){
            a+=word1[i];
            a+=word2[i];
            i++;
            j++;
        }
        if(k==word1.size()){
            for(j=k;j<word2.size();j++){
                a+=word2[j];
            }
        }
        if(k==word2.size()){
            for(j=k;j<word1.size();j++){
                a+=word1[j];
            }
        }
        


        return a;
    }
};
