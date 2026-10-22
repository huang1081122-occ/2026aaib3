//week07-4b.cpp 學習計畫simulation 第三題超難
//leetcode 1275. Find Winner on a Tic Tac Toe Game 井蓋遊戲
class Solution {
public: //大資料結構 moves, 裡面裝中資料結構 vector<int> move, 裡面裝小資料結構 int i, j
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {0}; //用c語言的陣列去模擬3*3的九個格子,先放0
        string result[3] = {"Draw", "A", "B"};//結果的字母
        int who = 1; //現在輪到誰 who 來下棋 1:A 2:B
        for (vector<int> move : moves){//迴圈,逐一處理中資料結構
            int i = move[0], j = move[1];
            a[i][j]=who;//現在輪到who來下棋
            if (a[i][0]==who && a[i][1]==who && a[i][2]==who) return result[who];//上橫

            if (a[0][i]==who && a[1][i]==who && a[2][i]==who) return result[who];//左直

            if (a[0][0]==who && a[1][1]==who && a[2][2]==who) return result[who];//斜線左上右下
            if (a[2][0]==who && a[1][1]==who && a[0][2]==who) return result[who];//斜線右上左下

            if (who==1) who = 2;
            else who = 1;
        }
        if (moves.size()==9) return "Draw";//最後離開迴圈,沒有人得勝,就平手draw
        else return "Pending";
    }
};
