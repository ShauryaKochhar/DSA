/* 
Problem: 1480. Running Sum
Topic: Arrays
Time Complexity: O(n²)
Space Complexity: O(n)
Approach: 
1. This is the Brute-Force approach for solving the problem. We sum the elements from 0 to n-1 for each element where n is the element number of the array.
2. The inner loop runs for 1, 2, 3, 4, ...., n times. Therefore, the total time is = n(n+1)/2 which is approximately equal to O(n²).
3. The resultant array contains 'n' elements and hence the space complexity is O(n). 
*/

#include <vector>
#include <iostream>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for(int i = 0; i < nums.size(); i++) {
                for(int j = i+1; j < nums.size(); j++) {
                    if(nums[i] + nums[j] == target) {
                        return {i, j};                   
                    } 
                }
            }
            return {};
        }
    };