/* 
Problem: 1295. Find numbers with even number of digits.
Topic: Arrays
Time Complexity: O(n)
Space Complexity: O(1)
Approach: 
1. Run the outer loop from the index '0' to 'n-1' to check every element of the array. 
2. Initialise a counter variable 'count' with '0' and run a while loop dividing the number by 10 till the number becomes 0. Keep on incrementing 'count' by ;1'. 
3. When the number becomes '0', increment the variable 'even' by '1' if 'count' is divisible by '2'.
*/

#include <vector>
using namespace std;
class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int even = 0; int n = nums.size();
            for(int i = 0; i < n; i++) {
                int number = nums[i]; int count = 0;
                while(number > 0) {
                    number /= 10;
                    count++;
                }
                if(count % 2 == 0) even++;
            }
            return even;
        }
    };