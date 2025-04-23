#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int ClosestToZero_SortAndBinarySearch(int *arr,int Size){
    sort(arr,arr+Size);
    int n = Size;
    int res = INT_MIN;
    for(int i=0;i<n;i++){
        int x = arr[i];
        
        int left = i+1,right = n-1;
        while(left<=right){
            int mid = (left+right)/2;
            
            int current = arr[mid]+x;
            if(current == 0){
                return current;
            }
            
            if(abs(current) < abs(res)){
                res = current;
            }

            if(current < 0){
                left = mid + 1;
            }
            else{
                right = mid - 1; 
            }
        }
    }
    return res;
    
}
int ClosestToZero_TwoPointer(int *arr,int Size){
    sort(arr,arr+Size);
    int i=0;
    int j=Size-1;
    int res = INT_MIN;
    
    

}
int main() {
    int arr[6] = {-8, -5, -3, 1, 4, 7};
    
}
