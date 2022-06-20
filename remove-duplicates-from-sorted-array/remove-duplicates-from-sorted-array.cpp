class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int count = 1;
        for(int i = 0 ; i< arr.size() ;i++){
            if(arr[count-1]!= arr[i]){
                swap(arr[i],arr[count]);
                count++;
            }
        }
        return count;
    }
};