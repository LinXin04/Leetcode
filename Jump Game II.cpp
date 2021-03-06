class Solution {
public:
    int jump(vector<int>& nums) {
        int left=0;
        int right=0;
        int steps=0;
        int n=nums.size();
        if(n==0||n==1) return 0;
        while(left<=right)
        {
            ++steps;
            int old_right=right;
            for(int i=left;i<=old_right;i++)
            {
                int new_right=i+nums[i];
                if(new_right>=n-1) return steps;
                if(new_right>right) right=new_right; 
            }
            left=old_right+1;
        }
        return 0;
    }
};
