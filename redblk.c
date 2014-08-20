 #include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    int col;
    struct node *left;
    struct node *right;
    struct node *parent;
}*np,*rt;

void leftrotate(struct node **root,struct node *x){

    struct node *y,*r;
    r=(*root);

    y=x->right;
    x->right=y->left;

    if(y!=np)
    y->left->parent=x;

    y->parent=x->parent;

    if(x->parent==NULL)
    (*root)=y;

    else if(x==x->parent->left)
    x->parent->left=y;
    else x->parent->right=y;
    y->left=x;
    x->parent=y;
}

void rightrotate(struct node **root,struct node *x){

    struct node *y,*r;
    r=(*root);

    y=x->parent;
    y->left=x->right;

    if((x->right)!=np)
    x->right->parent=y;

    x->parent=y->parent;

    if(y->parent==NULL)
    *root=x;

    else if(y==y->parent->left)
    y->parent->left=x;
    else y->parent->right=x;
    x->right=y;
    y->parent=x;
}

void fix(struct node **root,struct node *z){

    struct node *y,*r;
    r=(*root);

    while(z->parent!=NULL && z->parent->col==0 ){
        if(z->parent == z->parent->parent->left){

            y=z->parent->parent->right;

            if(y->col == 0){
                z->parent->col=1;
                y->col=1;
                z->parent->parent->col=0;
                z=z->parent->parent;
            }

            else if(z==z->parent->right){
                z=z->parent;
                leftrotate(root,z);
            }
            z->parent->col=1;
            z->parent->parent->col=0;
            rightrotate(root,z->parent);
        }

        else{
            y=z->parent->parent->left;

            if(y->col == 0){
                z->parent->col=1;
                y->col=1;
                z->parent->parent->col=0;
                z=z->parent->parent;
            }


            else {
                if(z==z->parent->left){
                    rightrotate(root,z);
                }

                z->col=1;
                z->parent->col=0;
                leftrotate(root,z->parent);
            }

        }
    }
    (*root)->col=1;
}

void insert(struct node **root,struct node *z){

    struct node *y,*r;
    y=np;
    r=(*root);

    while(r!=np){
        y=r;
        if((z->key) < (r->key))
        r=r->left;
        else
        r=r->right;
    }

    z->parent=y;

    if(y==np)
    *root=z;
    else if((z->key) < (y->key))
    y->left=z;
    else y->right=z;

    z->left = np;
    z->right = np;
    z->col=0;

    fix(root,z);
}


void traverse(struct node *r){

    if(r!=np){

        traverse(r->left);
        if(r->col==0)
        printf("(%d Red) --",r->key);
        else
        printf("(%d Black)--",r->key);
        traverse(r->right);
    }
}


void main(){
        struct node *r,*p;
    int num;
    np=(struct node *)malloc(sizeof(struct node));
    np->key=-1;
    np->col=1;
    np->left=NULL;
    np->right=NULL;



    p=(struct node *)malloc(sizeof(struct node));
    p->key=7;
    p->parent=NULL;
    p->left=np;
    p->right=np;
    p->col=1;

    r=p;

    p=(struct node *)malloc(sizeof(struct node));
    p->key=3;
    insert(&r,p);

    p=(struct node *)malloc(sizeof(struct node));
    p->key=18;
    insert(&r,p);

    p=(struct node *)malloc(sizeof(struct node));
    p->key=10;
    insert(&r,p);

    p=(struct node *)malloc(sizeof(struct node));
    p->key=8;
    insert(&r,p);

    p=(struct node *)malloc(sizeof(struct node));
    p->key=11;
    insert(&r,p);

    p=(struct node *)malloc(sizeof(struct node));
    p->key=22;
    insert(&r,p);

    p=(struct node *)malloc(sizeof(struct node));
    p->key=26;
    insert(&r,p);
    rt=r;

    //printf("%d\n",r->key);
    traverse(r);

    printf("\nEnter value to be inserted ");
    scanf("%d",&num);
    p=(struct node *)malloc(sizeof(struct node));
    p->key=num;

    insert(&r,p);
    printf("%d\n",r->key);
    traverse(r);
}

