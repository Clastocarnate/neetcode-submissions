class Solution {
public:

    int count(int num, vector<int> nums){
        int c = 0;
        for (int i:nums){
            if (i ==  num) c++;
        }
        return c;
    }

    bool hasDuplicate(vector<int>& nums) {
        bool flag = false;
        for (int num:nums){
            int c =  count(num, nums);
            if (c > 1) flag = true;
        }


        return flag;
        }
};