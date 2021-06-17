class Solution {
public: 
    vector<int> twoSum(vector<int>& nums, int target) {
        
   		vector<int> answer;
		unordered_map<int,int> s1;
       
        for(int i=0;i<nums.size();i++)
        {
            int need=target-nums[i];
            
            if(s1.find(need)!=s1.end())
            {
                auto itr=s1.find(need);
                answer.push_back(itr->second);
                answer.push_back(i);
                return answer;
            }
            else
            {
                s1.insert({nums[i],i});
            }
        }
            
			return answer;
};
};