/* 
Problem: 9. Palindrome Number
Topic: Basic Maths
Time Complexity: O(logn)
Space Complexity: O(1)
Approach: 
1. Extract the digits of the number by using modulus operator with 10 and keep on adding them to a new variable 'rev' until the value of x reaches 0.
2. Compare the rev number with the original number and return the result accordingly.
3. If x < 0, we return false because negative numbers are not palindrome.
*/

#include <stdbool.h>
bool isPalindrome(int x) {
    if(x < 0) return false;
    int y = x; 
    int rev = 0;
    while(x > 0) {
        int ld = x % 10;
        rev = (rev * 10) + ld;
        x = x / 10;
    }
    if(rev == y) {
        return true;
    } else return false;
}