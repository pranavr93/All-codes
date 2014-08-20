#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector <int> v;

int main()
{
int n,i,j,k,t,m;
char ch;
cin>>n;
string s;
char s3[1000];
vector <string> v;
vector <string> final;
    for(i=0;i<n+1;i++)
    {
      getline(cin,s);//cin>>s;
      if(i!=0){v.push_back(s);}
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            if(v[i][j]==' '){continue;}
            if(v[i][j]=='@'){
                for(k=j+1;k<v[i].size()-1;k++){
                    if(v[i][k]==' '){break;}

                    if(v[i][k]=='.'&&(v[i][k+1]!=' '||k+1==v[i].size())){/*&&v[i][k+1]=='c'&&v[i][k+2]=='o'&&v[i][k+3]=='m'&&(v[i][k+4]==' '||k+4==v[i].size())*/
                       //cout<<"hi";
                        t=j;
                        while(v[i][t]!=' ')
                        {
                            t--;
                        }
                        t++;
                       // cout<<t<<endl<<k+3<<endl;
                        for(m=t;m<v[i].size();m++)
                        {
                            if(v[i][m]==' '){break;}
                            //cout<<v[i][m];
                            s3[m-t]=v[i][m];
                            //cout<<s2;
                        }
                        s3[m-t]='\0';
                      final.push_back(s3);
                     // cout<<s2;
                    }
                }
            }
        }

    }
    sort(final.begin(),final.end());
    for(i=0;i<final.size();i++)
    {
        cout<<final[i];
        if(i!=final.size()-1){cout<<";";}
    }
return 0;
}

