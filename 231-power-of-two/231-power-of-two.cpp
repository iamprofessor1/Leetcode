class Solution {
public:
bool isPowerOfTwo(int n) {
if(n==0)
return false;
if(n==1)
return true;
if(ceil(log2(n))==floor(log2(n)))
{
return true;
}
return false;
}
};