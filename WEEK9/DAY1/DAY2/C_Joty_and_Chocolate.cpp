#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll a,ll b)
{
    return ((a*b)/__gcd(a,b));
}
int main()
{
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    ll adiyedivisible = (n/a);
    ll bdiyedivisible=(n/b);
    ll perjonnopay = adiyedivisible*p;
    ll qerjonnopay= bdiyedivisible*q;
    ll a_ar_b_duitadiye_divisible = n/lcm(a,b);
    ll a_ar_b_duita_erjono_pay = a_ar_b_duitadiye_divisible*(p+q);

    ll a_r_b_duitar_jonno_choose_korbe = a_ar_b_duitadiye_divisible*(max(p,q));
    ll ans =( (perjonnopay+qerjonnopay) - a_ar_b_duita_erjono_pay ) + a_r_b_duitar_jonno_choose_korbe ;
    cout<<ans<<endl;
    return 0;
}