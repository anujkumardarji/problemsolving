class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = 0 ;
        int currentSum = 0;
        bool isNagativeArray = false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0){
                isNagativeArray = true;
            }
            else 
            {
                isNagativeArray = false;
                break;
            }
        }
        if(isNagativeArray)
        {
            return *max_element(nums.begin(),nums.end());
        }
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
            currentSum = currentSum + nums[i];
            if(currentSum > maxSum)
            {
                maxSum = currentSum;
            }
            if(currentSum<0)
            {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};