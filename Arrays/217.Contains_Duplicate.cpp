/* 
Problem: 217. Contains Duplicate
Topic: Arrays, Hash Table
Time Complexity: O(n) 
Space Complexity: O(n)
Approach: 
1. Run a for each loop which traverses the array for every element.
2. If an element may already have existed in the array, st.find(num) will not be equal to st.end() and true will be returned.
3. If the element was not present in the array before, the element will be inserted and at the end of the for each loop, false will be returned as no number occured twice. 
4. There are 'n' elements in the array and the loop runs for 'n' times. Therefore the time complexity is O(n).
5. In the worst case, the whole array is traversed and each time an element is inserted and 'n' no. of spaces is used. Therefore, the space complexity is also O(n).
*/

#include <unordered_set>
using namespace std;
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_set<int> st;
            for(int num : nums) {
                if(st.find(num) != st.end()) 
                return true;
                st.insert(num);
            }
            return false;
        }
    };