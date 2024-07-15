class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int, int>mpp;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            int num = nums[i];
            int moreneeded = target - num;
            if(mpp.find(moreneeded) != mpp.end())
            {
                return {mpp[moreneeded], i};
            }
            mpp[num] = i;
        } 
        return {-1, -1};
    }
};