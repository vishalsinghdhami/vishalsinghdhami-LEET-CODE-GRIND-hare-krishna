class Solution
{
    bool search(vector<vector < char>>& board, string word, int i, int j,int index) {
        if(index==word.size()){return true;}
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size())
        {
            return false;
        }
        bool ans=false;
        if(word[index]==board[i][j])
        {
             board[i][j]='*';
            ans= search(board,word,i+1,j,index+1)or
                 search(board,word,i,j+1,index+1)or
                 search(board,word,i,j-1,index+1)or
                 search(board,word,i-1,j,index+1);
             board[i][j]=word[index];
        }
        return ans;
    }
    public:
        bool exist(vector<vector < char>> &board, string word)
        {

            int r = board.size(), c = board[0].size();
            int index=0;
            
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (board[i][j] == word[index])
                    {
                        if(search(board, word, i, j,index))
                        {   return true;}
                    }
                }
            }

            return false;
        }
};