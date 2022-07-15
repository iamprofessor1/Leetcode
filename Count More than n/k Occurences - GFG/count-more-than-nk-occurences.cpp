// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int v[], int n, int k) {
        // Your code here
        unordered_map<int,int>ump;
        for(int i = 0 ;i<n ;i++){
            if(ump.find(v[i])!=ump.end()){
                ump[v[i]]++;
            }
            else{
                if(ump.size()<k-1){
                    ump.insert({v[i],1});
                }
                else{
                    auto it = ump.begin();
                    while(it!=ump.end()){
                        it->second--;
                        if(it->second==0){
                            it = ump.erase(it);
                        }
                        else{
                            it++;
                        }
                    }
                }
            }
        }
        int ans= 0;
        for(auto & x : ump){
            int count = 0;
            for(int i = 0 ;i<n;i++){
                int y= v[i];
                if(x.first==y){
                    count++;
                }
            }
            if(count>n/k){
                ans++;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends