// #include<bits/stdc++.h>
// #include<climits>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;


//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     // int maxNo = INT_MAX;
//     // int minNo = INT_MIN;

//     int maxNo = arr[0];

//     for (int i = 0; i < n; i++)
//     {
//       if(arr[i] > maxNo){
//           maxNo = arr[i];
//       }
//     }
//     int minNo = arr[0];

//     for (int i = 0; i < n; i++)
//     {
//       if(arr[i] < minNo){
//           minNo = arr[i];
//       }
//     }

//     cout<<maxNo<<" "<<minNo;
//     return 0;
    
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }

  int maxNo = arr[0];
  for (int i = 0; i < n; i++)
  {
    if(arr[i] > maxNo){
      maxNo = arr[i];
    }
  }

  int minNo = arr[0];
  for (int i = 0; i < n; i++)
  {
    if(arr[i]<minNo){
      minNo = arr[i];
    }
  }
  
  cout<<maxNo<<" "<<minNo<<endl;
  
  return 0;
}