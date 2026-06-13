/* 
Problem: 1. Two Sum
Topic: Arrays
Time Complexity: O(n²)
Space Complexity: O(1)
Approach: 
1. This is the Brute-Force Approach for solving the problem. 
2. We run the outer loop from i= (0 to n-1) index and the inner loop from j = (i+1 to n-1) index for checking every possible pair in the array.
3. If we get the sum of the pair equal to target, we return the indexes 'i' and 'j'. 
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