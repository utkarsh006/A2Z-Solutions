//Problem Link: https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* temp = new Node(x);
       temp -> next = head;
       return temp;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        Node* temp = new Node(x);
        Node* current = head;
        
        while(!head) return temp;
        
        while(current->next != NULL){
            current = current->next;
        }
        
        current->next = temp;
        return head;
    }
};
