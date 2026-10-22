//week 07-3.cpp 學習計畫simulation
// Leetcode 1041. Robot Bounded In Circle
//上課的 機器人回到原來的位置 比較簡單 今天的比較難
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0, y=0, d=0; //d方向 0北 1東 2南 3西
        //重製4次
        instructions = instructions +instructions +instructions +instructions;
        for (char c : instructions){
            if (c=='R') d = (d+1) %4; //right右轉
            if (c=='L') d = (d+3) %4; //left 左轉 一個左轉=三個右轉
            if (c=='G'){
                if (d==0) y++;
                if (d==1) x++;
                if (d==2) y--;
                if (d==3) x--;
            }
        }
        if (x==0 && y==0) return true;//成功
        else return false; //沒回到原本的位置,失敗
    }
};
