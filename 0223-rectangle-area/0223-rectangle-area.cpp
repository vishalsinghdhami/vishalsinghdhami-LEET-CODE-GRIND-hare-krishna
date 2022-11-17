// class Solution {
// public:
//     int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
//         double totalax,totalbx,totalay,totalby,intersecting;
//         if(ax1<0&&ax2<0)
//         { totalax= ||ax1|-|ax2||;}
        
//         if(ay1<0&&ay2<0)
//         { totalay= ||ay1|-|ay2||;}
        
//     }
// };
class Solution {
public:
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
            int total = (ax2 - ax1) * (ay2 - ay1) + (bx2 - bx1) * (by2 - by1);
    if (ax2 <= bx1 || ay1 >= by2 || ax1 >= bx2 || ay2<= by1) {
        return total;
    }
    //if has overlap
    int a1 =min(ax2, bx2) - max(ax1, bx1);
    int a2 =min(ay2, by2) - max(ay1, by1);
    int overlap = a1 * a2;
    return total - overlap;
    
}
};