//week08-3.cpp 學習計畫 Matrix 第三題
//leetcode 54. Spiral Matrix 螺旋矩陣,繞圈圈輸出
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();//長與寬
        vector<int> ans;
        int left = 0, right = N-1, up = 0, down = M-1; //4個變數
        //中間要繞圈圈 4個方向:往右 往下 往左 往上
        while (ans.size() < M * N){
            int i, j;
            i = up; //最上面要往右
            for (int j=left; j<=right; j++){ //往右
                ans.push_back( matrix[up][j]);
            }
            up++;//走完上面這條後整行刪掉

            j = right; //最右邊這條要往下
            for (int i=up; i<=down; i++){ //往下
                ans.push_back( matrix[i][right]);
            }
            right--;//走完最右邊這條整行刪掉

            if (ans.size() == M * N) break; //湊齊了

            i = down; //最下面要往左
            for (int j=right; j>=left; j--){ //往左
                ans.push_back( matrix[down][j]);
            }
            down--;//走完最下面這條整行刪掉

            j = left; //最左邊要往上
            for (int i=down ; i>=up; i--){ //往上
                ans.push_back( matrix[i][left]);
            }
            left++;//走完最左邊這條整行刪掉
            }
         return ans ;
    }
};
