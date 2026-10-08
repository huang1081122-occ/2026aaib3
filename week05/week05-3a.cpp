//week05-3a.cpp 學習計畫 buile in functions 第三題
//leetcode 58. Length of Last Word 最那個字長度是多少個字母
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, now = 0;//最後答案vs現在累積字母
        for (char c : s){//每次逐一取出字母檢查
            if(c==' '){//遇到空格要清空
                if (now!=0) ans = now;//更新答案
                now = 0; //清空
            } else now++; //遇到空格就要加一
        }
        //還差一點點(三個對一個)
        if (now!=0) ans = now; //更新答案
        return ans; //先試試看
    }
};
