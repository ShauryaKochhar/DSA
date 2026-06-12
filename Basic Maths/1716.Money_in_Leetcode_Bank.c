/*
Problem: 1716. Calculate Money in Leetcode Bank
Topic: Basic Maths
Time Complexity: O(n)
Space Complexity: O(1)
Approach: 
1. Calculate total number of weeks and increment the value by 1 for every new week.
2. Calculate the value for the remaining days.
*/

int totalMoney(int n) {
    int weeks = n/7;
    int days = n%7;
    int value = 0;

    for(int i = 0; i <= weeks - 1; i++) {
        for(int j = i+1; j <= 7 + i; j++) {
            value = value + j;
        }
}
    for(int j = (weeks + 1); j <= weeks + days; j++) {
        value = value + j;
    }
    return value;
}
