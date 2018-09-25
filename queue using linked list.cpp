#include<bits/stdc++.h>
using namespace std;
class que
{
	public:
		struct node
		{
			int info;
			node *next;
		//	node ;
			
		}*front,*rear;
		que()
		{
			rear=NULL;
			front=NULL;
			
		}
		void insert(int data)
		{
			node *n=new node;
			n->info=data;
			n->next=NULL;
			if(rear==NULL)
			{
				front=n;
				rear=n;
				
			}
			else
			{
				rear->next=n;
				rear=n;
			}
		}
		int remove()
		{
			if(front==NULL)
			{
				cout<<"no element in the list";
				return 0;
			}
			if(front==rear)
			{
				int temp;
				temp=front->info;
				delete front;
				return temp;
			}
			node * r;
			r=front;
			front=front->next;
			int temp;
			temp=r->info;
			delete r;
			return temp;
		}
		void display()
		{
			if(front==NULL)
			{
				cout<<"list is empty";
			}
			else
			{
				node *t;
				t=front;
				while(t!=NULL)
				{
					cout<<" "<<t->info;
					t=t->next;
				}
			}
		}
				
};
main()
{
	que q;
	int data=5;
	q.insert(data);
	q.insert(7);
	q.insert(6);
	cout<<"the deleted element is"<<q.remove()<<endl;
      cout<<"new queue is";
      q.display();
	
}

