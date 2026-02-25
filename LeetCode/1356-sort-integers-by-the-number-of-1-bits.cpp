class Solution {
public:
    int countbit(int n){
        int count=0;
        while(n>0){
            count+=(n&1);
            n=n>>1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[&](int a,int b){
            int countA=countbit(a);
            int countB=countbit(b);
            if(countA==countB){
                return a<b;
            }
            return countA<countB;
        });
        return arr;
    }
};
