class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int maxsize=nums.size();
        int even=0;
        for(int i=0;i<maxsize;i++){
            int count=0;
            int num = nums[i];
            while(num>0)
            {
                num=num/10;
                count++;
            }
            if(count%2==0)
            {
                even++;
            }
    }
    return even;
    }
};
