class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       
        int nonzero_occurence = 0;
        
       
         
        for (auto& it : nums) {
             
            if(it!=0)
            {
                nonzero_occurence++;
                nums[nonzero_occurence - 1] = it; 
            }
             
         }
        
        for(int i = nonzero_occurence; i < nums.size();i++)
        {
            nums[i] = 0;
        }
        
      
        for (auto& it : nums) {
        cout << it << ' ';
        }
        
    }
};