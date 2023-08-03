#include<bits/stdc++.h>
using namespace std;

int knapSack(int value[], int wt[], int n, int W){

    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapSack(value, wt, n-1, W);
    }

    return max(knapSack(value, wt, n-1, W-wt[n-1])+value[n-1], knapSack(value, wt, n-1, W));
}

int main(){ 
    int wt[] = {1, 3, 5, 4, 1, 3, 2};
    int value[] = {5, 10 , 15 ,7, 8, 9, 4};
    int W = 15;
    cout<<knapSack(value, wt, 7, W)<<endl;
    return 0;
}