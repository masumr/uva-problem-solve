#include<bits/stdc++.h>
using namespace std;
#define lim 1010
#define len 220
int fib[lim][len];
void fibb(){
    fib[0][0]=1;
    fib[1][0]=2;
    fib[2][0]=3;
    int n=1;
    for(int i=3;i<lim;i++){
        for(int j=0;j<len;j++){
            fib[i][j]+=fib[i-1][j]+fib[i-2][j];
            if(fib[i][j]>=10){
                fib[i][j+1]=fib[i][j]/10;
                fib[i][j]%=10;
            }
        }
    }
}
int main(){
    vector<string>s;
    int j,i;
    fibb();
    for(i=0;i<lim;i++){
        string sa="";
        for(j=len-1;j>0;j--)if(fib[i][j]!=0)break;
        while(j>=0){
            sa+=(char)(fib[i][j]+48);
            j--;
        }
      s.push_back(sa);
    }
    int n;
    while(scanf("%d",&n)==1){
        cout<<s[n]<<endl;
    }
}
