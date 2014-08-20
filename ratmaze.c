/*
Rat in the maze problem
Author: Pranav.R
*/
#include<stdio.h>
int L=10;
int i,j;
int a[10][10],b[10][10];
struct node
{
int row;
int val;
int col;
struct node *next;
};
struct node *top;
//------------------DISPLAY FUNCTION-------------------------
void display()
{
     int i,j;
     for(i=0;i<L;i++)
     {
          for(j=0;j<L;j++)
          {

               printf("%d",a[i][j]);
          }
          printf("\n");
     }
     printf("\n\n");
}
//------------------PUSH FUNCTION-------------------------
void push()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->row=i;
temp->col=j;
temp->val=1;
temp->next=top;
top=temp;
//b[i][j]++;
}
//------------------POP FUNCTION-------------------------
void pop()
{
struct node *temp;
temp=top;
a[i][j]=0;

top=top->next;
//If top becomes null, there is no way to reach the maze end.
if(top==NULL){printf("Cannot reach maze end !!\n ");exit(0);}
i=top->row;
j=top->col;
free(temp);
}
//------------------DIRECTION CHECK FOR 1-------------------------
int rightcheck()
{
     if(j+1>=L){return 0;}    // Prevent rat from going outside the maze
	if(a[i][j+1]==1)
	{
	    a[i][j]=2;
	    j++;
     return 1;
	}
	else {return 0;}
}

int downcheck()
{
     if(i+1>=L){return 0;}    // Prevent rat from going outside the maze
	if(a[i+1][j]==1)
	{
	    a[i][j]=2;
	    i++;
	return 1;
	}
	else {return 0;}
}

int leftcheck()
{
     if(j-1<0){return 0;}     // Prevent rat from going outside the maze
	if(a[i][j-1]==1)
	{
	    a[i][j]=2;
	    j--;
	return 1;
	}
	else {return 0;}
}

int topcheck()
{
     if(i-1<0){return 0;}     // Prevent rat from going outside the maze
	if(a[i-1][j]==1)
	{
	    a[i][j]=2;
	i--;
	return 1;
	}
	else {return 0;}
}
//-----------------------MAIN FUNCTION STARTS-------------------------------
int main()
{
struct node *temp;
int k;
FILE *fp;
fp=fopen("maze12.txt","r");
for(i=0;i<L;i++)
{
	for(j=0;j<L;j++)
	{
	    b[i][j]=0;
	fscanf(fp,"%d",&k);
	a[i][j]=k;
	}
}
temp=(struct node*)malloc(sizeof(struct node));
temp->row=0;
temp->col=0;
temp->val=1;
temp->next=NULL;
top=temp;
i=0;
j=0;

/* Remove comments if you want to display the initial maze
for(i=0;i<10;i++)
{
     for(j=0;j<10;j++)
          {
               printf("%d",a[i][j]);
          }
          printf("\n");
}
*/
i=0;
j=0;
a[0][0]=2;
while(1)
{

     //printf("%d %d\n",i,j);   //prints current position of the rat.
     //display();         //displays the maze after every move.
if(rightcheck())
	{
	push();
	continue;
	}
if(downcheck())
	{
	    push();
	    continue;
	}
     if(i==9&&j==9)
	{
	    break;
     }
if(leftcheck())
	{
	push();
	continue;
	}

if(topcheck())
	{
	push();
	continue;
	}
	//printf("%d\n\n",a[i][j]);
	if(a[i][j]==1){a[i][j]=2;continue;}
	if(a[i][j]==2){a[i][j]=0;}
//Control reaches here if all surrounding squares are 2s, which is when we start backtracking	
pop();
}
//struct node *temp2;
//struct node *top2;
while(top!=NULL)
{
//temp2=(struct node*)malloc(sizeof(struct node));
//temp2->row=top->row;
//temp2->col=top->col;

     printf("%d %d\n",top->row,top->col);
     top=top->next;
}
for(i=0;i<10;i++)
{
     for(j=0;j<10;j++)
     {
          printf("%d",b[i][j]);
     }
     printf("\n");
}
return 0;
}
