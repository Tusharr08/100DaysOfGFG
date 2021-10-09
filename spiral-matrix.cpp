#include<bits/stdc++.h>
using namespace std;


class Solution{

	public:
	int findK(vector<vector<int>> &a, int m, int n, int k)
    {
        // Your code goes 
        
        if(k>n*m) return -1;
        if(k==n*m) return a[n-1][m-1];
        int row = 0,col = 0,cnt=0;

        while(row!=n && col!=m){
                for(int i=col;i<m;i++){
                cnt++;
                // cout<<a[row][i]<<" ";;
                if(cnt==k) return a[row][i];
            } 
                for(int i=row+1;i<n;i++){
                    cnt++;
                    // cout<<a[i][m-1]<<" ";
                    if(cnt==k) return a[i][m-1];
                }
                for(int i=m-2;i>=col;i--){
                cnt++;
                // cout<<a[n-1][i]<<" ";
                if(cnt==k) return a[n-1][i];
            }
                for(int i=n-2;i>row;i--){
                    cnt++;
                    // cout<<a[i][col]<<" ";
                    if(cnt==k) return a[i][col];
                }
            row++;
            col++;
            m--;
            n--;
        }
        return a[m-1][n-1];
    }
};
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}  // } Driver C