/* 
Problem: 709. To Lower Case 
Topic: Strings
Time Complexity: O(n)
Space Complexity: O(1)
Approach: 
1. Iterate through every character of the string by running a for loop from 'i' = '0 to n-1' where 'n' is the size of the string.
2. For each character, check if s[i] <= 90 and s[i] >= 65 (which is the condition for a letter to be uppercase). If it satisfies the condition, change the character to lower case by adding '32' to it, which increments it's ascii code to the corresponding lowercase letter.
3. The loop runs for 'n' times, so the TC is O(n). 
4. No extra space is used to solve the problem, so the space complexity is O(1).
*/

#include <string>
using namespace std;
class Solution {
    public:
        string toLowerCase(string s) {
            int n = s.size();
            for(int i = 0; i < n; i++) {
                if(s[i] <= 90 && s[i] >= 65) {
                    s[i] = s[i] + 32;
                }
            }
            return s;
        }
    };