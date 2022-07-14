// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        // Your code goes here
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>s;
        for(int i = 0 ; i< nums.size();i++){
            for(int j = i+1 ; j< nums.size();j++){
                int start = j+1;
                int end = nums.size()-1;
                while(start<end){
                    long long  sum = nums[i]+ nums[j]+ 1LL + nums[start]+ nums[end] -1LL;
                    if(sum==target){
                        vector<int>temp={nums[i],nums[j],nums[start],nums[end]};
                        if(s.find(temp)==s.end()){
                            ans.push_back(temp);
                            s.insert(temp);
                        }
                        temp.clear();
                        start++;
                        end--;
                    }
                    else if(sum>target){
                        end--;
                    }
                    else{
                        start++;
                    }
                    
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends