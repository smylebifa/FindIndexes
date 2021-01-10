class Solution {
  
  public:
    // Function twoSum getting 2 params - vector of numbers and target number.
    // And return indexes of the vector, elements of which in summing up 
    // will give us targer number...
    vector<int> twoSum(vector<int>& nums, int target) {
      
      // Output indexes is a vector of 2 elements, which we eant to get finally.
      // Clean nums we need for getting only suitable to restrictons elements...
      vector<int> output_indexes;
      vector<int> nums_clean;
      
      // Checking if limit is not suit to restricts. 
      // If it's so, return empty vector without indexes...
      if ((nums.size() < 2) || (nums.size() > 1000) || 
          (target < -1000000000) || (nums.size() > 1000000000)) return output_indexes;
      
      else {
      
        // Getting nums_clean by sorting and adding into it suitable elements of vector...
        for (int i = 0; i < nums.size(); i++) {
          if ((nums[i] < -1000000000) || (nums[i] > 1000000000)) continue;
          
          else nums_clean.push_back(nums[i]);        
        }
        
        // Checking and return indexes if their vector's elements in summing 
        // give us the target number... 
        for (int i = 0; i < nums_clean.size(); i++) {        
          
          for (int j = 0; j < nums_clean.size(); j++) {
            
            if (j != i) {              
              
              if (nums_clean[i] + nums_clean[j] == target) {
                
                output_indexes.push_back(i);
                output_indexes.push_back(j);
                
                return output_indexes;
              }
              
            }
            
          }
          
        }
        
      return output_indexes;  
      }        
             
    }
};