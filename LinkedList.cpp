// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void insert_Node();
void delete_Node();
void traverse_Node();
struct node *  find_Node();
void update_Node();
void sort_LinkedList();
struct node
{
	int data;
	struct node *next;
	
};
struct node *head=0, *temp=0, *newNode;
int main()
{
	int choice =0;

	while(1)
	{
		//clrscr(); 
		cout<<"Select\n 1.insert_Node\n 2.delete_Node\n 3.traverse_Node\n 4.find_Node\n 5.update_Node\n 6. sort_LinkedList\n ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				insert_Node();
			break;
			case 2:
				delete_Node();
			break;
			case 3:
				traverse_Node();
			break;
			case 4:
				struct node *Nodesearch ;
				Nodesearch =  find_Node();
				if(Nodesearch != 0)
				{
					cout<<"found node"<<Nodesearch->data<<endl;
				}
			break;
			case 5:
				update_Node();
			break;
			case 6:
				sort_LinkedList();
			break;
			deafult:
			break;
		}
	}
	return 0;
}
void insert_Node()
{
	bool insertNode = true;
	int nodelocation;
	while(insertNode == true)
	{	
		newNode = (struct node *)malloc(sizeof(struct node));
		cout<<"1. Insert Node at begining\n 2. Insert node at end\n 3. Insert node after a given location"<<endl;
		cin>>nodelocation;

		if(nodelocation == 2)
		{
			cout<<"input data"<<endl;
			cin>>newNode->data;
			newNode->next = 0;
			if(head ==0)
			{
				head = temp = newNode;
			}
			else
			{
				temp->next = newNode;
				temp = newNode;
			}
		}
		else if(nodelocation == 1)
		{
			cout<<"input data"<<endl;
			cin>>newNode->data;
			newNode->next = 0;
			if(head ==0)
			{
				head = temp = newNode;
			}
			else
			{
				newNode->next = head;
				head = newNode;
			}
		}
		else if(nodelocation == 3)
		{

								
			cout<<"input data"<<endl;
			cin>>newNode->data;
			newNode->next = 0;
			
			//traverse the list to find the data
			struct node *Nodesearch;
			Nodesearch = find_Node();
			
			if(Nodesearch !=0)
			{
				newNode->next = Nodesearch->next;
				Nodesearch->next = newNode;
			}
			else
			{
				cout<<"Error_Node not found";
			}				
		}
			
			
		cout<<"insert one more node\n 1.Yes\n 0. No\n";
		cin>>insertNode;
	}
}
void delete_Node()
{
	struct node *prev, *traverse = head;
	int value;
	cout<<"input node value to be found"<<endl;
	cin>>value;
	
	while(traverse !=0)
	{
		if(traverse->data == value)
		{
			break;
		}
		prev = traverse;
		traverse = traverse->next;
	}
	prev->next = traverse->next;
	traverse->next = 0;
	
}
void traverse_Node()
{
	struct node *traverse = head;
	while(traverse !=0)
	{
		cout<<traverse->data<<endl;
		traverse = traverse->next; 
	}
}
struct node * find_Node()
{
	struct node *ret, *traverse = head;
	
	int value;
	cout<<"input node value to be found"<<endl;
	cin>>value;
	while(traverse !=0)
	{
		if(traverse->data == value)
		{
			break;
		}
		traverse = traverse->next;
	}
	return traverse;
}
void update_Node()
{
	struct node *traverse = head;
	
	int value;
	cout<<"input node value to be found"<<endl;
	cin>>value;
	while(traverse !=0)
	{
		if(traverse->data == value)
		{
			break;
		}
		traverse = traverse->next;
	}
	traverse->data = value;
	return traverse;
}
void sort_LinkedList()
{
	struct node *index1 = 0, *index2;
	int size = 0;
	struct node *traverse = head;
	while(traverse != 0)
	{
		size++;
		traverse = traverse->next;
	}
	cout<<"size = "<<size<<endl;
	
	for(int i = 0 ; i < size; i++)
	{
		if(index1 == 0)
		{
			index1 = head;
		}
		else
		{
			index1 = index1->next;
		}
		for(int j = i + 1 ; j < size; j++)
		{
			index2 = index1->next;
			if(index1->data > index2->data)
			{
				int swapdata = index1->data ;
				index1->data  = index2->data;
				index2->data = swapdata;
			}
		}
	}
	
	
}