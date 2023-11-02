class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> ans;

        for(auto x: nums){
            if(ans.contains(x)) ans.erase(x);
            else ans.insert(x);
        }
        
    return *ans.begin();
    }

};