#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node* next;
};
class linklist
{
	node* head;
public:
	linklist()
	{
		head = NULL;
	}
	void insert_start(int a)
	{
		node* n = new node;
		n->data = a;
		n->next = NULL;
		if (head == NULL)
		{
			head = n;
		
		}
		else
		{                                 
			n->next = head;
			head = n;
		}
	}
	void insert_end(int a)
	{
		node* n = new node;
		n->data = a;
		n->next = NULL;
		if (head == NULL)
		{
			head = n;

		}
		else
		{
			node* s1;
			s1 = head;
			while (s1->next != NULL)
			{
				s1 = s1->next;
			}
			s1->next = n;
		}

	}
	void search_insert(int a)
	{
		node* n = new node;
		n->data = a;
		n->next = NULL;

	}
	void delete_start()
	{

	}
	void delete_end()
	{

	}
	void search_delete()
	{

	}
	void displaylist()
	{
		node* s1;
	    s1 = head;
		cout<<"head->";
		while (s1 != NULL) {
		
			cout << " " << s1->data << "->";
			s1 = s1->next;
		}
	}
};
int main()
{
	linklist l1;
	//insertion at start
	l1.insert_start(7);
	l1.insert_start(13);
	l1.insert_start(18);
	l1.insert_start(23);
	//insertion at end
	l1.insert_end(5);
	l1.insert_end(3);
	l1.insert_end(1);
	l1.displaylist();

	return 0;
}