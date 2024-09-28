class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int minimum = nums[0];
        while(low <= high){
            int mid = (low + high)/2;
            if (nums[low] <= nums[high]){
                minimum = min(minimum,nums[low]);
                break;
            }
            if (nums[low] <= nums[mid]){
                minimum = min(minimum,nums[low]);
                low = mid + 1;
            }
            else{
                minimum = min(minimum,nums[mid]);
                high = mid - 1;
            }
        }
        return minimum;
    }
};