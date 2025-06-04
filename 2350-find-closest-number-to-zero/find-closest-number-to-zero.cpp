class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];

        int num_closest_to_zero = nums[0];
        for(int num: nums){
            if(abs(num) < abs(num_closest_to_zero)){
                num_closest_to_zero = num;
            } else if(abs(num) == abs(num_closest_to_zero)){
                num_closest_to_zero = max(num, num_closest_to_zero);
            }
        }
        return num_closest_to_zero;
}
};