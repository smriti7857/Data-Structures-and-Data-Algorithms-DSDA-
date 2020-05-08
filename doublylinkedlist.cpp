#include<iostream>

using namespace std;

class Node{
	public:
		int key;
		int data;
		Node* next;
		Node *previous;
		Node()
		{
			key=0;
			data=0;
			next=NULL;
			previous=NULL;
		}
		Node(int k,int d)
		{
			key=k;
			data=d;
		}
		
};

class DoublyLinkedList{
	public:
		Node* head;
		 
		 DoublyLinkedList()
		 {
		 	head=NULL;
		 }
		 DoublyLinkedList(Node* n)
		 {
		 	head=n;	
		 }
		 Node* checkIfNodeExists(int k)
		 {
		 	Node* temp=NULL;
		 	Node* ptr=head;
		 	while(ptr!=NULL){
		 		if(ptr->key==k)
		 		{
		 			temp=ptr;
				 }
				 ptr=ptr->next;
			 }
			 return temp;
		 }
		 
		 void appendNode(Node* n)
		 {

		 	if(checkIfNodeExists(n->key)!=NULL)
		 	{
		 		cout<<"Already existing node"<<n->key<<"Enter other node";
		 		
			 }
			 else
			 {
			 	if(head==NULL)
			 	{
			 		head=n;
			 		cout<<"Node appended as head node"<<endl;
				 }
				 else
				 {
				 	
				 	Node* ptr=head;
				 	while(ptr->next!=NULL)
				 	{
				 		ptr=ptr->next;
					 }
					 ptr->next=n;
					 n->previous=ptr;
					 cout<<"Node appended"<<endl;
				 }
			 }
		 }
		 
		 void prependNode(Node* n)
		 {
		 	if(checkIfNodeExists(n->key)!=NULL)
		 	{
		 		cout<<"Already existing node"<<n->key<<"Enter other node";
		 		
			 }
			 else
			 {
			 	if(head==NULL)
					{
				 		head=n;
				 		cout<<"Node pretended as head node"<<endl;
					}
				else
				{
					head->previous=n;
			 		n->next=head;
			 		head=n;
			 		cout<<"Node prepended"<<endl;
				}	 
			 
			 }
		 	
		 }
		 
		 void InsertNodeAfter(int k,Node* n)
		 {
		 	Node* ptr = checkIfNodeExists(k);
			 if(ptr==NULL)
			 {
			 	cout<<"No node exists with key"<<k<<endl;
			  } 
			  
			  else
			  {
			  	if(checkIfNodeExists(n->key)!=NULL)
			  	{
			  		cout<<"Node already exists with key"<<n->key<<"Enter another node to insert"<<endl;
			  		
				  }
				  else
				  {
				  	Node* nextNode=ptr->next;
				  	if(nextNode==NULL)
				  	{
				  		ptr->next=n;
				  		n->previous=ptr;
				  		cout<<"Node Inserted at end"<<endl;
					  }
					  
					  else
					  {
					  	n->next=nextNode;
					  	
					  	nextNode->previous=n;
					  	n->previous=ptr;
					  	ptr->next=n;
					  	cout<<"Node Inserted in between"<<endl;
					  }
				  }
			  }
		 }
		 
		 void deleteNodeByKey(int k)
		 {
		 	Node* ptr = checkIfNodeExists(k);
			 if(ptr==NULL)
			 {
			 	cout<<"No node exists with key"<<k<<endl;
			  } 
			  else
			  {
			  	if(head->key==k)
			  	{
			  		head=head->next;
			  		cout<<"Node unlinked iwth key value"<<k<<endl;
				  }
				  else
				  {
				  	Node* nextNode=ptr->next;
				  	Node* prevNode=ptr->previous;
				  	if(nextNode=NULL)
				  	{
				  		prevNode->next=NULL;
				  		cout<<"Node deleted at the end"<<endl;
					  }
					  else
					  {
					  	prevNode->next=nextNode;
					  	nextNode->previous=prevNode;
					  	cout<<"Node has been deleted between node"<<endl;
					  	
					  }
				  }
			  }
			  
		 }
		 
		 void updateNodeByKey(int k,int d)
		 {
		 	Node* ptr=checkIfNodeExists(k);
		 	if(ptr==NULL)
		 	{
		 		cout<<"Node doesnot exist"<<endl;
			 }
			 else
			 {
			 	ptr->data=d;
			 	cout<<"Node data updated successfully";
			 }
		 }
		 
		 void printList()
		 {
		 	if(head==NULL)
		 	{
		 		cout<<"No nodes exist in Doubly LInked List";
			 }
			 else
			 {
			 	Node* temp=head;
			 	cout<<"Doubly Linked List values";
			 	while(temp!=NULL)
			 	{
			 		cout<<"("<<temp->key<<","<<temp->data<<")";
			 		temp=temp->next;
				 }
			 }
		 }
};

int main()
{
	DoublyLinkedList obj;
	int option;
	int key1,k1,data1;
	do
	{
		cout<<"\n What operation do you want to perform? Select Option number. Enter 0 to exit"<<endl;
		cout<<"1. appendNode()"<<endl;
		cout<<"2. prependNode()"<<endl;
		cout<<"3. insertNodeAfter()"<<endl;
		cout<<"4. deleteNodeByKey()"<<endl;
		cout<<"5. updateNodeByKey()"<<endl;
		cout<<"6. print()"<<endl;
		cout<<"7. ClearScreen"<<endl<<endl;
		
		cin>>option;
		Node* n1=new Node();
		
		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"Append opeartion\n Enter key and data of Node to be Appended"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				obj.appendNode(n1);
				break;
			case 2:
				cout<<"Prepend operation\n Enter key and data to be prepended"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				obj.prependNode(n1);
				break;
			case 3:
				cout<<"Insert Node operation\n Enter key and data to be inserted and the key after which you want to insert the node"<<endl;
				cin>>key1;
				cin>>data1;
				cin>>k1;
				n1->key=key1;
				n1->data=data1;
				obj.InsertNodeAfter(k1,n1);
				break;
			case 4:
				cout<<"Delete Node operation\n Enter key to be deleted"<<endl;
				cin>>key1;
				obj.deleteNodeByKey(key1);
				break;
			case 5:
				cout<<"Update Node operation\n Enter key and data to be Updated"<<endl;
				cin>>key1;
				cin>>data1;
				obj.updateNodeByKey(k1,data1);
				break;
			case 6:
				cout<<"Print List operation"<<endl;
				obj.printList();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"Enter Proper Option";
				
		}		
	}while(option!=0);
	
	return 0;
}
