class Solution {
public:
    int singleNumber(vector<int>& arr) {
        
        int n=arr.size();
       int XOR = 0;
    for (int i = 0; i < n; i++) {
        XOR = XOR ^ arr[i];
    }
        
        return XOR;
    }
};