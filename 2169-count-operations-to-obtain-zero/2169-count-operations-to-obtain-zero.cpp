class Solution {
public:
    int countOperations(int num1, int num2) {
        int maxi = max(num1,num2);
        int mini = min(num1,num2);
        int cnt=0;
        while(maxi !=0 &&  mini !=0){
            cnt += maxi/mini;
            maxi = maxi%mini;
            swap(maxi,mini);
            
        }
        return cnt;
    }
};



