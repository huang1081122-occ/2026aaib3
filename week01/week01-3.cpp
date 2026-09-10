//week01-3.cpp 學習計畫 basic 第三題
//leetcode 28. Find the Index of the First Occurrence in a String
//大海撈針
//寫程式只要會三個東西: if判斷 for迴圈 函式
class Solution {
public:
    int strStr(string haystack, string needle) {
        //找到字串的長度length()函式
        int N1 = haystack.length(), N2= needle.length();
        for(int i = 0; i <= N1-N2 ;i++){
            if( haystack.substr(i,N2) == needle)return i;
            //字串 的小字串.substr(i開始,長度) vs needle 相同時 找到答案
        }
        return -1;
    }
};
