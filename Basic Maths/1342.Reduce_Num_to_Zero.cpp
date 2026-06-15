/* 
Problem: 1342. Number of steps to reduce a number to zero.
Topic: Basic Maths
Time Complexity: O(logn)
Space Complexity: O(1)
Approach: 
1. If the number is even, we divide it by 2 and if it's odd, we subtract 1 from it. 
2. The significant operatons are of division so the time complexity is O(logn) and the space complexity is constant: O(1).
*/

class Solution {
    public:
        int numberOfSteps(int num) {
            int count = 0;
            while(num > 0) {
                if(num % 2 == 0) num /= 2;
                else num -= 1;
                count++;
            }
            return count;
        }
    };