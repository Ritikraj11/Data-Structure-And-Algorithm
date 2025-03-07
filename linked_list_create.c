// // C Program to create a Linked List
// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure of Node
// typedef struct Node {
  
//     // Data field. Can add more data according to our need
//     int data;

//     // Pointer to the next node
//     struct Node *next;
// } Node;

// int main() {
  
//     // Create the First Node of the Linked List
//   	// This will serve as the head of the list
//     Node *first = (Node *)malloc(sizeof(Node));

//     // Assigning data
//     first->data = 10;

//     // Creating the second node in the list
//     Node *second = (Node *)malloc(sizeof(Node));

//     // Assigning data
//     second->data = 20;

//     // Creating the third node
//     Node *third = (Node *)malloc(sizeof(Node));

//     // Assigning data
//     third->data = 30;

//     // Linking the nodes
//     first->next = second; // This will create: 10 -> 20
//     second->next = third; // This will create: 10 -> 20 -> 30
//     third->next = NULL;   // This will create: 10 -> 20 -> 30 -> NULL

//     printf("Linked List: ");
//     Node* temp = first;
//   	while(temp) {
//       printf("%d ", temp->data);
//       temp = temp->next;
//     }
//     printf("\n");
//     printf("%d\n",first);
//     printf("%d\n",second);
//     printf("%d\n",third);
//     return 0;
// }




// Practise :-

#include<stdio.h>
#include<stdlib.h>


struct node
  {
    int data;
    struct node *link;
  };
  
int main(){
  struct node *first = (struct node*)malloc(sizeof(struct node));
  struct node *second = (struct node*)malloc(sizeof(struct node));
  struct node *third = (struct node*)malloc(sizeof(struct node));

  first ->data = 10;
  second ->data= 20;
  third ->data = 30;
  
  first ->link = second;
  second ->link=third;
  third->link=NULL;

  printf("Linked List: ");
  struct node* temp = first;
   	while(temp) {
       printf("%d ", temp->data);
       temp = temp->link;
     }
}
