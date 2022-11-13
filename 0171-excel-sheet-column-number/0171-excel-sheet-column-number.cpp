// class Solution {
// public:
//     int titleToNumber(string str) 
//     {
//       // A B C D E 
//       //   A-A*26*26*26*26*26    B-A*26*26*26*26   C-A*26*26*26 D-A*26*26  E-A*26
//        int columnNumber=0;int n=str.size();
//      for(int i = 0;i < n;i++){
//             int currentColumn = str[i] - 'A' + 1;
//             columnNumber = columnNumber * 26 + currentColumn;
//         }
//         return columnNumber;
//     }
// };
class Solution {
    public: int titleToNumber(string s) {
        int ans  = 0;
        int p  = 0;
        for(int i = s.size() -1; i>=0; i--){
           char c = s[i];
           int val = c-'A' + 1;
           ans += val*pow(26, p);
            p++;
        }
        
        return ans;
    }
};