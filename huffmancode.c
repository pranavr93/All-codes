#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	int freq;
	char c;
	struct node *next;
	struct node *left, *right;
};
struct node *head=NULL;
struct node *p1,*p2,*p3;
struct node *root;

struct node * buildpq(struct node *head, char ch)
{
    if(head==NULL)
			{
			  head=(struct node*)malloc(sizeof(struct node));
			  head->c=ch;
			  head->freq=1;
			  head->next=NULL;
			  head->left=NULL;
			  head->right=NULL;
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
			  		p2->right=NULL;
	                p1->next=p2;
				}
				else
				p1->freq++;
			}
			return head;
}			

void pqsort(struct node *head, int count)
{
    int i,f;
    char ch;
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
}		

struct node * buildtree(struct node *p1,struct node *root)
{
    while(p1->next!=NULL)
		{
			p1=head;
			head=p1->next->next;
			root=(struct node *)malloc(sizeof(struct node));
			root->freq=(p1->freq)+(p1->next->freq);
			root->c='0';
			root->left=(struct node*)malloc(sizeof(struct node));
			root->left=p1;
			root->right=(struct node*)malloc(sizeof(struct node));
			root->right=p1->next;
			root->next=NULL;
			//printf("Root created for : %d %d %d\n",root->freq,root->left->freq,root->right->freq);
		
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
		return root;
}		
int main()
{
    char s[50][100];
    char letter[50];
	FILE *fp,*fp1;
	char ch;
	int i,f,count,aa=0,k;
	struct node *temp;
	fp=fopen("text.c","r");
	if(fp==0)
	printf("Cannot open file");
	else
	{
		while(fscanf(fp,"%c",&ch)!=EOF && ch!='\n')
		{
			 head=buildpq(head,ch);
		}
		fclose(fp);
    }
		
		//printf("Frequency of each character is:\n");
		p3=head;
		while(p3!=NULL)
		{
			//printf("%c %d\n",p3->c,p3->freq);
			count++;
			p3=p3->next;
		}
		
		//sorting the queue based on frequency
	    pqsort(head,count);
		
		//displaying the sorted values
		printf("Sorted Frequency of each character is:\n");
		p3=head;
		while(p3!=NULL)
		{
			printf("%c %d\n",p3->c,p3->freq);
			p3=p3->next;
		}
		
		//making the tree
		p1=head;
	    root=buildtree(p1,root);
	
    i=0;
	k=0;
	temp=root;
	
     while(root!=NULL)
     {
          if(temp->left==NULL&&temp->right==NULL)
          {
            if(temp==root){break;}
            if(temp->c!='0'&&temp->c!='2')
            {
               letter[i]=temp->c;
               s[i][k]='\0';
               i++;
               k=0;
            }
            if(p2->left!=NULL&&(p2->left->freq==temp->freq)){p2->left=NULL;}
            else if(p2->right!=NULL&&(p2->right->freq==temp->freq)){p2->right=NULL;}

            if(p2->left==NULL&&p2->right==NULL){p2->c='2';}
            temp=root;
            k=0;

          }

          else if(temp->left==NULL&&temp->right!=NULL)
          {
               if(temp->right->c=='2'){temp->right=NULL;k=0;temp=root;continue;}
               p2=temp;
               temp=temp->right;
               s[i][k++]='1';

          }
          else
          {
               if(temp->left->c=='2'){temp->left=NULL;k=0;temp=root;continue;}
               p2=temp;
               temp=temp->left;
               s[i][k++]='0';
          }

      }

	for(k=0;k<i;k++)
	{
	    printf("\nCode for %c is %s",letter[k],s[k]);

	}
	
    //encoding the text file
    printf("\nEncoded text is: ");
	fp=fopen("text.c","r");
	fp1=fopen("encode.c","w");
	while((ch=fgetc(fp))!=EOF && ch!='\0')
	{
		for(k=0;k<i;k++)
		{
			if(ch==letter[k])
			{
			     fprintf(fp1,"%s",s[k]);
			     printf("%s",s[k]);
			     break;
            }
		}
	}
	fclose(fp);
	fclose(fp1);
	
	//building tree again for decoding
	 fp=fopen("text.c","r");
	if(fp==0)
	printf("Cannot open file");
	else
	{
		while(fscanf(fp,"%c",&ch)!=EOF && ch!='\n')
		{
			 head=buildpq(head,ch);
		}
		fclose(fp);
    }
    pqsort(head,count);
    p1=head;
    root=buildtree(p1,root);

    //decoding the file
    printf("\nDecoded message: ");
    fp=fopen("encode.c","r");
    temp=root;
    while((ch=fgetc(fp))!=EOF && ch!='\0')
    {
        if(ch=='0')
        temp=temp->left;
        else if(ch=='1')
        temp=temp->right;
        if(temp->left==NULL && temp->right==NULL)
        {
            printf("%c",temp->c);
            temp=root;
        }
    }
    printf("\n");
    fclose(fp);

	
	return 0;
	getch();
}
