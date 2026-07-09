/* 
Problem: 728. Self Dividing Numbers
Topic: Basic Maths
Time Complexity: O((right - left + 1) x log(right)) 
Space Complexity: O(right - left + 1)
Approach: 
1. Run a for loop from i = left to right (both inclusive). For each 'i', run a while loop until the number becomes '0'. Initialise a variable 'push' with '1'.
2. Inside the while loop, extract every digit of the number. If the digit is '0', or the (number % digit) is not equal to '0', set 'push' to '0'.
3. If push = '1', push the number in the list to be returned. 
4. There are (right - left + 1) numbers in the entire range, and the maximum number of digits can be in the last number (right). So, in the worst case for every number, the while loop has a complexity of O(log(right) + 1).
5. Therefore, the TC - O((right - left + 1) x log(right))
6. Space Complexity in the worst case is O(right - left + 1), in case all the numbers are self-dividing. 
*/

#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> selfDividingNumbers(int left, int right) {
            vector<int> numbers;
            for(int i = left; i <= right; i++) {
                int num = i; int push = 1;
                while(num > 0) {
                    int ld = num % 10;
                    if(ld == 0) {
                        push = 0;
                        break;
                    }
                    if(i % ld != 0) {
                        push = 0;
                        break;
                    }
                    num /= 10;
                }
                if(push != 0) numbers.push_back(i); 
            } 
            return numbers;
        }
    };