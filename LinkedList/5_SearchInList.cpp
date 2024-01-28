//Problem Link: https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1

class Solution {
  public:
  
    bool searchKey(int n, struct Node* head, int key) {
        
       if(head == NULL) return false;  
       
       Node* temp = head;

       while(temp != NULL){
         if(temp->data == key) return true;
         temp = temp->next;
       }

      return false;
    }
};