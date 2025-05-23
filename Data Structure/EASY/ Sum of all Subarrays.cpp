/*
Problem: Given an integer array arr[], find the sum of all sub-arrays of the given array. 
    
    If we take a close look then we observe a pattern. 
    Let’s take an example:

    arr[] = [1, 2, 3], n = 3
    All subarrays :  [1], [1, 2], [1, 2, 3], [2], [2, 3], [3]

    here first element ‘arr[0]’ appears 3 times    
    second element ‘arr[1]’ appears 4 times  
    third element ‘arr[2]’ appears 3 times

    Every element arr[i] appears in two types of subsets:

    i)  In subarrays beginning with arr[i]. There are 
        (n-i) such subsets. For example [2] appears
        in [2] and [2, 3].

    ii) In (n-i)*i subarrays where this element is not
        first element. For example [2] appears in [1, 2] and [1, 2, 3].

    Total of above (i) and (ii) = (n-i) + (n-i)*i  = (n-i)(i+1)

    For arr[] = {1, 2, 3}, sum of subarrays is:

      arr[0] * ( 0 + 1 ) * ( 3 – 0 ) + 
      arr[1] * ( 1 + 1 ) * ( 3 – 1 ) +
      arr[2] * ( 2 + 1 ) * ( 3 – 2 ) 


    = 1*3 + 2*4 + 3*3 
    = 20

    So, the sum of all subarrays is 20.
*/

#include <bits/stdc++.h>
using namespace std;
 
  int subarraySum(vector<int>&arr) {
    
     int n=arr.size();
      int result = 0;

    // computing sum of subarray using formula
    for (int i = 0; i < n; i++)
        result += (arr[i] * (i + 1) * (n - i));

    // return all subarray sum
    return result;
}

 
int main() {
    vector<int>arr = { 1, 2, 3 };
    int n = arr.size();
    cout <<subarraySum(arr);
    return 0;
}
