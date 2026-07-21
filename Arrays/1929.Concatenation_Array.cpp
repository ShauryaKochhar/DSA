/* 
Problem: 1929. Concatenation of Array
Topic: Arrays
Time Complexity: O(n)
Space Complexity: O(1)
Approach: 
1. Create a vector 'ans' of size '2n'.
2. Run a loop from 'i' = '0 to (2*n)'. For the first n elements, ans[i] = nums[i]. For the next 'n' elements, ans[i] = nums[i-n], so as to push the 'n' elements twice in the array.
3. The loop runs for '2n' time, but constants are ignores in time complexity, so the TC is O(n).
4. A vector of size (2n) is created to return the answer, and not solve the problem. So the auxiliary space is O(1) and the total space is O(n).
*/

#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            int n = nums.size();
            vector <int> ans(2*n);
            for(int i = 0; i < (2 * n); i++) {
                if(i < n) ans[i] = nums[i];
                else ans[i] = nums[i-n];
            }
            return ans;
        }
    };