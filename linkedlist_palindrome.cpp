#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int length=0;
struct node* temp2;
using namespace std;
struct node
{
     char ch;
     struct node *next;
};
void display_reverse(struct node *temp)
{
     if(temp==NULL){return ;}
     length++;
     display_reverse(temp->next);
     if(temp->ch==temp2->ch){length--;temp2=temp2->next;}
}
int main()
{
     char k;

     int n,i;
     struct node *head;
     head= (struct node*)malloc(sizeof(struct node));
     cout<<"Enter the number of elements : ";
     cin>>n;
     cin>>k;
     head->ch=k;
     head->next=NULL;
     temp2=head;
     for(i=1;i<n;i++)
     {
          cin>>k;
           struct node *temp= ( struct node*)malloc(sizeof(struct node));
           temp->ch=k;
           temp->next=NULL;
           temp2->next=temp;
           temp2=temp;
     }
     struct node * temp;
     temp=head;
     temp2=head;
     while(temp!=NULL)
     {
          temp=temp->next;
          temp2=temp2->next->next;
          if(temp2==NULL){break;}
          if(temp2->next==NULL){break;}
     }
     struct node * mid=temp;
     temp2=head;
     display_reverse(head);
     if(length==0){cout<<"Palindrome !! "<<endl;}
     else{cout<<"Not a palindrome! "<<endl;}
    // check_pal1(mid,head);
return 0;
}
