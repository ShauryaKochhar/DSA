/* 
Problem: 1979. Find Greatest Common Divisor of Array 
Topic: Basic Maths
Time Complexity: O(n)
Space Complexity: O(1)
Approach: 
1. First assign nums[0] and nums[n-1] to 'sn' and 'gn' respectively, where 'sn' - smallest number, 'gn' - greatest number.
2. Traverse through the array and keep on comparing each element with 'sn' and 'gn'. If the element is greater than 'gn', assign that element to 'gn'. If the element is smaller than 'sn', assign that element to 'sn'.
3. Now, by Euclid's Algorithm, find gcd of 'sn' and 'gn'. Run a while loop, until either of them becomes '0'. If (gn > sn), do gn = gn % sn, and vice versa. 
4. After the loop ends, check for the element that became zero. The other non-zero element is our gcd.
5. The first for loop runs for O(n) time, and the while loop runs for O(log(min(sn,gn))), which can be neglected. So the TC - O{n} and SC - O(1).
*/


#include <vector>
using namespace std;
class Solution {
    public:
        int findGCD(vector<int>& nums) {
            int n = nums.size();
            int sn = nums[0]; int gn = nums[n-1];
            for(int i = 0; i < n; i++) {
                if(nums[i] < sn ) sn = nums[i];
                if(nums[i] > gn) gn = nums[i];
            }
            while(gn > 0 && sn > 0) {
                if(gn > sn) gn = gn % sn;
                else sn = sn % gn;
            }
            if(gn == 0) return sn;
            else return gn; 
        }
    };