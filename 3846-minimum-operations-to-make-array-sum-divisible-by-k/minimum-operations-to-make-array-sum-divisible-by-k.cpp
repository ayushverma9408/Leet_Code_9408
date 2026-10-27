class Solution {
public:
    int minOperations(vector<int>& a, int k) {
        int sum=accumulate(a.begin(),a.end(),0);
        return sum%k;
    }
};