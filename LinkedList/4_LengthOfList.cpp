//Problem Link: https://www.codingninjas.com/studio/problems/count-nodes-of-linked-list_5884

int length(Node *head)
{
	Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }

    return cnt;
}