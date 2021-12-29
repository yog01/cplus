/*
 * detectloop.cpp
 *
 *  Created on: Dec 29, 2021
 *      Author: ubuntu
 */
#include<iostream>

using namespace std;

struct node{
	int data;
	struct node *next;
};
void remove(struct node *head,struct node *loopnode);
int detectloop(struct node *head)
{
	struct node *sl_ptr=head;
	struct node *ft_ptr=head;

	while(sl_ptr && ft_ptr && ft_ptr->next)
	{
		sl_ptr=sl_ptr->next;
		ft_ptr=ft_ptr->next->next;

		if(sl_ptr==ft_ptr)
		{
			remove(head,sl_ptr);
			return 1;
		}
	}
	return 0;
}

void remove(struct node *head,struct node *loopnode)
{
	struct node *ptr1=loopnode;
	struct node *ptr2=loopnode;

	unsigned int k=1;

	//count node
	while(ptr1->next!=ptr2)
	{
		ptr1=ptr1->next;
		k++;
	}

	ptr1=head;

	ptr2=head;

	//send to last
	for(int i=0;i<k;i++)
	{
		ptr2=ptr2->next;
	}

	//move same pace to get at sarting
	while(ptr1!=ptr2)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}

	//get to last node

	while(ptr2->next!=ptr1)
	{
		ptr2=ptr2->next;
	}

	ptr2->next=NULL;

}

struct node *newnode(int key)
{
		struct node* temp = new node();
		temp->data=key;
		temp->next=NULL;
		return temp;
}

void print(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		cout<<"\n";
		temp=temp->next;
	}
}

int main()
{
	struct node* head = newnode(5);
	head->next = newnode(70);
	head->next->next = newnode(43);
	head->next->next->next = newnode(40);
	head->next->next->next->next = newnode(100);


	head->next->next->next->next->next = head->next->next;
	detectloop(head);
	print(head);

	return 0;
}
