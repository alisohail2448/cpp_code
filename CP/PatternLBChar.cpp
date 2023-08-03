#include<bits/stdc++.h>
using namespace std;


// A A A A 
// B B B B 
// C C C C 
// D D D D

    
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row <= n){
//         int col = 1;
//         while (col <= n)
//         {
//             char ch = 'A' + row - 1;
//             cout<<ch<<" ";
//             col = col + 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }




// A B C D 
// A B C D 
// A B C D 
// A B C D



// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row <= n){
//         int col = 1;
//         while (col <= n)
//         {
//             char ch = 'A' + col - 1;
//             cout<<ch<<" ";
//             col = col + 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }





// A B C D 
// E F G H 
// I J K L 
// M N O P


// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     char start = 'A';

//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//             cout<<start<<" ";
//             start = start + 1;
//             col = col + 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
// }



// A B C D 
// B C D E 
// C D E F 
// D E F G



int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A' + row + col - 2;
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}