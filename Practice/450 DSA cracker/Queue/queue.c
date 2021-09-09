#include <stdio.h>
#define size 5
int q[size];
void enqueue(int);
void dequeue();
int peek();
int isEmpty();
int isFull();
void display();
int front = 0;
int rear = -1;
int main()
{
    int ch, ele;
    char opn;
    printf("*****QUEUE*****\n");
    do{
        printf("***MENU***\n");
        printf("1.Enqueue\n2.Dequeue\n3.Peek\n4.IsEmpty\n5.IsFull\n6.Display");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch(ch){
            case 1: printf("\nEnter element to insert into queue:\n");
                    scanf("%d", &ele);
                    enqueue(ele);
                    break;
            case 2: dequeue();
                    break;
            case 3: printf("\nThe element at the front end of the queue is %d", peek());
                    break;
            case 4: if(isEmpty()){
                        printf("\nQueue is empty");
                    }
                    else{
                        printf("\nQueue is not empty");
                    }
                    break;
            case 5: if(isFull()){
                        printf("\nQueue is Full");
                    }
                    else{
                        printf("\nQueue is not Full");
                    }
                    break;
            case 6: printf("\nThe queue is:\n");
                    display();
                    break;
            default: printf("\nInvalid choice");
        }
        printf("\nDo you want to continue(y/n)\n");
        scanf(" %c", &opn);
    }while(opn == 'y' || opn == 'Y');
    return 0;
}
void enqueue(int x){
    if(rear == size - 1){
        printf("\nQUeue is full");
    }
    else{
        rear++;
        q[rear] = x;
    }
}
void dequeue(){
    if(rear < front){
        printf("\nQUeue is empty");
    }
    else{
        front++;
    }
}
int peek(){
    if(rear < front){
        printf("\nEmpty Queue");
        return -9999999;
    }
    else{
        return q[front];
    }
}
int isEmpty(){
    if(rear < front){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(){
    if(rear == size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
void display(){
    if(rear < front){
        printf("\nQueue is Empty:no element to display");
    }
    else{
        for(int i = front; i <= rear; i++){
            printf("%d ", q[i]);
        }
    }
}
