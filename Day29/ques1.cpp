//Question 1- Find length of loop
//link - https://bit.ly/3dyXL6m
//code -
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void loopHere(Node *head, Node *tail, int position) {
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}


// } Driver Code Ends

/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node *slow=head, *fast=head;
        bool isLoop =false;
        
        //Lopp detection
        while (fast && fast->next){
            slow =slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                isLoop =true;
                break;
            }
        }
        //Counting the length of loop
        //how ? -> once we detected ki loop is present or not our slow and fast pointer aare currently on the same node
        //now , we freeze node and just move fast ptr by 1 steps while counting till we reach slow again
        //this will give us the lenght of loop
        int count= 1;
        fast=fast->next;
        while(slow != fast){
            count++;
            fast=fast->next;
            
        }
        return count;
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
        int k;
        cin >> k;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        loopHere(head, tail, k);

        Solution ob;
        cout << ob.countNodesinLoop(head) << endl;
    }
    return 0;
}

// } Driver Code Ends
