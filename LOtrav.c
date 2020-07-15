#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 10

struct BstNode{
int data;
struct BstNode *left;
struct BstNode *right;
};

BstNode *arr[MAX];
int front = -1, rear = -1;

bool isEmpty(){
return (front == -1 && rear == -1) ? true : false;
}

bool isFull(){
return (rear+1)%MAX == front ? true : false;
}

void enQueue(BstNode* x)
{
if(isFull()){
printf("queue is full\n");
return;
}
if(isEmpty())
front = rear = 0;
else
rear = (rear+1)%MAX;

arr[rear] = x;

}
void deQueue(){
if(isEmpty()){
printf("queue is empty\n");
return;
}
else if(front == rear)
front = rear = -1;
else
front = (front+1)%MAX;

}

BstNode *getNewNode(int d){
BstNode *newNode = (BstNode *)malloc(sizeof(BstNode));
newNode->data = d;
newNode->left = newNode->right = NULL;

return newNode;

}

BstNode *Insert(BstNode *root, int d){
BstNode *newNode = getNewNode(d);
if(root == NULL){
root = newNode;
}
else if(d <= root->data){
root->left = Insert(root->left, d);
}
else
root->right = Insert(root->right, d);

return root;

}

void levelOrder(BstNode *root){
if(root == NULL) return;
enQueue(root);
while(!isEmpty()){
BstNode *current = arr[front];
deQueue();
printf("%d ", current->data);
if(current->left != NULL) enQueue(current->left);
if(current->right != NULL) enQueue(current->right);

}

}

int main(){
BstNode *root = NULL;
root = Insert(root,5);
root = Insert(root,10);
root = Insert(root,15);
root = Insert(root,7);
root = Insert(root,3);
root = Insert(root,20);
root = Insert(root,25);
root = Insert(root,21);
levelOrder(root);

return 0;

}
