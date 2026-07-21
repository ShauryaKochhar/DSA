/* 
Problem: 412. Fizz Buzz
Topic: Strings
Time Complexity: O(n)
Space Complexity: O(n)
Approach: 
1. Create a vector of strings of length n.
2. Run a for loop from 'i' = '1 to n'. If (i % 15) is equal to '0', push "FizzBuzz" in the string. If (i % 3) is equal to '0', push "Fizz" in the string. If (i % 5) is equal to '0', push "Buzz" in the string, else push the integer 'i' by converting it to a string.
3. The loop runs for O(n) time, so the Time Complexity of the code is O(n). 4
4. We don't use any extra space other than the answer vector to solve the problem, so the auxiliary space is O(1) and the total space is O(n).
*/

#include <vector>
using namespace std;
class Solution {
    public:
        vector<string> fizzBuzz(int n) {
            vector <string> answer(n);
            for(int i = 1; i <= n; i++) {
                if(i % 15 == 0) answer[i-1] = "FizzBuzz";
                else if(i % 3 == 0) answer[i-1] = "Fizz";
                else if(i % 5 == 0) answer[i-1] = "Buzz";
                else answer[i-1] = to_string(i);
            }
            return answer;
        }
    };