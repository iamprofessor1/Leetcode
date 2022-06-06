class Solution {
    
public:
    
    bool reorderedPowerOf2(int n) {
        map<char,long long >m1;
        int count =0;
        string s= to_string(n);
        for(auto x : s){
            m1[x]++;
            count++;
        }
        for(auto x : m1){
            cout<<"fi"<<x.first<<" "<<"se"<<x.second<<endl;
        }
        vector<vector<string>>powerOftwo(11);
        long long temp = 1;
        while( temp <= 1e10 ){
            string s = to_string(temp);
            int t = (int)s.size();
            cout<<s<<endl;
            powerOftwo[t].push_back(s);
            temp *=2;
            if(t==10){
                break;
            }
        }
      
        // poweroftwo[v.size()];
        for(int i = 0 ; i<powerOftwo[count].size();i++){
            
            string s = powerOftwo[count][i];
            cout<<s<<endl;
            map<char,long long>temp = m1;
            bool check = true;
            for(auto x :s){
                if(temp[x] == 0){
                    check =false;
                    break;
                }
                else{
                    temp[x]--;
                }
                
            }
            if(check){
                cout<<s<<" :"<<endl;
                return true;
            }
        }
        
        return false;
    }
};

    // 1
    //     10
    //     100  6
    //     1000
    //     10000