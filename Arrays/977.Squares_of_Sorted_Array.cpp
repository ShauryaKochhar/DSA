/* 
Problem: 977. Squares of a Sorted Array 
Topic: Arrays, Two Pointers
Time Complexity: O(n) 
Space Complexity: O(n)
Approach: 
1. Create a vector 'ans' of size 'n'. 
2. We'll use two-pointer approach for solving this problem. Assign a pointer 'left' to the index '0' and 'right' to the index 'n-1' of the array nums.
3. Run a while loop until (left > right). In the while loop, calculate the square of the element at the left and right pointer and compare them. If nums[left] > nums[right], insert nums[leftI into the array at the 'index' of the nums and do a left++. If nums[right] > nums[left], insert nums[right] into the array at the 'index' of the nums and do a right--.
4. This is a two pointer approach and runs for O(n) time, so the time complexity is O(n).
5. We use an extra space of O(n) to store and return the result, so the auxiliary space and the space complexity is O(n).
*/

#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            int n = nums.size();
            vector<int> ans(n);
    
            int left = 0;
            int right = n - 1;
            int idx = n - 1;
    
            while (left <= right) {
                int leftSquare = nums[left] * nums[left];
                int rightSquare = nums[right] * nums[right];
    
                if (leftSquare > rightSquare) {
                    ans[idx] = leftSquare;
                    left++;
                } else {
                    ans[idx] = rightSquare;
                    right--;
                }
                idx--;
            }
            return ans;
        }
    };