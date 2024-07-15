class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int a = nums[i];
            if(mpp.find(a)!= mpp.end())
            {
                return a;
            }
            mpp[a]=i;
        }
        return (-1);
    }
};