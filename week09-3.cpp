//week09-3.cpp 學習計畫 matrix 第四題
//leetcode 73. Set Matrix Zeroes
//遇到0時把橫條,直條都變成0
class Solution {
public:
    //沒有return喔! 因為要in place直接改matrix
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> left(M);
        vector<int> up(N);
        //兩個步驟:打勾勾(標記),汙染整條(原來的矩陣)
        for(int i=0; i<M; i++){ //左手i對應M
            for(int j=0; j<N; j++){ //右手j對應N
                if(matrix[i][j]==0){//遇到0打勾勾
                    left[i] = 1; //打勾勾
                    up[j] = 1; //打勾勾
                }
            }

        }
        for (int i=0; i<M; i++){
            for (int j=0; j<N; j++){
                if (left[i]==1 || up[j]==1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
