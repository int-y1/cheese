// array of vectors
int gfree=1;        // free idx
int g0[100005];     // head
int g1[100005];     // next
int gv[100005];     // value
#define pb(x,y) do{gv[gfree]=y;g1[gfree]=g0[x];g0[x]=gfree++;}while(0)

// with better locality
int gfree=1;        // free idx
int g0[100005];     // head
struct _g{int nxt,v,w;} g1[100005];     // next
#define pb(x,y,z) do{g1[gfree]=(struct _g){g0[x],y,z};g0[x]=gfree++;}while(0)



// gp_hash_table
#include <ext/pb_ds/assoc_container.hpp>
__gnu_pbds::gp_hash_table<int,__gnu_pbds::null_type> hh;
// check existence: hh.find(x) != hh.end()

// less hackable gp_hash_table
#include <chrono>
const int RANDOM=std::chrono::high_resolution_clock::now().time_since_epoch().count();
struct chash{int operator()(int x) const {return x^RANDOM;}};
__gnu_pbds::gp_hash_table<int,__gnu_pbds::null_type,chash> hh;
