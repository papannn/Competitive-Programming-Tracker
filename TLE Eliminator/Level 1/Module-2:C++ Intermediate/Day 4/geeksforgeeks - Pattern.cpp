//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
// https://www.geeksforgeeks.org/problems/pattern/1
// } Driver Code Ends

class Solution {
  public:
    void printDiamond(int n) {
        for (int i = 1 ; i <= n; i++) {
            if (i != n) {
                for (int j = 1; j <= n - i; j++) {
                    cout << " ";
                }
            }
            
            for (int j = 0; j < i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
        
        for (int i = n ; i >= 1; i--) {
            if (i != n) {
                for (int j = 1; j <= n - i; j++) {
                    cout << " ";
                }
            }
            
            for (int j = 0; j < i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends