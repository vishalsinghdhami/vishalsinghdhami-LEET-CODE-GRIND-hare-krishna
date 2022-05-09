class Solution {

public boolean isMatch(String s, String p) {
        int n = s.length();
        int m = p.length();
        
        boolean visited[][] = new boolean[n+1][m+1];
        
        visited[0][0] = true;
        
        /*
        s p
        "" ""
        "" "*"
        "c" "?"
        "aa" "*"
        */
        
        for(int j=1;j<=m;j++) {
            if(p.charAt(j-1) == '*') {
                visited[0][j] = visited[0][j-1];
            }
        }
        
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                if(p.charAt(j-1) =='?' || p.charAt(j-1) == s.charAt(i-1)) {
                    visited[i][j] = visited[i-1][j-1];
                } else if(p.charAt(j-1) == '*') {
                    visited[i][j] = visited[i-1][j] || visited[i][j-1];
                }
            }
        }
        
        return visited[n][m];
    }}