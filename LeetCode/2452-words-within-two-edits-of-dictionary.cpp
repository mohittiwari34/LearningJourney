class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
        for(auto&a:queries){
            for(auto&p:dictionary){
                int diff=0;
                for(int i=0;i<a.size();i++){
                    if(p[i]!=a[i]){
                        diff++;

                    }
                    if(diff>2){
                        break;
                    }
                }
                if(diff<=2){
                    ans.push_back(a);
                    break;
                }

            }
        }
        return ans;
    }
};
