/* 
Problem: 2011. Final Value of Variable After Performing Operations
Topic: Strings
Time Complexity: O(n), where 'n' is the number of elememnts in string 's'.
Space Complexity: O(1)
Approach: 
1. Initilaise a variable 'result' with 0.
2. The vector operations contains strings indicating the operation to be performed. 
3. Run a loop from 'i' = '0 to n-1' to access every operation of the vector. Inside this loop, run another for loop from 'j' = '0 to 1', as we will get to know whether the operation is '+' or '-' in the first two indexes of the string. 
4. If operations[i][j] is equal to '+', do a result++; if operations[i][j] is equal to '-', do a result-- At the end, return result.
5. The outer loop runs for 'n' times, and the inner loop runs for '2' times at max for each iteration of the outer loop, so the TC is O(2n) = O(n).
6. No extra space is used apart from 2 variables, so the space complexity is O(1).
*/

#include <vector>
#include <string>
using namespace std;
class Solution {
    public:
        int finalValueAfterOperations(vector<string>& operations) {
            int n = operations.size(); int result = 0;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < 2; j++) {
                    if(operations[i][j] == '+') {
                        result++;
                        break;
                    } else if(operations[i][j] == '-') {
                        result--;
                        break;
                    }
                }
            }
            return result;
        }
    };