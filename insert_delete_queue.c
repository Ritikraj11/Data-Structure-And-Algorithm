// Programm for insertion and deletion in Queue.


#include<stdio.h>
int front = 0;
int rear = -1;
int itemcount;
int size = 5;
int arr[5];
int itemcount = 0;          // To count the Number of element in queue.

int add(int element ){
    if(rear == size){       // Condition to check Queue is full or not.
        printf("Queue is full. Fuck off");
    }
    else{
        rear = rear + 1;
        arr[rear] = element;
        printf("Element Inserted\n");    
    }
    itemcount++;
}

void print(){
    if(itemcount == 0){         //Condition to check Queue is Empty or not.
        printf("Queue is Empty");
    }
    else{
        printf("Insertd Elements are : ");
        for (int i = front;i<=rear;i++){
            printf("%d\t",arr[i]);
        }
        printf("Item is %d", itemcount);
    }
}

int delete(){
    if(itemcount == 0){
        printf("Empty Queue");
    }
    else{
        front = front + 1;
        int item = arr[front];
    }
    itemcount--;
}

int main(){
    add(20);
    add(30);
    add(40);
    delete();
    delete();
    add(60);
    print();
}