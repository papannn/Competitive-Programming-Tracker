//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 
// https://www.geeksforgeeks.org/problems/pattern-printing1347/1
// } Driver Code Ends

//User function Template for C++
class Solution
{
public:
    void printPattern(int N)
    {
        for (int i = 0 ; i < N; i++) {
            for (int j = 0 ; j <= i; j++) {
                cout << "*";
            }
            cout << " ";
        }
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.printPattern(N);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends