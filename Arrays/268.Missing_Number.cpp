/* 
Problem: 268. Missing Number
Topic: Arrays, Basic Maths
Time Complexity: O(n) 
Space Complexity: O(1)
Approach: 
1. Get the size of the array and store it in a variable 'n'.
2. Calculate the sum of 'n' integers by the formula - n * (n+1)/2 and call it 'actsum'. The array contains must contain all the elements from '0' to 'n' (total n+1), but it doesn't contain one element.
3. Initialise a variable 'sum' with '0' and run a for loop from 'i' = '0 to n-1' and keep on adding the elemnents of the array to sum.
4. Once the for loop ends, return (actsum - sum) as it gives the difference between the actual sum of (n+1) elements from '0 to n', and the sum calculated by traversing the array.
*/

#include <vector>
using namespace std;
class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n = nums.size(); int actsum = n * (n+1) / 2;
            int sum = 0;
            for(int i = 0; i < n; i++) {
                sum += nums[i];
            }
            return actsum - sum;
        }
    };