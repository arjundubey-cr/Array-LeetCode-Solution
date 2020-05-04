class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxNo = 0;
        int counter = 0;

        for (auto i : nums) {
            if (i) 
                ++counter;
            else {
                maxNo = max(maxNo,counter);
                counter = 0;
            }
        }

        return max(maxNo,counter); 
    }
};
