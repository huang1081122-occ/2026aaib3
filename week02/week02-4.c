//week02-4.cpp 學習計畫 basic第二題
//leetcode 389. find the difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26]= {};//有26個回收桶,裡面都是0
        for (char c : s ){//C++進階 for迴圈寫法
            U[c-'a'] ++; //把字母放到對應的桶子裡
        }
        for(char c : t ){
            U[c-'a']--;//把對應桶子裡拿掉一個字母
            if (U[c-'a'] < 0) return c;//如果字母不夠就找到了
        }
        return 0;
    }
};
