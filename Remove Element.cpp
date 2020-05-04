class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int maxSize = nums.size();
    for (int j = 0; j < maxSize; j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
    }
};
