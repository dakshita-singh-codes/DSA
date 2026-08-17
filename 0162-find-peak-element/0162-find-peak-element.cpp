class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<right){
            int mid=(left+right)/2;
            if(left==right){
                break;
            }
            else if(nums[mid]<nums[mid+1]){
                left=mid+1;
            }
            else if(nums[mid]>nums[mid+1]){
                right=mid;
            }
        }
    return left;
    }
};