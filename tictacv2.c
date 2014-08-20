#include<stdio.h>
#include<stdlib.h>
#include<process.h>
int n=9,pl=0,a[3][3],x,y,k=0;
void call()
{
printf("Game over");exit(3);
}

//------------------------------------------------------------


void display()   //display the board after a move
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d  ",a[i][j]);
        }
        printf("\n");
    }printf("\n");

}

//------------------------------------------------------------


int opp(int i1,int j1,int i2,int j2)    //given two positions,checks if opponent has a win,if so,the opponents winning move is blocked
{
    if((i1!=i2)&&(j1!=j2))
    {
        if((i1==j1)&&(i2==j2)){
        if(i1+i2==1){x=2;y=2;}
        if(i1+i2==2){x=1;y=1;}
        if(i1+i2==3){x=3;y=3;}}
        else{
        if(i1+i2==1){x=2;y=0;}
        if(i1+i2==3){x=0;y=2;}
        if(i1+i2==2){x=1;y=1;}
        return 0;
        }
    
    }
    
    if(i1==i2)
    {
        if(i1==0)
        {
            if(j1+j2==1){x=0;y=2;}
            if(j1+j2==2){x=0;y=1;}
            if(j1+j2==3){x=0;y=0;}
        }
        if(i1==1)
        {
            if(j1+j2==1){x=1;y=2;}
            if(j1+j2==2){x=1;y=1;}
            if(j1+j2==3){x=1;y=0;}
        }
        if(i1==2)
        {
            if(j1+j2==1){x=2;y=2;}
            if(j1+j2==2){x=2;y=1;}
            if(j1+j2==3){x=2;y=0;}
        }return 0;
    }

    if(j1==j2)
    {
        if(j1==0)
        {
            if(i1+i2==1){x=2;y=0;}
            if(i1+i2==2){x=1;y=0;}
            if(i1+i2==3){x=0;y=0;}
        }
        if(j1==1)
        {
            if(i1+i2==1){x=2;y=0;}
            if(i1+i2==2){x=1;y=0;}
            if(i1+i2==3){x=0;y=0;}
        }
        if(j1==2)
        {
            if(i1+i2==1){x=2;y=0;}
            if(i1+i2==2){x=1;y=0;}
            if(i1+i2==3){x=0;y=0;}
        }return 0;
    }
}   

//------------------------------------------------------------

int check() //there are total of 8 possibly win positions
{
    int i1,i2,j1,j2;
    for(i1=0;i1<3;i1++)
    {
        for(j1=0;j1<3;j1++)
        {
    if(a[i1][j1]!=k){continue;}
            for(i2=i1;i2<3;i2++)
            {
                for(j2=0;j2<3;j2++)  
                {
                   if(a[i2][j2]!=k){continue;}

            opp(i1,j1,i2,j2);

                    if(a[x][y]==0)
                        {
            a[x][y]=1;
            n--;display();
            if(k==1){call();}return 1;
            }               //opponents move blocked or if k=1,we win.

                        if(a[x][y]==1)
                        {continue;} //if winning move was already secured,goes to next check
                }
            }
        }
    }
    return 0;
}
            
//------------------------------------------------------------


int playmove()
{
k=1;
check();
k=2;
if(n<=6)
    {if(check())
        {
        return 0;
        }
    }
if(n==9)
    {
    a[1][1]=1;
    n--;
    display();
    return 0;
    }
if((n==8)){
    if(a[0][0]==2){a[2][2]=1;}
    if(a[0][2]==2){a[2][0]=1;}
    if(a[2][0]==2){a[0][2]=1;}
    if(a[2][2]==2){a[0][0]=1;}
    }
}

//------------------------------------------------------------


int main()
{
int a[3][3]={0,0,0,0,0,0,0,0,0},i,p,q;
for(i=1;i<=5;i++)
    {
    playmove();
    scanf("%d %d",&p,&q);
    a[p-1][q-1]=2;n--;
    display();
    }



return 0;
}
