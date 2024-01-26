// Problem Link : https://www.geeksforgeeks.org/problems/introduction-to-linked-list/1
// TC : O(N), SC: O(N)
// Solution Video : 

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        int n = arr.size();
        Node* temp = new Node();
        Node* head = temp;
        
        for(int i=0; i<n; i++){
            temp -> data = arr[i];
            if(i<n-1){
                temp -> next = new Node();
                temp = temp->next;
            }
        }
        
        return head;
    }
};
