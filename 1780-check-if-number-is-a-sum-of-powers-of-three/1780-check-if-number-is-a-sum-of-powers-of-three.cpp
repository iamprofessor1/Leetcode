class Solution {
public:
    bool checkPowersOfThree(int n) {
        if(n%3==2){
            return false;
        }
        else if(n==1){
            return true;
        }
        return checkPowersOfThree(n/3);
    }
};

// 3 + 9 + 27 +