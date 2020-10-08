#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;

};
struct node *Root = NULL;
struct node* insert(int num)
{	
	
	struct node* t,*p=Root;
	t =(struct node*)malloc(sizeof(struct node));
	t->data = num;
	t->left = NULL;
	t->right = NULL;
	
	if(Root==NULL)
	{
		Root = t;
	}
	else
	{
		struct node* current=Root;
		while(current)
		{
			p = current;
			if( t->data > current->data)
			{
				current = current->right;
			}
			else
			{
				current = current->left;
			}
		}
		if(t->data > p->data)
		{
			p->right = t;
		}
		else
		{
			p->left = t;
		}
	}
}
void inorder(struct node *t)
{
	if(t->left)
	{
	 	inorder(t->left);
	}
	printf("%d\t",t->data);
	if(t->right)
	{
		inorder(t->right);
	}		
}
void preorder(struct node *t)
{
	if(t==NULL)
		return;
	else
	{
	printf("%d\t",t->data);
	preorder(t->left);
	preorder(t->right);
	}
}
void postorder(struct node *t)
{
	if(t==NULL)
		return;
	else
	{
		postorder(t->left);
		postorder(t->right);
		printf("%d\t",t->data);
	} 
}
int main()
{
	int num,data;
	printf("enter the number : ");
	scanf("%d",&num);
	while(num)
	{
		printf("ENTER THE NEXT DATA :  ");
		scanf("%d",&data);
		insert(data);
		num--;
	}
	printf("inorder....\n");
	inorder(Root);
	printf("\n preorder....\n");
	preorder(Root);
	printf("\n postorder....\n");
	postorder(Root);
}
