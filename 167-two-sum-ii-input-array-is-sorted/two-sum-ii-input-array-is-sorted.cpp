class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int numLength = numbers.size();
        vector<int> result;

        if(numLength == 2){
            result.push_back(1);
            result.push_back(2);
            return result;
        }

        int left = 0;
        int right = numLength - 1;

        while(left < right){
            int sum = numbers[left] + numbers[right];

            if(sum == target){
                result.push_back(left + 1);
                result.push_back(right + 1);
                break;
            } else if(sum > target){
                right--;
            } else {
                left ++;
            }
        };
        return result;
    };
};