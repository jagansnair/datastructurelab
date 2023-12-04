#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *prev;
	struct node *next;
	int data;
};

struct node *new=NULL,*ptr=NULL,*head=NULL, *nextptr=NULL, *prevptr=NULL,*last=NULL;

void insertion_beginning();
void insertion_last();
void delete_beginning();
void delete_last();
void insert_after_key();
void delete();
void display();
void reverse_display();
void create_node();

void main() {
	int opt;
	do {
		printf("1.Insertion beginning \n2.Insertion last \n3.Delete Beginning \n4.Delete last \n5.Insert after key \n6.Delete \n7.Display \n8.Reverse Display \n9.Exit : ");
		printf("\nChoose the operation number :");
		scanf("%d",&opt);
		switch(opt) {
			case 1: insertion_beginning();
							break;
			case 2: insertion_last();
							break;
			case 3: delete_beginning();
							break;
			case 4: delete_last();
							break;
			case 5: insert_after_key();
							break;
			case 6: delete();
							break;
			case 7: display();  
							break;
			case 8: reverse_display();  
							break;				
			case 9:
			default:break;
		}
	} while(opt!=0);
}

void create_node() {
	new = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data to be inserted : ");
	scanf("%d",&new->data);
	new->next = NULL;
	new->prev = NULL;
}

void insertion_beginning() {
	create_node();
	if(head == NULL){
		head = new;
	} else {
		head->prev=new;
		new->next = head;
		head = new;
	}
}

void insertion_last() {
	create_node();
	if(head == NULL) {
		head = new;
	}
	else {
		ptr=head;
		while(ptr->next!=NULL){
			ptr = ptr->next;
		}
		ptr->next = new;
		new->prev = ptr;
	}
}
void delete_beginning() {
	if(head == NULL){
		printf("Empty List");
	}
	else if(head->next == NULL) {
		head = NULL;
		free(head);
		printf("NODE DELETED");
	}
	else {
		ptr=head;
		head = head->next;
		head->prev = NULL;
		free(ptr);
		printf("NODE DELETED");
	}
}

void delete_last() {
	if(head == NULL) {
		printf("Empty List \n");
	} 
	else if(head->next == NULL) {
		head = NULL;
		free(head);
		printf("\nnode deleted\n");  
	}
	else {
		ptr = head;
		while(ptr->next!=NULL){
			ptr = ptr->next;
		}
		ptr->prev->next = NULL;
		free(ptr);
		printf("\nnode deleted\n");  
	}
}
void insert_after_key() {
	int key;
	create_node();
	printf("Enter the key where the node to be inserted : ");
	scanf("%d",&key);
	ptr=head;
	while(ptr->data != key && ptr->next != NULL){
		ptr = ptr->next;
	}
	if(ptr->data == key){
		new->next = ptr->next;
		new->prev = ptr;
		ptr->next->prev = new;
		ptr->next = new;
	}
	else {
		printf("The key is not found");
	}
}
void delete() {
	int key;
	printf("Enter the key where the node to be deleted : ");
	scanf("%d",&key);
	if(head->data == key){
		delete_beginning();
	}
	else {
		ptr=head;
		while(ptr->data != key && ptr->next != NULL){
			ptr = ptr->next;
		}
		if(ptr->data != key) {
		  printf("No data found");
		}
		else if(ptr->next == NULL) {
	    ptr->prev->next = NULL;
	    free(ptr);
	    printf("NODE DELETED");
	  }
	  else {
		  ptr->prev->next=ptr->next;
		  ptr->next->prev=ptr->prev;
		  free(ptr);
		  printf("NODE DELETED");
		}
	}
}

void display() {
	int c=0;
	
	if(head == NULL) {
		printf("Empty List \n");
	} else {
		printf("\n----------------------\n");
		ptr = head;
		while(ptr!=NULL){
			printf("%d ",ptr->data);
			c++;
			ptr = ptr->next;
			
		}
		printf("\n----------------------\n");
		printf("Number nodes: %d\n ",c);
	}
}
void reverse_display(){
	if(head == NULL) {
		printf("Empty List \n");
	} else {
		
		printf("\n----------------------\n");
		ptr = head;
		while(ptr->next!=NULL){
			ptr = ptr->next;
		}
		last =ptr;
		while(last!=NULL){
			printf("%d ",last->data);
			last =last->prev;
		}
		
		printf("\n----------------------\n");
	}	
}
