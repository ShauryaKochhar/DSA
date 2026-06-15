/* 
Problem: 3099. Harshad Number
Topic: Basic Maths
Time Complexity: O(logn)
Space Complexity: O(1)
Approach: 
1. Assign the number 'x' in a duplicate variable 'y'.
2. Extract the sum of the digits by using modulo operator by 10 and keep on adding them in a variable 'sum' initialised with 0.
3. If (y % sum == 0), return sum, else return -1.
*/

class Solution {
    public:
        int sumOfTheDigitsOfHarshadNumber(int x) {
            int y = x; int sum = 0;
            while(x > 0) {
                int ld = x % 10;
                sum += ld;
                x /= 10;
            }
            if(y % sum == 0) return sum;
            else return -1;
        }
    };