#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};

struct node *newnode(int data)
{
struct node *node=(struct node *)malloc(sizeof(struct node));
node->data=data;
node->left=NULL;
node->right=NULL;
return (node);
}

void inorder(struct node *node)
{

	if(node==NULL)
		return ;
	inorder(node->left);
	printf("%d\n",node->data);
	inorder(node->right);
}

void preorder(struct node *node)
{
if(node==NULL)
return ;
printf("%d\n",node->data);
preorder(node->left);
preorder(node->right);
}

void postorder(struct node *node)
{
if(node==NULL)
	return ;
postorder(node->left);
postorder(node->right);
printf("%d\n",node->data);

}

int main()
{
struct node *root=newnode(1);
root->left=newnode(2);
root->right=newnode(3);
root->left->left=newnode(4);
root->left->right=newnode(5);

printf("\ninorder traversal");
inorder(root);

printf("\npreorder traversal");
preorder(root);

printf("\npostorder traversal");
postorder(root);

}
