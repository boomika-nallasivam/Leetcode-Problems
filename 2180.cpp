#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long l,a,b;
        scanf("%lld %lld %lld",&l,&a,&b);
        long long g = std::__gcd(l,b);
        long long ans = a + ((l-1-a)/g)*g;
        printf("%lld\n", ans);
    }
}
