#include<bits/stdc++.h>
using namespace std;

int main(){
   
   #ifdef SANDEEP
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
   #endif
   long long int t;
   cin >> t;
   while(t--) {
    long long int W,H;
    cin >> W >> H;
    long long int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long int w, h;
    cin >> w >> h;
    long long int w1 ,h1;
    w1 = W-x2;
    h1 = H - y2;
    if (w1 +x1 < w && h1 + y1 < h){
        cout<< "-1"<<endl;
    }else{
        long long int  resx , resy;
        //resx
        if(w1 +x1 < w)resx = -1;
        else if (w1>=w||x1>=w) resx = 0;
        else resx = w - max(w1 , x1);

        //resy
        if(h1 + y1 < h) resy = -1;
        else if (h1 >= h || y1 >= h) resy = 0;
        else resy = h - max(h1 , y1);

        if(resx*resy > 0)cout<< min(resy,resx)<< endl;
        else if(resx*resy==0)cout << "0"<<endl;
        else if(resx > 0) cout << resx<<endl;
        else cout << resy << endl;
 /*
        long long int res=0;
        long long int temp1 = w - max(w1,x1);
        if(min(w1,x1)==0)temp1=0;
        long long int temp2 = h - max(h1,y1);
        if(min(h1,y1)==0)temp2=0;
        if(temp1 <=0 && temp2 <=0)
        cout << "0" << endl;
        else{
            if(temp1 <=0)
                cout<<temp2<<endl;
            else if (temp2 <= 0)
                cout<<temp1<<endl;
            else
                cout << min(temp2,temp1)<<endl;
        }

    }*/
    }

}
   return 0;
}