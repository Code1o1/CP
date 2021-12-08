    #include<bits/stdc++.h>
    using namespace std;
     
     
    int dfs(string s,int pos)
    {
        if(pos>s.size())return 1;
        if(s[pos]=='1')
        return dfs(s,pos*2+1);
        if(s[pos]=='0')
        return dfs(s,pos*2+1+1);
        if(s[pos]=='?')
        return dfs(s,pos*2+1)+dfs(s,pos*2+1+1);
    }
     
    int main()
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        int len=s.size();
        int q;
        cin>>q;
        while(q--)
        {
        int a;
        char c;
        cin>>a>>c;
        s[a-1]=c;
        string str=s;    
        reverse(str.begin(),str.end());
        cout<<dfs(str,0)<<endl;
        }
    }