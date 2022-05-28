Node* merge(Node* a, Node* b){
	if (a == NULL)
		return b;
	if (b == NULL)
		return a;

	Node* result;

	if (a->data < b->data){
		result = a;
		result->down = merge(a->down, b);
	}

	else{
		result = b;
		result->down = merge(a, b->down);
	}
	result->right = NULL;
	return result;
}

Node* flatten(Node* root){
	
	if (root == NULL || root->right == NULL)
		return root;

	root->right = flatten(root->right);
	root = merge(root, root->right);
	return root;
}


