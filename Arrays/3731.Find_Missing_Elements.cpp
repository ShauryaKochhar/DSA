/* 
Problem: 3731. Find Missing Elements
Topic: Arrays, Hash Table
Time Complexity: O(n²)
Space Complexity:- Auxiliary Space : O(1)
Output Space: O(k), where 'k' is the number of missing elements from the range.
Approach: 
1. This is the brute-force approach for solving the problem. 
2. Find the smallest and the largest numbers present in the array, to get the interval of our range by running a loop with O(n) time.
3. Run a loop from the smallest to the largest element (both inclusive), and search for each element in the given array. If we find the element, we break out of the loop, else we push that element into the list.
4. The TC of the nested loop is O(n²) so the total TC is O(n²) and the auxiliary space complexity is O(1).
*/

#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> findMissingElements(vector<int>& nums) {
            vector<int> list;
            int n = nums.size();
            int sm = nums[0]; int lg = nums[n-1];
            for(int i = 0; i < n; i++) {
                if(nums[i] > lg) lg = nums[i];
                if(nums[i] < sm) sm = nums[i];
            }
            for(int i = sm; i <= lg; i++) {
                for(int j = 0; j < n; j++) {
                    if(nums[j] == i) break;
                    else if(nums[j] != i && j == n-1) list.push_back(i);
                }
                
            }
            return list;
        }
    };