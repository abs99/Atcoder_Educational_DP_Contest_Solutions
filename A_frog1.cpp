#include<bits/stdc++.h>
#define ll long long int
#define LOG(X)cout<<X<<endl;
#define ff first 
#define ss second
#define mp(a,b) make_pair(a,b)
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],dp[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    dp[0]=0;
    dp[1]=abs(a[1]-a[0]);
    for(int i=2;i<n;i++){
       dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
    }
    cout << dp[n-1];
 return 0;
}