#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int f=0;
typedef struct BST
{
	int data;
	struct BST *l,*r;
}node;

node *dele(node *r1,node *r)
{
	node *temp=NULL;
	if(r1->r!=NULL)
	{
		r1->r=dele(r1->r,r);  // recursion
	}
	else
	{
		r->data=r1->data;
		temp=r1;
		r1=r1->l;
		free(temp);
	}
	return r1;

}
node *del(node *a,int d)
{
	if(a!=NULL)
	{
		node *temp=NULL;

		if(a->data>d)
		{
			a->l=del(a->l,d);
		}
		else if(a->data<d)
		{
			a->r=del(a->r,d);
		}
		else
		{
			f=1;
			temp=a;
			printf("\nThe deleted ele = %d",temp->data);
			if(a->l==NULL)    // left child is null
			{
				a=a->r;
				free(temp);   // to deallocate the memory.
			}
			else if(a->r==NULL)    // right child is null
			{
				a=a->l;
				free(temp);  // to deallocate the memory.
			}
			else         // both children are there
			{

				a->l=dele(a->l,a);

			}
		}
	}
	return a;
}

node *create(node *a,int d)
{
	if(a==NULL)
	{
		a=(node *)malloc(sizeof(node));
		a->data=d;
		a->l=NULL;
		a->r=NULL;
	}
	else if(a->data>d)
	{
		a->l=create(a->l,d);
	}
	else if(a->data<d)
	{
		a->r=create(a->r,d);
	}
	return a;
}
void inorder(node *a)
{
	if(a!=NULL)
	{
		inorder(a->l);
		printf("%d ",a->data);
		inorder(a->r);
	}
}
void preorder(node *a)
{
	if(a!=NULL)
	{
		printf("%d ",a->data);
		preorder(a->l);
		preorder(a->r);
	}
}
void postorder(node *a)
{
	if(a!=NULL)
	{
		postorder(a->l);
		postorder(a->r);
		printf("%d ",a->data);
	}
}
void main()
{

	node *a=NULL;
	int d;
	clrscr();
	printf("Enter the data (-999 to exit):");
	scanf("%d",&d);
	while(d!=-999)
	{
		a=create(a,d);
		printf("Enter the data (-999 to exit):");
		scanf("%d",&d);
	}
	puts("\nThe inorder traversal\n");
	inorder(a);
	puts("\nThe preorder traversal\n");
	preorder(a);
	puts("\nThe postorder traversal\n");
	postorder(a);

	printf("\nEnter the element to be deleted:");
	scanf("%d",&d);

	a=del(a,d);
	if(!f)
	{
		printf("\n%d not found in the BST!",d);
	}
	else
	{
		puts("\nThe inorder traversal\n");
		inorder(a);
	}
	getch();
}
