#include <bits/stdc++.h>
using namespace std;
int H, L; vector<vector<string>> g; string t;
int bestLen = INT_MAX; long long ways = 0; string bestStr;
set<pair<int,int>> vis; string cur; int Ti, Tj;
bool opens(const string&a,const string&b){int d=0;for(int k=0;k<L;k++)d+=(a[k]!=b[k]);return d==1;}
void go(int i,int j){
    if(i==Ti&&j==Tj){
        int len=cur.size();
        if(len<bestLen){bestLen=len;ways=1;bestStr=cur;}
        else if(len==bestLen){ways++; bestStr=min(bestStr,cur);}
        return;
    }
    if((int)cur.size()>=bestLen) return;
    int di[3]={0,0,1}, dj[3]={-1,1,0}; char ch[3]={'L','R','U'};
    for(int c=0;c<3;c++){
        int ni=i+di[c], nj=j+dj[c];
        if(ni>=H||nj<0||nj>=(int)g[ni].size()) continue;
        if(!opens(g[i][j],g[ni][nj])||vis.count({ni,nj})) continue;
        vis.insert({ni,nj}); cur+=ch[c]; go(ni,nj); cur.pop_back(); vis.erase({ni,nj});
    }
}
int main(){
    cin>>H>>L>>t; g.resize(H);
    for(int i=0;i<H;i++){int w;cin>>w;g[i].resize(w);for(auto&s:g[i])cin>>s;}
    Ti=-1; for(int i=0;i<H;i++)for(int j=0;j<(int)g[i].size();j++) if(g[i][j]==t){Ti=i;Tj=j;}
    vis.insert({0,0}); go(0,0);
    if(bestLen==INT_MAX){puts("-1");return 0;}
    // ระยะจากห้องแรก แบบ relax ซ้ำ ๆ
    map<pair<int,int>,int> D; for(int i=0;i<H;i++)for(int j=0;j<(int)g[i].size();j++)D[{i,j}]=1e9; D[{0,0}]=0;
    bool ch=true; while(ch){ch=false;
        for(int i=0;i<H;i++)for(int j=0;j<(int)g[i].size();j++){ if(D[{i,j}]>=1e9)continue;
            int di[3]={0,0,1}, dj[3]={-1,1,0};
            for(int c=0;c<3;c++){int ni=i+di[c],nj=j+dj[c]; if(ni>=H||nj<0||nj>=(int)g[ni].size())continue;
                if(opens(g[i][j],g[ni][nj])&&D[{ni,nj}]>D[{i,j}]+1){D[{ni,nj}]=D[{i,j}]+1;ch=true;}}}}
    map<int,int> lay; int w=0; for(auto&[k,d]:D) if(d<1e9) w=max(w,++lay[d]);
    printf("%d\n%lld\n%d\n%s\n",bestLen,ways%1000000007LL,w,bestStr.c_str());
}
