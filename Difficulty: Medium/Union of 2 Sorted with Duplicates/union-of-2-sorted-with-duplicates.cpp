//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        // return vector with correct order of elements
        int n=arr1.size();
        int m=arr2.size();
        int i=0,j=0;
        vector<int> unionArr;
        
        while(i<n && j<m){
            if(i>0 && arr1[i]==arr1[i-1]){
                i++;
                continue;
            }
            if(j>0 && arr2[j]==arr2[j-1]){
                j++;
                continue;
            }
            if(arr1[i]<arr2[j])
            {
                unionArr.push_back(arr1[i]);
                i++;
            }
            else if (arr1[i]>arr2[j])
            {
                unionArr.push_back(arr2[j]);
                j++;
            }
            else
            {
                unionArr.push_back(arr1[i]);
                i++;
                j++;
            }
        }
            while(i<n){
                if(i==0 || arr1[i]!=arr1[i-1]){
                    unionArr.push_back(arr1[i]);
            }
            i++;
            }
            while(j<m){
                if(j==0 || arr2[j]!=arr2[j-1]){
                    unionArr.push_back(arr2[j]);
            }
            j++;
            }
        
        return unionArr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends