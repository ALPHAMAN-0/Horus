/*
   Pronlem Statement: Given an integer array arr[] and an integer k, determine whether there exist two indices i and j such that arr[i] == arr[j] and |i – j| ≤ k. If such a pair exists, return ‘Yes’, otherwise return ‘No’.

   Idea : 
       The idea is to use HashSet to store elements of the array arr[] and check if there is any duplicate present within a k distance. Also remove elements that are present at more than k distance from the current element. Following is a detailed algorithm.

        Create an empty HashSet. 
        Traverse all elements from left to right. Let the current element be ‘arr[i]’ 
            If the current element ‘arr[i]’ is present in a HashSet, then return true. 
            Else add arr[i] to hash and remove arr[i-k] from hash if i >= k
     
    Time Complexity: O(n)
    Space Complexity: O(n)

*/
#include <bits/stdc++.h>
using namespace std;

// C++ program to Check if a given array contains duplicate
// elements within k distance from each other
bool checkDuplicatesWithinK(vector<int> &arr, int k) {
    // Creates an empty hashset
    unordered_set<int> s;

    // Traverse the input array
    for (int i = 0; i < arr.size(); i++) {
      
        // If already present in hash, then we found
        // a duplicate within k distance
        if (s.find(arr[i]) != s.end())
            return true;

        // Add this item to hashset
        s.insert(arr[i]);

        // Remove the k+1 distant item
        if (i >= k)
            s.erase(arr[i - k]);
    }
    return false;
}

// Driver method to test above method
int main () {
    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};
    if (checkDuplicatesWithinK(arr, 3))
        cout << "Yes";
    else
        cout << "No";
}