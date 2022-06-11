class Solution {
public:
    int trap(vector<int>& h) {
        int n =h.size();
        vector<int>lmax(n,0),rmax(n,0);
        lmax[0]= h[0];
        for(int i = 1 ; i<n ;i++){
            lmax[i] = max(lmax[i-1],h[i]);
        }
        rmax[n-1] =h[n-1];
        for(int i = n-2 ;i>=0 ;i--){
            rmax[i] = max(rmax[i+1] ,h[i]);
        }
        //calculating total water
        int total_water = 0;
        for(int i = 1 ; i<n-1;i++){
            int choti_h = min(lmax[i],rmax[i]);
            total_water += choti_h - h[i];
        }
        return total_water;
    }
};