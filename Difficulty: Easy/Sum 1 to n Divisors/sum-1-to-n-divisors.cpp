//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int sumOfDivisors(int n) {
        int func[n+1]={0};
        int sum=0;
        // Write Your Code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    func[i]=func[i]+j;
                    
                }
                
            }
        }
        
        for(int i=1;i<=n;i++){
            sum=sum+func[i];
            
        }
        return sum;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends