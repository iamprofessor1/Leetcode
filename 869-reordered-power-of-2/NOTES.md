for(int i = 0 ; i<powerOftwo[count].size();i++){
string s = powerOftwo[count][i];
// cout<<s<<endl;
unordered_map<char,long long>temp = m1;
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
// cout<<s<<" :"<<endl;
return true;
}
}
return false;
}
};
```
​