class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        long long int maxsize = A.size();
        vector<int>squares;
        for (long long int i=0;i<maxsize;i++)
        {
            int x=A[i]*A[i];
            squares.push_back(x);
        }
        sort(squares.begin(), squares.end());
        return squares;
    }
};
