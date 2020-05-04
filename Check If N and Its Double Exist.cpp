class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
     int arrSize = arr.size();
        for(int i=0;i<arrSize;i++){
            int val = 2*arr[i];
            for(int j=0;j<arrSize;j++){
                if(val==arr[j]&&i!=j){
                    return true;
                }
                    
            }
            
        }
        return false;
    }
};
