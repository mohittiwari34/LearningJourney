class Solution {
public:
    int countMonobit(int n) {
        int count = 1; // count for 0
        
        long long num = 1; // 2^1 - 1 = 1
        while (num <= n) {
            count++;
            num = (num << 1) + 1; // next monobit: 1,3,7,15...
        }
        
        return count;
    }
};
