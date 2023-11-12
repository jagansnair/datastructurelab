#include<stdio.h>

#include<stdlib.h>

#include<malloc.h>

void push();

void pop();

void display();

struct node

{

int val;

struct node*next;

};

struct node*head;

void main()

{

int choice=0;

printf("\n stack operations using linked list");

while(choice!=4)

{

printf("\n 1.push\n2.pop\n3.display\n4.exit"); printf("\n enter the choice:");

scanf("%d",&choice);

switch(choice)

{

case 1:

{

push();

break;

}

case 2:

{

pop();

break;

}

case 3:

{

display();

break;

}

case 4:

{

printf("exiting...");

break;

}

default:

{

printf("\n valid choice");

}

};

}

}

void push()

{

int val;

struct node*newnode=(struct node*)malloc(sizeof(struct node));

if(newnode==NULL)

{

printf("not able to push the element");

}

else

{

printf("\n enter the value :");

scanf("%d",&val);

if(head==NULL)

{

newnode->val=val;

newnode->next=NULL;

head=newnode;

}

else

{
newnode->val=val;

newnode->next=NULL;

head=newnode;

}

printf("item pushed");

}

}

void pop()

{

int item;

struct node*newnode;

if(head==NULL)

{

printf("underflow");

}

else

{

item=head->val;

newnode=head;

head=head->next;

free(newnode);

printf("item popped");

}

}

void display()

{

int i;

struct node*newnode;

newnode=head;

if(newnode==NULL)

{

printf("stack is empty \n");

}

else

{

printf("printing stack elements");

while(newnode!=NULL)

{

printf("%d\n",newnode->val);

newnode=newnode->next;

}

}

}




