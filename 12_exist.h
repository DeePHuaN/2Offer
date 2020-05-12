#ifndef INC_03_12_EXIST_H
#define INC_03_12_EXIST_H

#include <vector>
#include <string>

using namespace std;

class Solution12 {
    // 左右上下
    vector<vector<int>> move{{1,0}, {-1,0}, {0,1}, {0,-1}};

public:
    bool exist(vector<vector<char>>& board, string word) {

        /* 回溯法 ，时间复杂度O(3*exp(k)MN),空间复杂度O(MN)*/
        int m = board.size(), n = board[0].size();
        vector<vector<bool>> isVisited(m,vector<bool>(n,false));

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(board[i][j] == word[0])
                {
                    if(track(board, isVisited, word, i, j,0) == true) return true;
                }
            }
        }
        return false;
    }

    bool track(vector<vector<char>>& board,vector<vector<bool>>& isVisited, string word, int i, int j,int k)
    {
        isVisited[i][j] = 1;
        if(k==word.size()-1) return true;
        k++;

        for (auto tmp : move)
        {
            int x = i + tmp[0], y = j + tmp[1];
            if(x<0 || x>=board.size() || y<0 || y>=board[0].size() || isVisited[x][y] == 1 || board[x][y] != word[k]) continue;
            else if (track(board,isVisited,word,x,y,k)) return true;
        }
        isVisited[i][j] = 0;
        return false;
    }
};


#endif
