class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        int n=numCourses;
        vector<vector<bool>>v(n,vector<bool>(n,false));
        for(auto &p:prerequisites){
            v[p[0]][p[1]]=true;
        }
        
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(v[i][k] &&v[k][j]){
                        v[i][j]=true;
                    }
                }
            }
        }
        vector<bool>ans;
        for(auto &p:queries){
            ans.push_back(v[p[0]][p[1]]);
        }
        return ans;
        
    }
};
