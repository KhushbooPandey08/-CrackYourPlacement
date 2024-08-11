//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPossible(int k, vector<int> &arr1, vector<int> &arr2) {
        // Your code goes here
         sort(arr1.begin(), arr1.end());
         sort(arr2.begin(), arr2.end());
         reverse(arr2.begin(), arr2.end());
         int n=arr1.size();
          int count=0;
         
         for(int i=0;i<n;i++)
         {
             if(arr1[i]+arr2[i] >=k)
             {
                  count++;
             }
         }
          if(count==n)
          {
              return true;
          }
          else
          {
              return false;
          }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr1, arr2;
        int num;
        while (ss >> num) {
            arr1.push_back(num);
        }
        getline(cin, s);
        ss.clear();
        ss.str(s);
        while (ss >> num) {
            arr2.push_back(num);
        }
        Solution ob;
        bool ans = ob.isPossible(k, arr1, arr2);
        if (ans) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}
// } Driver Code Ends