int Solution::canJump(vector<int> &nums) {
     int n=nums.size();
        int can_reach=0;
        for(int i=0;i<=can_reach;i++)
        {
            if(i==n-1){
                //cout<<count;
                return 1;
            }
            can_reach=max(can_reach,i+nums[i]);
            //count++;
        }
        
        return 0;
}
/*https://www.interviewbit.com/problems/jump-game-array/*/
