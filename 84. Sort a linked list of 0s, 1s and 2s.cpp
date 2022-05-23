#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
};

void sortList(Node *head)
{
	int count[3] = {0, 0, 0}; // Initialize count of '0', '1' and '2' as 0
	Node *ptr = head;
	while (ptr != NULL)
	{
		count[ptr->data] += 1;
		ptr = ptr->next;
	}

	int i = 0;
	ptr = head;

	while (ptr != NULL)
	{
		if (count[i] == 0)
			++i;
		else
		{
			ptr->data = i;
			--count[i];
			ptr = ptr->next;
		}
	}
}
