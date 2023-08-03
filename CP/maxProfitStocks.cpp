#include<bits/stdc++.h>
using namespace std;

int maxProfitStocks(vector<int>& a){
        int minSofar = a[0];
        int maxProfit = 0;
        // int size = sizeof(a)/sizeof(a[0]);
        
        for (int i = 0; i < a.size(); i++)
        {
             minSofar = min(minSofar,a[i]);
            int profit = a[i] - minSofar;
            maxProfit = max(maxProfit, profit);
        }
        
        return maxProfit;
    
}

int main(){
    vector<int> v = {7, 1, 5, 3, 6, 4};
    int ans = maxProfitStocks(v);
    cout<<ans<<" ";
    return 0;
}