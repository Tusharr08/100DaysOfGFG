#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        int counter = 1;
        int length = A.length();
        for (int i = 0; i < (B.length()/length) + 2; i++) {
            if (A.find(B) != std::string::npos) 
                {
                     return counter;
                }
            else {
                A += A.substr(0,length);
                counter++;
            }
        }
        return -1;
    }
  
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}