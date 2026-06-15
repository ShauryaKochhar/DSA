/* 
Problem: 1281. Subtract the Product and Sum of Digits of an Integer
Topic: Basic Maths
Time Complexity: O(logn)
Space Complexity: O(1)
Approach: 
1. We need the product and sum of the digits of an integer. 
2. Extract the digits of the integer by using the modulo operator by 10 and keep on dividing the number by 10.
3. Add the digits to a varible 'sum' initialised with the value '0' and multilply the digits to a variable 'prod' initialised with the value 1.
4. Return (prod - sum).
*/

class Solution {
    public:
        int subtractProductAndSum(int n) {
            int prod = 1; int sum = 0;
            while(n > 0) {
                int ld = n % 10;
                sum += ld;
                prod *= ld;
                n /= 10;
            }
            return (prod - sum);
        }
    };