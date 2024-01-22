class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int pre = -101;
        int i = 0;
        for(const int num : nums){
            if(num != pre){
                pre = num;
                nums[i++] = num;
            }
        }

        return i;
    }
};