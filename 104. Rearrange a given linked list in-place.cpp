// C++ program to rearrange a linked list in-place
void reverselist(Node** head)
{
	// Initialize prev and current pointers
	Node *prev = NULL, *curr = *head, *next;

	while (curr) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
}

void rearrange(Node** head){
    Node *slow = *head, *fast = slow->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* head1 = *head;
    Node* head2 = slow->next;
    slow->next = NULL;
    reverselist(&head2);
    *head = newNode(0);
    Node* curr = *head;
    while (head1 || head2) {
        if (head1) {
            curr->next = head1;
            curr = curr->next;
            head1 = head1->next;
        }
   
        if (head2) {
            curr->next = head2;
            curr = curr->next;
            head2 = head2->next;
        }
    }
    *head = (*head)->next;
}
