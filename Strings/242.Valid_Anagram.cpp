/* 
Problem: 242. Valid Anagram
Topic: Strings
Time Complexity: O(nlogn)
Space Complexity: O(logn)
Approach: 
1. Sort both the strings first and compare each element of both the strings one bye one. If any of the elements is not equal, return false.
2. If size of the strings is not equal, return false.
3. If both the above conditions don't statisfy, return true. 
*/

#include <string>
using namespace std;
class Solution {
    public:
        bool isAnagram(string s, string t) {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            int n = s.size(); int m = t.size();
            if(n == m) {
                for(int i = 0; i < n; i++) {
                if(s[i] != t[i]) return false;
            }
            }
            else if(n != m) return false;
            return true;
        }
    };