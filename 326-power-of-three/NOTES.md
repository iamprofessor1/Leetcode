```
class Solution {
public:
bool log3(int n){
if(n%3 != 0 && n !=1){
return false;
}
if(n==1){
return true;
}
bool small_ans = log3(n/3);
return small_ans;
}
bool isPowerOfThree(int n) {
return n>0 and log3(n);
}
};
```