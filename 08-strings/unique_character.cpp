#include<iostream>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {};
        int count = 0;
        for(char ch : s)
        {
            freq[ch-'a']++;
        }
        for(int i = 0;i<s.size();i++)
        {
            count=freq[s[i] - 'a'];
            if(count == 1)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s ;
   cout << s.firstUniqChar("leetcode");

}
