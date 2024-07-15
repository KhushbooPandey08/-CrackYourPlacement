class Solution {
public:
    void sortColors(vector<int>& nums) {
        int Z=0; int O=0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==0)
            Z++;
            else if(nums[i]==1)
            O++;
        }
        for(int i=0; i<Z; i++)
        {
            nums[i]=0;
        }
        for(int i=Z;i<Z+O;i++)
        {
            nums[i]=1;
        }
        for(int i=Z+O; i<nums.size();i++)
        {
            nums[i]=2;
        }
    }
};