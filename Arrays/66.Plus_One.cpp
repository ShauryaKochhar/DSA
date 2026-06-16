/* 
Problem: 66. Plus One
Topic: Arrays, Basic Maths
Time Complexity: O(n) 
Space Complexity: O(1)
Approach: 
1. Run a loop from index 'n-1' to '0' (end to beginning) and if the digit is less than '9', add '1' to it and return the array.
2. If the number is '9', make it '0' and the loop moves one digit behind. Again check if the digit is less than '0' and repeat the same process. 
3. Once the loop ends and no digit was less than '9', insert '1' at the beginning of the array and return the array.
*/

#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int n = digits.size();
            for(int i = n-1; i >= 0; i--) {
                if(digits[i] < 9) {
                    digits[i]++;
                    return digits;
                }
                else {
                    digits[i] = 0;
                }
            }
            digits.insert(digits.begin(), 1);
            return digits;
        }
    };