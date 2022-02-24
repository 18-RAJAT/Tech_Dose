class Solution{
    public:
    
    int findUnsortedSubarray(vector<int>&nums){
        vector<int>sorted(nums);
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        int i=0,j=n-1;
        
        while(i<n and nums[i] == sorted[i])
        {
            i++;
        }
        
        while(j>i and nums[j] == sorted[j])
        {
            j--;
        }
        
        return j + 1 - i;
    }
};