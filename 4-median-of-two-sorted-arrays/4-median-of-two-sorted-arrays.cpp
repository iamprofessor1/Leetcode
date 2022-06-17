class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1>n2){
            swap(n1,n2);
            swap(nums1,nums2);
        }
        int start1 = 0 , end1= n1;
        while(start1<=end1){
            int mid1 = (start1+end1)/2;
            int mid2 = (n1+n2+1)/2 - mid1;
            

            int mini1 = mid1 == n1 ? (INT_MAX) : nums1[mid1];//mini1 =>minimum element in right side of nums1
            int mini2 = mid2 == n2 ? (INT_MAX) : nums2[mid2];//mini2 =>minimum element in right side of nums2
            int maxi1 =  mid1==0 ? (INT_MIN) : nums1[mid1-1];//maxi1 =>maximum element in left of nums1
            int maxi2 = mid2 ==0 ? (INT_MIN) : nums2[mid2-1];//maxi2 =>maximum element in left of nums2
            
            // no need top perform anything further
            if(maxi1<=mini2 && maxi2 <= mini1){
                // cout<<maxi1<<" "<<maxi2<<endl;
                if((n1+n2)&1)return ((double)(max(maxi1,maxi2)));
                else return (double)((max(maxi1,maxi2)/2.0) + (min(mini1,mini2)/2.0));
            }
            //in search of smaller element 
            else if(maxi1 > mini2){
                end1 = mid1-1;
            }
//             in searh of greater element
            else{
                start1 = mid1+1;
            }
            
        }
        return 0;
    }
};