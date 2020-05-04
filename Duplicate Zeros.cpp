class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int ct = 0; // Count of existing 0s
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                ct ++;
            }
        }
        int i = n-1;
        for (; i>=0; i--) {
            if (arr[i] == 0) {
                if (i+ct < n) arr[i+ct] = 0;
                if (i+ct-1 < n) arr[i+ct-1] = 0;
                ct --;
            }
            else {
                if (i + ct < n) arr[i+ct] = arr[i];
            }
        }
        
    }
};
