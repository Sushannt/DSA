class Solution {
public:
    int mySqrt(int x) {
        if(x < 2)  return x;

      int left = 1, right = x / 2, result;

      while(left <= right){
        long long mid = (left + right) / 2;
        long long mid_squared = mid * mid;
        if(mid_squared <= x){
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
      }
      return result;
}
};