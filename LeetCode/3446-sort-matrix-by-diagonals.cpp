class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_map<int,vector<int>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m[i-j].push_back(grid[i][j]);
            }
        }
        for(auto &it:m){
            if(it.first>=0){
                sort(it.second.begin(),it.second.end());
            }
            else{
                sort(it.second.begin(),it.second.end(),greater<int>());
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int key=i-j;
                grid[i][j]=m[key].back();
                m[key].pop_back();

            }
        }
        return grid;
        
    }
};
