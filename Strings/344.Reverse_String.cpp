/* 
Problem: 344. Reverse String
Topic: Strings
Time Complexity: O(n)
Space Complexity: O(1)
Approach: 
1. Using two-pointer method to reverse the string.
2. Set a pointer 'l' to the '0' index of the string, and another pointer 'r' to 'n-1' index of the string. 
3. Run a while loop only till (l < r), to run it only for half the elements. Replace the element pointed by 'l' with the element at 'r'.
4. Each time, increment 'l' by 1, and decrement 'r' by 1.
5. This loop runs for half the elements and TC should be O(n/2), but constants are ignored, so the TC is O(1).
6. No extra array or string is used to reverse, so the Space Complexity is a constant - O(1).
*/

#include <vector>
using namespace std;
class Solution {
    public:
        void reverseString(vector<char>& s) {
            int n = s.size();
            int l = 0; int r = n-1;
            while(l < r) {
                char temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l++;
                r--;
            }
        }
    };