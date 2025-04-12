/*
    problem :Given an unsorted array of size n. Array elements are in the range of 1 to n. 
    One number from set {1, 2, …n} is missing and one number occurs twice in the array.
    The task is to find these two numbers.

    solve Way
    **The idea is to use array elements as indices and mark the visited elements by making them negative. 
    
    1) When we encounter an element whose corresponding index is already marked negative, we’ve found our repeating number. 
    2) After this, any index that still has a positive value indicates that index+1 is our missing number since it was never marked.
    
    **Math Approach:The idea is to use mathematical equations based on the sum and sum of squares of numbers from 1 to n. 
    The difference between expected and actual sums will give us one equation, and the difference between expected and actual sum of squares will give us another equation. 
    Solving these equations yields our missing and repeating numbers.

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();
  
    int s = (n * (n + 1)) / 2;
    int ssq = (n * (n + 1) * (2 * n + 1)) / 6;
  
    int missing = 0, repeating = 0;
    
    for (int i = 0; i < arr.size(); i++) {
       s -= arr[i];
       ssq -= arr[i] * arr[i];
    }
    
    missing = (s + ssq / s) / 2;
    repeating = missing - s;
    
    return {repeating, missing};
}

int main() {
    vector<int> arr = {3, 1, 3};
    vector<int> ans = findTwoElement(arr);
    
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
