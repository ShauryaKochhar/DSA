/* 
Problem: 796. Rotate String
Topic: Strings
Time Complexity: O(n²), where 'n' is the number of elememnts in string 's'.
Space Complexity: O(n), where 'n' is the number of elememnts in string 's'.
Approach: 
1. First assign 's' to a duplicate string 'copy' to preserve it. Now, rotate the string 's' by one character to the left and see if it's equal to 'goal'. If yes, then return true.
2. Else, run a while loop until the string 's' again becomes equal to 'copy'. Inside the while loop, keep on rotating the string 's' by one character to the left and check if it equals the string 'copy'.
3. At the end, if the string 's' doesn't equal the string 'goal', return true.
4. The first rotation occurs in O(n) time and the second while loop runs for O(n²) time, so the total time is O(n²).
5. We use an extra string 'copy' of size 'n' in this problem, so the auxiliary space for this problem is O(n).
*/

#include <string>
using namespace std;
class Solution {
    public:
        bool rotateString(string s, string goal) {
            int n = s.size(); int m = goal.size();
            if(n != m) return false;
            else {
                string copy = s;
                //First rotation
                char temp = s[0];
                for(int i = 1; i < n; i++) {
                    s[i-1] = s[i];
                }
                s[n-1] = temp;
                if(s == goal) return true;
                else {
                    while(s != copy) {
                        char ch = s[0];
                        for(int i = 1; i < n; i++) {
                            s[i-1] = s[i];
                        }
                        s[n-1] = ch;
                        if(s == goal) return true;
                    }
                    return false;
                }
                }
        }
    };