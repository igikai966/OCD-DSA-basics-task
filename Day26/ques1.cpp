//Question 1-  Doubly linked list Insertion at given position
//link-https://bit.ly/3QD4hHs
//code-
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* a Node of the doubly linked list */
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;

    Node(int x) {
        data = x;
        next = prev = NULL;
    }
};


// } Driver Code Ends

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        pos=pos+1;
        if(pos==0){
        //linked List exist hi na kre
        if(head ==NULL)head =new Node(data);
        //linked list already exists
        Node *temp=new Node(data);
        head->prev=temp;
        head =temp;
    }
    else
    {
        Node *curr=head;
        //Go to the node,after which I have to insert
        while(--pos)
        {
            curr =curr->next;
        }

        //Insert at end
        if(curr->next==NULL){
            Node *temp= new Node(data);
            temp->prev=curr;
            curr->next=temp;
        }
        
        //Insert at middle
        Node *temp=new Node(data);
        temp->next=curr->next;
        temp->prev=curr;
        curr->next=temp;
        temp->next->prev=temp;
    }
    return head;
    
    }
};


//{ Driver Code Starts.

Node *insert(Node *head, int x) {
    if (head == NULL) {
        return new Node(x);
    }
    Node *n = new Node(x);

    head->next = n;
    n->prev = head;
    head = n;
    return head;
}

void printList(Node *head) {
    // The purpose of below two loops is
    // to test the created DLL
    Node *temp = head;
    if (temp != NULL) {
        int ct1 = 0, ct2 = 0;
        while (temp->next != NULL)
            temp = temp->next, ct1++;
        while (temp->prev != NULL)
            temp = temp->prev, ct2++;
        if (ct1 != ct2) {
            cout << -1 << "\n";
            return;
        }
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    int t;
    cin >> t;
    cin.ignore(); // Ignore newline after reading T to use getline properly

    while (t--) {
        Node *head = NULL;
        Node *root = NULL;
        vector<int> arr;
        string input;
        getline(cin, input);    // Read the entire line as input
        stringstream ss(input); // Use stringstream to split the input into integers
        int number;
        while (ss >> number) {
            arr.push_back(number); // Add each number to the vector
        }
        if (arr.empty()) {
            return NULL; // Return NULL if the vector is empty
        }
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int x = arr[i];
            head = insert(head, x);
            if (root == NULL)
                root = head;
        }
        head = root;
        int pos, data;
        cin >> pos >> data;
        cin.ignore();
        Solution ob;
        head = ob.addNode(head, pos, data);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
