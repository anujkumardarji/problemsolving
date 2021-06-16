class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int count = 0;
 
    std::unordered_map<int, int> freq;
 
    for (int const &i: nums) {
        freq[i]++;
        count++;
    }
    
      
    for (auto& it : nums) {
  
        if(freq[it] > count/2)
        {
            return it;
        }
    }
    return false;    
        
    }
};

----------------------
Note : 
#include <iostream>
#include <vector>
#include <unordered_map>
 
int main()
{
    std::vector<int> v = { 7, 2, 2, 4, 3, 2, 6 };
    int val = 2;
 
    std::unordered_map<int, int> freq;
 
    for (int const &i: v) {
        freq[i]++;
    }
 
    std::cout << "Element " << val << " occurs " << freq[val] << " times";
 
    return 0;
}

output Element 2 occures 3 times 

---------------------

resources : 
https://www.geeksforgeeks.org/how-to-iterate-through-a-vector-without-using-iterators-in-c/
https://leetcode.com/problems/majority-element/