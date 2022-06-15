class Solution {
public:
    bool v[256][256] ={0};
    bool matchReplacement(string s, string sub, vector<vector<char>>& mapping) {
        int n = s.size();
        int m = sub.size();
        for(int i = 0 ; i<mapping.size() ;i++){
            v[mapping[i][0]][mapping[i][1]] = true;
        }
//         diagonal_elements  = 1;
        for(int i = 0 ; i<sub.size() ;i++){
            v[sub[i]][sub[i]] = true;
        }
        // for(int i = 0 ; i< 256 ; i++){
        //     for(int j = 0 ;)
        // }

        for(int i = 0 ;i<= n- m ;i++ ){
            bool isbaar_sahi_hai = true;
            for(int j = 0 ; j< m ;j++){
//                 can current char can be converted into 
                    if(v[sub[j]][s[i+j]] == false){
                        isbaar_sahi_hai = false;
                    }
            }
            if(isbaar_sahi_hai){
                return true;
            }
        }
        return false;
    }
};