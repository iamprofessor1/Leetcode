// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> v, int target) {
        // Your code goes here
        sort(v.begin(),v.end());
        int ans = v[0]+v[1]+v[2];
        int min_diff = abs(ans-target);
        for(int i = 0 ; i<v.size() ;i++){
            int start = i+1;
            int end = v.size()-1LL;
            while(start<end){
                int sum = v[start]+v[end]+v[i];
                int diff = abs(sum - target);
                if(sum==target){
                    return sum;
                }
                else if(sum>target){
                    if(min_diff == diff && ans < sum){
                        ans = sum;
                    }
                    else if(min_diff > diff){
                        min_diff = diff;
                        ans = sum;
                    }
                    end--;
                }
                else{
                    if(min_diff == diff && ans < sum){
                        ans = sum;
                    }
                    else if(min_diff > diff){
                        min_diff = diff;
                        ans = sum;
                    }
                    start++;
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
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.
  // } Driver Code Ends