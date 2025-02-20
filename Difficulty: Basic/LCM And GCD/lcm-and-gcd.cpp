//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        
        //find gcd using a simple loop
        
        int gcd=1;
        
        for(int i=1;i<=min(a,b);i++){
            
            if(a%i==0 && b%i==0){
                gcd=i;
            }
        }
        
        //find lcm using formula:
        
        int lcm = (a*b) / gcd;
        
        // Return the result as a vector!
        
        return{lcm,gcd};
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends