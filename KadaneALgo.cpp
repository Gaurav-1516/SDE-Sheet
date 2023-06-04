#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    if(n == 0) return 0;

    long long int prevSum = arr[0];
    long long int ans = arr[0];
    for(int i = 1 ; i < n ; i++){
        prevSum = prevSum + arr[i];
        if(arr[i] > prevSum) prevSum = arr[i];
        ans = max(ans,prevSum);
    }
    return ans < 0 ? 0 : ans;
}
