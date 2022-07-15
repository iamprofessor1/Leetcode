class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        unordered_map<int, int> ump;
        vector<int>ans;
        int k = 3;
        int n = v.size();
        
    //------ Step 1 -> Finding the keys ---- //
    for (int i = 0; i < n; i++)
    {
        if (ump.find(v[i]) != ump.end())
        {
            ump[v[i]]++;
        }
        else
        {
            if (ump.size() < k - 1)
            {
                // then we can insert into the map
                ump.insert({v[i], 1});
            }
            else
            {
                // means now the size of map is equal to k-1
                // so this element can not be inserted
                for (auto it = ump.begin(); it != ump.end();)
                {
                    it->second--;
                    if (it->second == 0)
                    {
                        it = ump.erase(it);
                    }
                    else
                    {
                        it++;
                    }
                }
            }
        }
        // for (auto x : ump)
        // {
        //     cout << x.first << "->" << x.second << " ,";
        // }
        // cout << endl;
    }
    // ---- Step 2 -> Veryfying our answer ->O(k*n) times ---- //
    for (auto x : ump)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (x.first == v[i])
                count++;
        }

        if (count > n / k)
        ans.push_back(x.first);
    }
        return ans;
    }
    
};