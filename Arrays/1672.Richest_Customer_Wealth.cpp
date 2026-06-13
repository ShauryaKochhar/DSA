/* 
Problem: 1672. Richest Customer Wealth
Topic: Arrays, Matrix
Time Complexity: O(m x n)
Space Complexity: O(1)
Approach: 
1. We need to calculate the wealth of each customer which is given in a single row. 
2. So, we sum up all the columns of a row and store the result in 'wealth'. 
3. Then we compare the varible 'wealth' with the variable 'maxwealth' and assign maxwealth the greater value.
4. The outer loop runs for m times (the no. of rows) and the inner loop for n times (the no. of columns), so the time complexity is O(m x n).
*/

#include <vector>
using namespace std;
class Solution {
    public:
        int maximumWealth(vector<vector<int>>& accounts) {
            int rows = accounts.size(); int cols = accounts[0].size(); int maxwealth = 0;
            for(int i = 0; i < rows; i++) {
                int wealth = 0;
                for(int j = 0; j < cols; j++) {
                    wealth += accounts[i][j];
                }
                if(wealth > maxwealth) maxwealth = wealth;
            }
            return maxwealth;
        }
    };