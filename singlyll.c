#include<stdio.h>

#include<stdlib.h>

#include<malloc.h>

struct node

{

int data;

struct node*next;

};

struct node*head=NULL;

void insertfirst()

{

struct node*newnode;

newnode=(struct node*)malloc(sizeof(struct node*)); if(newnode==NULL)

printf("\n no space");

else

{

printf("\n enter the element to be inserted :"); scanf("%d",&newnode->data);

 
19
DATE:



newnode->next=NULL;

if(head==NULL)

head=newnode;

else

{

newnode->next=head;

head=newnode;

}

printf("\n %d inserted into the list",newnode->data);

}

}

void insertlast()

{

struct node*temp,*newnode;

newnode=(struct node*)malloc(sizeof(struct node*));

newnode->next=NULL;

temp=head;

if(newnode==NULL)

printf("\n no space");

else

{

while(temp->next!=NULL)

temp=temp->next;

printf("\n enter the element to be inserted :"); scanf("%d",&newnode->data);

 
20
DATE:



temp->next=newnode;

printf("\n %d inserted into the list",newnode->data);

}

}

void insertlocation()

{

int key;

struct node*temp,*newnode;

newnode=(struct node*)malloc(sizeof(struct node*)); newnode->next=NULL;

printf("\n enter the value of node after new node to be inserted :");

scanf("%d",&key);

temp=head;

while(temp->data!=key)

{

temp=temp->next;

if(temp==NULL)

break;

}

if(temp==NULL)

{

printf("The %d value not exist",key);

return;

}

if(temp->data==key)

 
21
DATE:



{

if(newnode==NULL)

printf("\n no space");

else

{

printf("\n enter the element to be inserted :"); scanf("%d",&newnode->data); newnode->next=temp->next; temp->next=newnode;


printf("\n %d inserted after %d",newnode->data,key);

}

}

}

void deletefirst()

{

struct node*temp;

temp=head;

head=temp->next;

printf("%d deleted",temp->data);

free(temp);

}



void deletelast()

{

struct node*temp,*p;

 
22
DATE:



temp=head;

while(temp->next!=NULL)

{

p=temp;

temp=temp->next;

}

printf("%d deleted",temp->data);

free(temp);

p->next=NULL;

}

void deletelocation()

{

struct node*temp,*p;

int key;

printf("\n enter the value of node to be deleted :");

scanf("%d",&key);

temp=head;

while(temp->data!=key)

{

p=temp;

temp=temp->next;

if(temp==NULL)

break;

}

if(temp==NULL)

 
23
DATE:



{

printf("The %d value not exist",key);

return;

}

if(temp->data==key)

{

printf("%d deleted",temp->data);

if(temp==head)

{

p=head;

head=temp->next;

free(p);

}

else

{

p->next=temp->next;

free(temp);

}

}

}

void search()

{



struct node*temp;

int key,pos=0;

 
24
DATE:



temp=head;

printf("\n enter the element to be searched :");

scanf("%d",&key);

while(temp->data!=key)

{

temp=temp->next;

pos++;

if(temp==NULL)

break;

}

if(temp==NULL)

{

printf("\n The %d value not exist",key);

return;

}

if(temp->data==key)

{

printf("\n %d value available in location %d",key,pos+1);

}

}

void display()

{

struct node*p;

if(head==NULL)

printf("list is empty");

 
25
DATE:



else

{

printf("\n element in linked list are:");

p=head;

while(p!=NULL)

{

printf("\t%d",p->data);

p=p->next;

}

}

}

void main()

{

int choice;

printf("\n SINGLE LINKED LIST \n ");

do

{

printf("\n\n 1.insert in beggining \n

2.	insert at last\n

3.	insert at any random location \n

4.	delete from beggining \n

5.	delete from last\n

6.	delete node after specified location \n

7.	search for an element \n 8. display \n 9. exit" ); printf("\n enter a choice :");

 
26
DATE:



scanf("%d",&choice);

switch(choice)

{

case 1:insertfirst();

break;

case 2:insertlast();

break;

case 3:insertlocation();

break;

case 4:deletefirst();

break;

case 5:deletelast();

break;

case 6:deletelocation();

break;

case 7:search();

break;

case 8:display();

break;

case 9:exit(0);

printf("exiting the program ");

return;

default:printf("\n invalid option");

}

}

 
27
DATE:



while(choice!=9);

}



