#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll ifEven(ll a){
    return (a/2);
}

ll ifOdd(ll a){
    return ((a*3)+1);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll n;
    cin >> n;

    vector <ll> ans;
    ans.push_back(n);

    while (n!=1){
        if (n%2==0){
            n=ifEven(n);
            ans.push_back(n);
        }
        else{
            n=ifOdd(n);
            ans.push_back(n);
        }
    }

    for (auto x = ans.begin(); x != ans.end(); ++x)
    {
        cout << *x << " ";
    }
    
return 0;

}