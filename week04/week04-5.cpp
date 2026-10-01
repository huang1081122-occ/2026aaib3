//week04-5.cpp學習計畫basic第7題
//leetcode 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;//進位的英文(帶我升級)
        int N = digits.size(); //有幾位數
        for (int i=N-1; i>=0; i--){ //倒的迴圈
            int now = digits[i] + carry;
            carry = now /10;
            digits[i] = now % 10;
        }
        if (carry>0) digits.insert(digits.begin(), carry); //還有剩的要進位
        return digits;
    }
};
