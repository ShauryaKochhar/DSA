/* 
Problem: 26. Remove Duplicates from Sorted Array
Topic: Arrays, Two Pointers
Time Complexity: O(n) 
Space Complexity: O(1)
Approach: 
1. We use the two-pointer method for this question. 
2. Assign a pointer 'i' to '0'. Run a loop from 'j' = 'i+1' to 'n' for traversing the array. If nums[i] != nums[i+1], then nums[i+1] = nums[j].
3. In this way, if we get an element that is not equal to the element at the 'i' pointer, we put it at the next index from the 'ith' index. 
4. The loop runs for 'n' times, so the TC is O(n), and we don't use any extra space to solve this problem, so the SC is O(1).
*/

#include <vector>
using namespace std;
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i = 0; int n = nums.size();
            for(int j = 1; j < n; j++) {
                if(nums[i] != nums[j]) {
                    nums[i+1] = nums[j];
                    i++;
                }
            }
            return i+1;
        }
    };