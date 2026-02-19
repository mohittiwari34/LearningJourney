
class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n=moveTime.size();
        int m=moveTime[0].size();
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        vector<vector<int>> result(n, vector<int>(m, INT_MAX));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>p;
        result[0][0]=0;
        p.push({0,{0,0}});
        while(!p.empty()){
            int currtime=p.top().first;
            int i=p.top().second.first;
            int j=p.top().second.second;
            p.pop();
            if(i==n-1 && j==m-1){
                return currtime;
            }
            for(int k=0;k<4;k++){
                int a=i+dr[k];
                int b=j+dc[k];
                if(a>=0 && a<n &&b>=0 &&b<m){
                    int movecost=(a+b)%2==0?2:1;
                    int wait=max(moveTime[a][b]-currtime,0);
                    int arrTime=currtime+wait+movecost;
                    if(result[a][b]>arrTime){
                        result[a][b]=arrTime;
                        p.push({arrTime,{a,b}});
                    }
                }

            }
        }
        return -1;
        
    }
};
