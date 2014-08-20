#include<iostream>
//#include<algorithm>
using namespace std;
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
void inorder(Node *temp,int *prev){
        if(temp==NULL){return;}
        inorder(temp->right,prev);
            temp->data+=*prev;
            *prev=temp->data;
        inorder(temp->left,prev);

}
void inorderTraversal(Node *temp){
        if(temp==NULL){return;}
        inorderTraversal(temp->right);
           cout<<temp->data<<endl;
        inorderTraversal(temp->left);

}
int max(int a,int b){
    return a>b?a:b;
}
void findDeepestNode(Node *temp,int lvl,int *maxlvl,bool isLeft, Node **result){
    if(temp==NULL){return;}
    
    if(isLeft&&lvl>*maxlvl){
        *maxlvl=lvl;
        *result=temp;
    }
    
    findDeepestNode(temp->left,lvl+1,maxlvl,true,result);
    findDeepestNode(temp->right,lvl+1,maxlvl,false,result);

}
int main()
{
    Node *root=newNode(50);
    root->left = newNode(30);
    root->right = newNode(70);
    root->left->left = newNode(20);
    root->left->right = newNode(40);
    root->right->left = newNode(60);
    root->right->right = newNode(80);
    int prev=0;
    inorder(root,&prev);
    inorderTraversal(root);
}
