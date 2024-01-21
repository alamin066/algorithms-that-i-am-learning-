
#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   int best=-1e18;
   int past=0;
   for(int i=0;i<n;i++)
   {
     if(past+a[i]>=a[i])
    past=past+a[i];
    else

       past=a[i];
       best=max(past,best);

  }
 cout<<best;
}
