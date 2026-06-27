/* 
Problem: 1281. Subtract the Product and Sum of Digits of an Integer
Topic: Basic Maths
Time Complexity: O(d) where 'd' is the number of digits in the number.
Space Complexity: O(1)
Approach: 
1. First assign a variable 'maxnum' with 'num' and also store its value in a duplicate variable 'dup'.
2. Initialise a variable count with '3'. Run a while loop until dup = 0, and extract every last digit of the number. If the  number = 6, add count to it to make it '9'.
3. Multilply 'count' with '10' each time and also divide 'dup' by '10'. 
4. The time complexity is O(d) where 'd' is the number of digits in the number. 
5. Space complexity is a constant - O(1) because we don't use any extra space.
*/

class Solution {
    public:
        int maximum69Number (int num) {
            int maxnum = num; int dup = num; 
            int count = 3;
            while(dup > 0) {
                int ld = dup % 10;
                if(ld == 6) {
                    int greater = num + count;
                    if(greater > maxnum) maxnum = greater;
                }
                count *= 10;
                dup /= 10;
            }
            return maxnum;
        }
    };