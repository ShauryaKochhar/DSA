/* 
Problem: 283. Move Zeroes 
Topic: Arrays, Two Pointers
Time Complexity: O(n) 
Space Complexity: O(1)
Approach: 
1. We use the two-pinter approach for this question. Assign a pointer 'i' to the index pointing at the first '0' in the array. 
2. Run a loop to find the first '0' and assign that index to 'j' and break out of the loop. 
3. Now, run a loop from 'i' = 'j+1' to 'n'. If, nums[i] is not equal to nums[i] (0), swap nums[i] and nums[j], and do a j++.
4. The first loop runs for O(x) time, where 'x' is the index where we find the first '0' of the array. The second loop runs from that element forward. So, the second loop has a time complexity of O(n-x).
5. Therefore, the total TC = O(x) + O(n-x) = O(n).
6. We don't use any extra space to solve this question, so the space comoplexity is a constant = O(1).
*/

#include <vector>
using namespace std;
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n = nums.size();
            int j;
            for(int i = 0; i < n; i++) {
                if(nums[i] == 0) {
                    j = i;
                    break;
                }
            }
            for(int i = j+1; i < n; i++) {
                if(nums[i] != 0) {
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                    j++;
                }
            }
        }
    };