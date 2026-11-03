class Solution {
public:
    int minMoves(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=0; i<n-1;i++){
            sum+=(a[n-1]-a[i]);
        }
        return sum;
    }
};