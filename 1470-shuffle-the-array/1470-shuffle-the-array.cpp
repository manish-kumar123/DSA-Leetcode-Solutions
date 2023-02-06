class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
    for(int i=0;i<n;i++){
        nums[i] = nums[i]<<10; // Left shifting xi by 10 bits 
        nums[i] = nums[i] | nums[i+n]; //Adding yi to xi 
    }
    int j = 2*n-1;
    for(int i = n-1;i>-1;i--,j = j-2)
    {
        int x = nums[i] >> 10; // Extracting xi by Right shifting 10 bits 
        int y = nums[i] & ((1024) -1); // Extracting yi by & on LSB 10 bits 
        nums[j] = y;
        nums[j-1] = x;
      
    }
    return nums;
    }
};
