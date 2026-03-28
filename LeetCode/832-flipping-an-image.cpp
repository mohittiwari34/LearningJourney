class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &r:image){
            reverse(r.begin(),r.end());
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size();i++){
                if(image[i][j]==0){
                    image[i][j]=1;
                }
                else{
                    image[i][j]=0;
                }
            }
        }
        return image;
        
    }
};
