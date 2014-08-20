#include<iostream>
//#include<algorithm>
using namespace std;
int key,found=-1;
struct Node{
    int data;
    struct Node *left,*right;
};
Node *newNode(int val){
    Node *temp= new Node;
    temp->data=val;
    temp->right=temp->left=NULL;
    return temp;
}
void inorder(Node *temp,int lvl,bool *search,Node **result,int *targetlvl){
        if(temp==NULL){return;}
        inorder(temp->left,lvl+1,search,result,targetlvl);
        if(*search==true&&lvl==*targetlvl){*result=temp;found=1;*search=false;}
       // cout<<temp->data<<" "<<lvl<<endl;
        if(temp->data==key){*search=true;*targetlvl=lvl;}
        inorder(temp->right,lvl+1,search,result,targetlvl);

}
int max(int a,int b){
    return a>b?a:b;
}
int main()
{
    Node *root=newNode(10);
    root->left = newNode(2);
    root->right = newNode(6);
    root->left->left = newNode(8);
    root->left->right = newNode(4);
    root->right->right = newNode(5);
    cin>>key;
    Node *result;
    bool search=false;
    int targetlvl=-1;
    inorder(root,0,&search,&result,&targetlvl);
    if(found==-1){cout<<"NULL";return 0;}
    cout<<result->data<<endl;
}
