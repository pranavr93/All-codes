          #include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct node
{
	int freq;
	char c;
	struct node *next;
	struct node *left, *right;
};

struct node *head=NULL;

int main()
{
	FILE *fp;
	char ch;
	int i,f,count=0;
	struct node *p1,*p2,*p3;
	struct node *root;
	struct node *temp;
	int a[100];
	fp=fopen("text.c","r");
	if(fp==0)
	printf("Cannot open file");
	else
	{
		while(fscanf(fp,"%c",&ch)!=EOF && ch!='\n')
		{
			if(head==NULL)
			{
			  head=(struct node*)malloc(sizeof(struct node));
			  head->c=ch;
			  head->freq=1;
			  head->next=NULL;
			  head->left=NULL;
			  head->left=NULL;
			  p1=head;	
			}
			else
			{
			  	p1=head;
			    while(p1->c!=ch)
				{
					if(p1->next==NULL)
					break;
					p1=p1->next;
				}
				if(p1->next==NULL&&(p1->c!=ch))
				{
				    p2=(struct node*)malloc(sizeof(struct node));
				    p2->c=ch;
	                p2->freq=1;
	                p2->next=NULL;
	                p2->left=NULL;
			  		p2->left=NULL;
	                p1->next=p2;
				}
				else
				p1->freq++;
			}
		}
		fclose(fp);
		
		//displaying
		printf("Frequency of each character is:\n");
		p3=head;
		while(p3!=NULL)
		{
			//printf("%c %d\n",p3->c,p3->freq);
			count++;
			p3=p3->next;
		}
		
		//sorting the queue based on frequency
		for(i=0;i<count;i++)
		{
		p3=head;
		while(p3->next!=NULL)
		{
			p2=p3->next;
			if(p3->freq>p2->freq)
			{
				f=p3->freq;
				p3->freq=p2->freq;
				p2->freq=f;
				ch=p3->c;
				p3->c=p2->c;
				p2->c=ch;
			}
			p3=p3->next;
		}
		}
		
		printf("Sorted Frequency of each character is:\n");
		p3=head;
		while(p3!=NULL)
		{
			printf("%c %d\n",p3->c,p3->freq);
			p3=p3->next;
		}
		
		//making the tree
		p1=head;
		while(p1->next!=NULL)
		{
			p1=head;
			//printf("%d %d\n",p1->freq,p1->next->freq);
			head=p1->next->next;
			root=(struct node *)malloc(sizeof(struct node));
			root->freq=(p1->freq)+(p1->next->freq);
			root->left=(struct node*)malloc(sizeof(struct node));
			root->left->c=p1->c;
			root->left->freq=p1->freq;
			root->left->next=NULL;
			root->right=(struct node*)malloc(sizeof(struct node));
			root->right->c=p1->next->c;
			root->right->freq=p1->next->freq;
			root->right->next=NULL;
			//printf("hab");
			free(p1->next);
			free(p1);
			p1=head;
			printf("Root created for : %d %d %d\n",root->freq,root->left->freq,root->right->freq);
		
			if(head==NULL)
			break;
			//inserting it into the queue
			p3=head;
			if(p3!=NULL&&(p3->freq<root->freq))
			{
				while(p3->next!=NULL&&p3->next->freq<root->freq )
				{
					p3=p3->next;
				}
				if(p3->next==NULL)
				{
					
					p3->next=root;
					root->next=NULL;
				}
				else
				{
					p2=p3->next;
					p3->next=root;
					root->next=p2;
				}
			}
			else
			{
			
				head=root;
				root->next=p3;
			}
			
		}
	}
	temp=root;
	fp=fopen("write.txt","+r");
	while(root->freq>0)
	{
		temp=root;
		while(temp->left!=NULL && temp->left->freq>0)
		{
			printf("Inside first while\n");
			//s[i][j]='0';
			//fprintf(fp,"0");
			temp=temp->left;
			printf("printed 0\n");
		}
		if(temp->right==NULL)
		{
			fprintf(fp," %c\n",temp->c);
			temp->freq=-1;
			printf("printed character\n");	
		}
		else
		{
			printf("inside else\n");
			if(temp->right->freq<0)
			{
				temp->freq=-1;
				continue;
			}
			else
			{
				temp=temp->right;
				fprintf(fp,"1");
				continue;
			}
		}	
	}
	/*while(root!=NULL)
	{
		while(1)
		{
			if(temp->left==NULL && temp->right->left!=NULL)
			{
				
			}
			if(temp->right==NULL)
			{
			}
			
			}
		}
	return 0;
	getch();
	}*/
}
