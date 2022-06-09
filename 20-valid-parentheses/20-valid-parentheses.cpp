class Solution {
public:
    bool check(char c , char x){
        if((c == '(' && x== ')') || (c =='{' && x =='}') ||( c == '[' && x ==']')){
            return true;
        }
        else return false;
    }
    bool isValid(string s) {
        stack<char>st;
        for(auto x : s){
            if(x=='(' || x=='[' || x=='{'){
                st.push(x);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char c = st.top();
                if(check(c,x) == false ){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
    
};