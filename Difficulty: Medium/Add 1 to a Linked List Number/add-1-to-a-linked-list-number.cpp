//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
          Node*prev = nullptr;
        Node*curr = head;
        while(curr){
            Node*t = curr->next;
            curr->next = prev;
            prev = curr;
            curr = t;
        }
        
        curr = prev;
        prev = nullptr;
        int carry = 0;
        bool f = true;
        while(curr){
            if(f){
                int sum = curr->data + 1 + carry;
                curr->data = sum%10;
                carry = sum/10;
                f = false;
            }
            else{
                int sum = curr->data + carry;
                curr->data = sum%10;
                carry = sum/10;
            }
            Node*x = curr->next;
            curr->next = prev;
            prev = curr;
            curr = x;
        }
        
        if(carry > 0){
            Node*n = new Node(carry);
            n->next = prev;
            return n;
        }
        else{
            return prev;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends