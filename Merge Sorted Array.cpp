class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
          
        int l=0;
        int r=0; 
        vector<int>result;
        while(l<m && r<n)
        {
            if(nums1[l]<=nums2[r])
            {
                result.push_back(nums1[l]);
                l++;
            }
            else if(nums2[r]<=nums1[l])
            {
                result.push_back(nums2[r]);
                r++;
            }
        }
        
        while(l<m)
        {
            result.push_back(nums1[l]);
            l++;
        }
        
        while(r<n)
        {
            result.push_back(nums2[r]);
            r++;
        }
        nums1 = result;
    }
};
