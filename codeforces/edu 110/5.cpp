    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    const int N= 3e5+10, M=30;
    int p[N][M];
    int c[N], a[N];
     
    void insert(int v, int p1, int a1, int c1)
    {
        a[v]= a1;
        c[v]= c1;
     
        p[v][0]= p1;
        for(int i=1; i<M; i++)
        {
            p[v][i]= p[p[v][i-1]][i-1];
        }
    }
     
    int getKthP(int v, int k)
    {
        for(int i=0; i<M; i++)
        {
            if(k&(1<<i))
            {
                v= p[v][i];
            }
        }
        return v;
    }
     
    int nonZeroP(int v)
    {
        int l=0, r=N;
        while(l<r)
        {
            int m= (l+r)/2;
            if(a[getKthP(v, m)]) l= m+1;
            else r=m;
        }
        return l-1;
    }
     
    pair<int, int> plunder(int v, int w)
    {
        int cost=0, wght= 0;
        for(int anc= nonZeroP(v); anc>=0 and w>0; anc--)
        {
            int anc1= getKthP(v, anc);
            int x= min(w, a[anc1]);
            w-= x; a[anc1]-= x;
            
            cost+= c[anc1]*x; 
            wght+= x;
        }
        return {wght, cost};
    }
     
    void test()
    {
        int q, a0, c0; cin>>q>>a0>>c0;
        insert(1, 0, a0, c0);
        for(int i=1; i<=q; i++)
        {
            int t; cin>>t;
            if(t==1)
            {
                int p1, a1, c1; 
                cin>>p1>>a1>>c1;
                insert(i+1, p1+1, a1, c1);
            }
            else 
            {
                int v, w; cin>>v>>w;
                auto res= plunder(v+1, w);
                cout<<res.first<<' '<<res.second<<endl;
            }
        }
    }
     
    signed main()
    {
        iostream::sync_with_stdio(false);
        int q=1;
        // cin>>q;
        while(q--) test();
    }