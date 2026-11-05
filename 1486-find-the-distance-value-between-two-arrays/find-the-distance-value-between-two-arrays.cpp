class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size(); int m=arr2.size(); 
        int cnt=0;
        for (int i=0; i<n; i++){
            int c2=0;
            for(int j=0; j<m; j++){
                int dis=abs(arr1[i]-arr2[j]);
                if(d>=dis) c2++;
            }
            if(c2==0) cnt++;
        }
        return cnt;
    }
};