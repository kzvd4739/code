#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define long long long
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int>,null_type,less<pair<int,int> >,rb_tree_tag,tree_order_statistics_node_update> order_set;

order_set X;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  X.insert({3,1});
  X.insert({3,2});
  X.insert({3,4});
  X.insert({7,5});

  cout<<X.order_of_key({3,-1})<<endl;

  return 0;
}
