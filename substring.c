#include<stdio.h>
#include<string.h>
#include<vector>
#define N 1000
struct point{
    double x;
    double y;
};
struct point p[N];

vector <int> v;
int checkDir(int f,int i,int s){

int val = (p[s].y - p[f].y) * (p[i].x - p[s].x) -
              (p[s].x - p[f].x) * (p[i].y - p[s].y);
if(val==0){return 0;}
else if(val>0){return 1;}
else{return 2;}
}

int main(){
    FILE *fp;
    double dummy; // Unnecessary Z coordinate taken in
    fp=fopen("sample.txt","r");
    for(i=0;i<N;i++){
        fscanf(fp,"%f",&p[i].x);
        fscanf(fp,"%f",&p[i].y);
        fscanf(fp,"%f",&dummy);
    }
    least=0;
    for(i=1;i<N;i++){
        if(p[i].x<p[least].x)
            least=i;
    }
    f=least;
    do{
        s=(f+1)%N;
        for(i=0;i<N;i++){
            if(checkDir(f,i,s)==2)
                s=i;
        }
        v.push_back(s);
        f=s;
    }while(least!=f);   .

cout<<"The convex hull points are:\n";
for(i=0;i<v.size();i++){
    cout<<p[v[i]].x<<" "<<p[v[i].y]<<endl;
}
return 0;
}

