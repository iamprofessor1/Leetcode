class Solution {
public:
    int countOperations(int num1, int num2) {
        int maxi = max(num1,num2);
        int mini = min(num1,num2);
        int cnt=0;
        while(maxi !=0 &&  mini !=0){
            int temp=maxi-mini;
            maxi = max(temp,mini);
            mini = min(temp,mini);
            cnt++;
            // cout<<maxi<<" "<<mini<<endl;
        }
        return cnt;
    }
};


// 3 2
// 1 2


