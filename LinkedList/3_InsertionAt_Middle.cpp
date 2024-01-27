//Problem Link: https://www.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1

// TC: O(N), SC:O(1)

Node* insertInMiddle(Node* head, int x)
{
	Node* slow = head, *fast = head->next;
	while(fast != NULL && fast->next != NULL){
	    slow = slow->next;
	    fast = fast->next->next;
	}
	
	Node* temp = new Node(x);

	temp->next = slow->next;
	slow->next = temp;
    
	return head;
}