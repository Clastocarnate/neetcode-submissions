#include<unordered_set>

class Solution {
public:

    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> mySet;
    
    for (int num:nums){
        if (mySet.contains(num)) return true;

        mySet.insert(num);
    }
    return false;    
    
    
    }
};