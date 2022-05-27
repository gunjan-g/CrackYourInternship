void segregateEvenOdd(Node **head_ref){
	Node *end = *head_ref;
	Node *prev = NULL;
	Node *curr = *head_ref;
  
	while (end->next != NULL)
		end = end->next;

	Node *new_end = end;

	while (curr->data % 2 != 0 && curr != end)
	{
		new_end->next = curr;
		curr = curr->next;
		new_end->next->next = NULL;
    new_end = new_end->next;
  }
  
	if (curr->data%2 == 0){
		*head_ref = curr;
    
		while (curr != end)
		{
			if ( (curr->data) % 2 == 0 ){
				prev = curr;
				curr = curr->next;
			}
			else{
				prev->next = curr->next;
				curr->next = NULL;
				new_end->next = curr;
				new_end = curr;
				curr = prev->next;
			}
		}
	}

	else prev = curr;
	if (new_end != end && (end->data) % 2 != 0)
	{
		prev->next = end->next;
		end->next = NULL;
		new_end->next = end;
	}
	return;
}
