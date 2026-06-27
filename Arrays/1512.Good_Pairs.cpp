/* 
Problem: 1512. Number of Good Pairs
Topic: Arrays
Time Complexity: O(n²)
Space Complexity: O(1)
Approach: 
1. Initialise a counter variable with '0'. Run the outer loop from '0' to 'n-1' and the inner loop from 'i+1' to 'n'. 
2. If nums[i] == nums[j] where 'j' is always greater than 'i', we increase the 'counter' variable by '1'.
3. For each 'i', the inner loop runs for 'n-i-1' times. Therefore, (n-1) + (n-2) + (n-3) + .... + 0 = O(n²)
4. Space complexity is a constant = O(1)
*/

#include <vector>
using namespace std;
class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums) {
            int n = nums.size(); int count = 0;
            for(int i = 0; i < n; i++) {
                for(int j = i+1; j < n; j++) {
                    if(nums[i] == nums[j])
                    count++;
                }
            }
            return count;
        }
    };