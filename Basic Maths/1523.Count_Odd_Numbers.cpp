/*
Problem: 1523. Count odd numbers in an intervak range.
Topic: Basic Maths
Time Complexity: O(1)
Space Complexity: O(1)
Approach: 
n = 0  -> 0 odds
n = 1  -> 1 odd  
n = 2  -> 1 odd  
n = 3  -> 2 odds 
n = 4  -> 2 odds 
The number of odd numbers from 0 to n are (n+1/2). 
Therefore, number of odd numbers are (no of odds from 0 to high) - (no of odds from 0 to low - 1).
*/

class Solution {
    public:
        int countOdds(int low, int high) {
            return (high + 1) / 2 - low / 2;
        }
    };