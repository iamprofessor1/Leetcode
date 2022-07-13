// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        int end = s.find('.');
        reverse(s.begin(),s.begin()+end);
        int start = end+1;
        while(true){
             start = end+1;
             end =  s.find('.',end+1);
             if(end==std::string::npos){
                 break;
             }
             reverse(s.begin()+start,s.begin()+end);
        }
        reverse(s.begin()+start,s.end());
       return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends