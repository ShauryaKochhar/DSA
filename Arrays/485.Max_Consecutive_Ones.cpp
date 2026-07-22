/* 
Problem: 485. Max Consecutive Ones
Topic: Arrays
Time Complexity: O(n)
Space Complexity: O(1)
Approach: 
1. We need to calculate the number of maximum ones occuring consecutively in the array.
2. Initialise a variable 'max' with '0' which will store the maximum frequency of consecutive ones, and a variable count with '0'.
3. Run a for loop from 'i' = '0 to n-1'. If nums[i] is equal to 1, do a count++ and check if count is greater than max, if it is, then do max = count. If nums[i] is not equal to '1' set count to '0'.
4. After the loop ends, max will store the maximum frequency of maximum number of consecutive ones. 
5. The loop runs for 'n' times, so the TC is O(n) and no extra space is used other than 2 variables, so the Space Complexity is O(1)
*/

#include <vector>
using namespace std;
class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int n = nums.size(); int max = 0; int count = 0;
            for(int i = 0; i < n; i++) {
                if(nums[i] == 1) {
                    count++;
                    if(count > max) max = count;
                }
                else count = 0;
            }
            return max;
        }
    };