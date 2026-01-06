class Solution {
public:
    pair<int,int>find(int start,int end,vector<int>& nums,int player){
        if(start==end){
            if(player==0){
                return {nums[start],0};
            }
            else{
                return {0,nums[start]};
            }
        }
        pair<int,int>score1,score2;

        if(player==0){
            score1=find(start+1,end,nums,1);
            score2=find(start,end-1,nums,1);
            score1.first+=nums[start];
            score2.first+=nums[end];
            if(score1.first>score2.first){
                return score1;
            }
            else{
                return score2;
            }
        }
        else{
            score1=find(start+1,end,nums,0);
            score2=find(start,end-1,nums,0);
            score1.second+=nums[start];
            score2.second+=nums[end];
            if(score1.second>score2.second){
                return score1;
            }
            else{
                return score2;
            }
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return true;
        }
        pair<int,int>score;
        score=find(0,n-1,nums,0);
        return score.first>=score.second;
        
    }
};
