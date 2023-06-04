#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   // We will use DNF sort Algo...
   int start = 0;
   int mid = 0;
   int end = n-1;
   while(mid <= end){
      if(arr[mid] == 0){
         swap(arr[start],arr[mid]);
         start++;
         mid++;
      }
      else if(arr[mid] == 1){
         mid++;
      }
      else{
         swap(arr[end],arr[mid]);
         end--;
      }
   }
}
