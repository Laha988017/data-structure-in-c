#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node nd;

void inorder(nd * root)
{
	if(root == NULL)
		return;
	inorder(root->left);
	printf("%d\t",root->data);
	inorder(root->right);
}
void preorder(nd * root)
{
        if(root == NULL)
                return;
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
}
void postorder(nd * root)
{
        if(root == NULL)
                return;
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
}
nd *create(int data)
{
	nd *newnode = (nd*)malloc(sizeof(nd));
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

void main()
{
	int ch;
	nd *root = create(1);
	root->left = create(2);
	root->right = create(3);
	root->left->left = create(4);
	root->left->right = create(5);
	do{
		printf("\n1.Preorder");
		printf("\n2.Inorder");
		printf("\n3.Postorder");
		printf("Enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	printf("-----Preorder------");
				preorder(root);
				break;
			case 2:printf("-----Inorder------");
				inorder(root);
                                break;
			case 3:printf("-----Postorder------");
				postorder(root);
                                break;
		}
	}while(ch!=0);
}
