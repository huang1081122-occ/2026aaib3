// week05-2.cpp學習計畫 buile in functions 第二題
// Leetcode 709. To Lower Case 變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
        //week02教過的字串s長度. length()
        for(int i=0; i < s.length(); i++){//逐字母處理
            if(isupper(s[i] ) ) s[i] = s[i] - 'A' + 'a';
        }//s[0] = 'h'; //先試試看吧 (看起來就是錯的)教你 s[i]
        return s;
    }
};
