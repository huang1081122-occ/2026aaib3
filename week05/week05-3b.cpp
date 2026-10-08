//week05-3b.cpp 學習計畫 buile in functions 第三題
//leetcode 58. Length of Last Word 最那個字長度是多少個字母
//其實前面需要寫 #include <stringsteam> 不過leetcode幫你偷偷寫好了
class Solution {
public:
    int lengthOfLastWord(string s) {
        //藥用stringstream之前要先 #include <stringstream>
        stringstream ss(s);// week05 字串stream串流(cin也是stream)
        //week04 c++的圓括號是丟進去物件 初始化 的參數
        string ans;//week02 c++字串的宣告
        while(ss >> ans){//今天week05-1.cpp有用到 很像 cin 的iostream
            //什麼都不做
        }
        return ans.length();// week01 02 字串的長度
    }
};
