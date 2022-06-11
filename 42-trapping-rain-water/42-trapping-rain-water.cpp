class Solution {
public:
    int trap(vector<int>& h) {
        int n =h.size();
        vector<int>lmax(n,0),rmax(n,0);
        lmax[0]= h[0];
//         Water is always stored between the top height
//         precalculating the leftmostmaxium value till that point including me
        for(int i = 1 ; i<n ;i++){
            lmax[i] = max(lmax[i-1],h[i]);
        }
//         precalculating the rigthmostmaxium value till that point including me
        rmax[n-1] =h[n-1];
        for(int i = n-2 ;i>=0 ;i--){
            rmax[i] = max(rmax[i+1] ,h[i]);
        }
        //calculating total water
        int total_water = 0;
//         No water is stored at 1st and 2nd block
        for(int i = 1 ; i<n-1;i++){
//             itna water do baade baade pillar ke bicche mein hota 
            int choti_h = min(lmax[i],rmax[i]);
//         itna uppar hai isisliye subtract kia hai
            total_water += choti_h - h[i];
        }
        return total_water;
    }
};