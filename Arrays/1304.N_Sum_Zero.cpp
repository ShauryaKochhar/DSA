/* 
Problem: 1304. Find N Unique Integers Sum up to Zero
Topic: Arrays, Basic Maths
Time Complexity: O(n) 
Space Complexity: O(n)
Approach: 
1. If the number 'n' is even, we insert 'n/2' positive and 'n/2' negative numbers to the resultant vector. 
2. Run a loop from (i = 1 to n). If 'i' is odd, insert '-i' to the vector and if 'i' is even, insert 'i-1' to the vector so that '-i; amd 'i-1' cancel each other.
3. If the number 'n' is odd, firstly add '0' to the vector. Then repeat the same process for the remaining (n-1) elements. 
4. In either case, we run the loop for 'n' times, so the time complexity becomes O(n) and the resultant vector also contains 'n' elements, so the space complexity is also O(n).
*/

#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> sumZero(int n) {
            vector<int> result;
            if(n % 2 == 0) {
                for(int i = 1; i <= n; i++) {
                    if(i % 2 == 0) {
                        result.push_back(i-1);
                    } else result.push_back(-i);
                }
            } 
            else {
                    result.push_back(0);
                    for(int i = 1; i <= n-1; i++) {
                        if(i % 2 == 0) {
                            result.push_back(i-1);
                        } else result.push_back(-i);
                    }
                }
                return result;
        }
    };