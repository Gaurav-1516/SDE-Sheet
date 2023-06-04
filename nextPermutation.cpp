/*      WRONG APPROACH
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int currIdx = n-1;
    while(currIdx){
        for(int i = currIdx-1 ; i >= 0 ; i--){
            if(permutation[i] < permutation[currIdx]){
                swap(permutation[i],permutation[currIdx]);
                return permutation;
            }
        }
        currIdx--;
    }
    sort(permutation.begin(),permutation.end());
    return permutation;
}
*/

// Actual Approach...
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
    // Finding the change point..
    int cp = -1;
    for(int i = n-2 ; i >= 0; i--){
        if(arr[i] < arr[i+1]){
            cp = i;
            break;
        }
    }
    if(cp == -1){
        reverse(arr.begin(),arr.end());
        return arr;
    }

    // Finding the next greater element on the right side of cp;
    // nge --> next greater element on right of the cp;
    int nge = -1;
    for(int i = cp+1; i < n ; i++){
        if(arr[i] > arr[cp]){
            // if(nge == -1) nge = i;
            // else{
            //     if(arr[nge] > arr[i]) nge = i;
            // }
            // Can be further optimised as they are in descending order, the last element that is 
            // greater would be the nge..
            nge = i;
        }
    }
    swap(arr[cp],arr[nge]);

    reverse(arr.begin()+cp+1,arr.end());
    return arr;
}
