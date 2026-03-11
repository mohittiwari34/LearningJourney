class Solution {
public:
    int reverseBits(int n) {
        string k=bitset<32>(n).to_string();
        reverse(k.begin(),k.end());
        cout<<k;
        int m=stoi(k,0,2);
        return m;
        
    }
};
