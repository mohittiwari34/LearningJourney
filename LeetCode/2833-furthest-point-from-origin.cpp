class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        string m;
        int n=moves.size();
        int l=0;
        int r=0;
        int u=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                l++;
            }
            else if(moves[i]=='R'){
                r++;
            }
            else{
                u++;
            }
        }
        return abs(l-r)+u;
        
    }
};
