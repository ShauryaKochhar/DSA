/* 
Problem: 1812. Determine Color of a Chessboard Square
Topic: Basic Maths
Time Complexity: O(1)
Space Complexity: O(1)
Approach: 
1. First check for the 0th index character of the string 'coordinates'. Modulo it with 2; If it gives 0, meanong the alphabet is even, according to ascii codes, check for the 1st index of the string. If that's also even, return false for black, else true.
2. If the 0th index element doesn't give '0' on modulo with '2', it means it is an odd ascii valued character. Now check the '1st' index of the string. if it's even. return true, else false. 
*/

#include <string>
using namespace std;
class Solution {
    public:
        bool squareIsWhite(string coordinates) {
            if(coordinates[0] % 2 != 0) {
                if(coordinates[1] % 2 != 0) return false;
                else return true;
            } else {
                if(coordinates[1] % 2 == 0) return false;
                else return true;
            }
        }
    };