#include<bits/stdc++.h>
using namespace std;
    
bool linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
    
int main(){
   int arr[10] = {1,3,4,6,23,5,34,2,10,23};
   int key;
   cin>>key;

   bool found = linearSearch(arr, 10, key);
   if(found){
    cout<<"Key is Present"<<endl;
   }
   else{
    cout<<"Key is not Present"<<endl;
   }
    return 0;
}