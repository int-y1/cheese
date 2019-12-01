// input reading in C (fastest)
#include <stdio.h>
#ifdef fread_unlocked
#define fread fread_unlocked
#endif
#define INPUT_SIZE (4<<20)
int _i0=0;
char _,_n,_i[INPUT_SIZE+5];
#define su(x) do{for(x=_i[_i0++]-48;47<(_=_i[_i0++]);x=x*10+_-48);}while(0)
#define si(x) do{_n=_i[_i0++];if(_n-45)x=_n;else x=_i[_i0++];for(x-=48;47<(_=_i[_i0++]);x=x*10+_-48);if(_n<46)x=-x;}while(0)
#define su2(x) do{while((_=_i[_i0++])<48);for(x=_-48;47<(_=_i[_i0++]);x=x*10+_-48);}while(0)
#define si2(x) do{while((_n=_i[_i0++])<45);if(_n-45)x=_n;else x=_i[_i0++];for(x-=48;47<(_=_i[_i0++]);x=x*10+_-48);if(_n<46)x=-x;}while(0)

int main()
{
    #ifdef NOT_DMOJ
    freopen("data.txt","r",stdin);
    #endif // NOT_DMOJ
    fread(_i,1,INPUT_SIZE,stdin);
}



// input+output reading in C (fastest, merged arrays)
#include <stdio.h>
#include <string.h>
#ifdef fread_unlocked
#define fread fread_unlocked
#endif
#ifdef fwrite_unlocked
#define fwrite fwrite_unlocked
#endif
#define INPUT_SIZE (4<<20)
#define IO_SIZE (4<<20)
int _i0=0,_o0=0;
char _,_n,__[12],_i[IO_SIZE+5];
#define su(x) do{for(x=_i[_i0++]-48;47<(_=_i[_i0++]);x=x*10+_-48);}while(0)
#define si(x) do{_n=_i[_i0++];if(_n-45)x=_n;else x=_i[_i0++];for(x-=48;47<(_=_i[_i0++]);x=x*10+_-48);if(_n<46)x=-x;}while(0)
#define su2(x) do{while((_=_i[_i0++])<48);for(x=_-48;47<(_=_i[_i0++]);x=x*10+_-48);}while(0)
#define si2(x) do{while((_n=_i[_i0++])<45);if(_n-45)x=_n;else x=_i[_i0++];for(x-=48;47<(_=_i[_i0++]);x=x*10+_-48);if(_n<46)x=-x;}while(0)
void pu(int x) {_=0;do __[_++]=x%10;while(x/=10);while(_--)_i[_o0++]=__[_]+'0';}
void pi(int x) {if(x<0){_i[_o0++]='-';x=-x;}_=0;do __[_++]=x%10;while(x/=10);while(_--)_i[_o0++]=__[_]+'0';}
#define put(s) do{int t=strlen(s);memcpy(_o+_o0,s,t);_o0+=t;}while(0)

int main()
{
    #ifdef NOT_DMOJ
    freopen("data.txt","r",stdin);
    #endif // NOT_DMOJ
    fread(_i,1,INPUT_SIZE,stdin);
    fwrite(_i,1,_o0,stdout);
}



// input+output reading in C (slower, unmerged i/o arrays)
#include <stdio.h>
#include <string.h>
#ifdef fread_unlocked
#define fread fread_unlocked
#endif
#ifdef fwrite_unlocked
#define fwrite fwrite_unlocked
#endif
#define INPUT_SIZE (4<<20)
#define OUTPUT_SIZE (2<<20)
int _i0=0,_o0=0;
char _,_n,__[12],_i[INPUT_SIZE+5],_o[OUTPUT_SIZE+5];
#define su(x) do{for(x=_i[_i0++]-48;47<(_=_i[_i0++]);x=x*10+_-48);}while(0)
#define si(x) do{_n=_i[_i0++];if(_n-45)x=_n;else x=_i[_i0++];for(x-=48;47<(_=_i[_i0++]);x=x*10+_-48);if(_n<46)x=-x;}while(0)
#define su2(x) do{while((_=_i[_i0++])<48);for(x=_-48;47<(_=_i[_i0++]);x=x*10+_-48);}while(0)
#define si2(x) do{while((_n=_i[_i0++])<45);if(_n-45)x=_n;else x=_i[_i0++];for(x-=48;47<(_=_i[_i0++]);x=x*10+_-48);if(_n<46)x=-x;}while(0)
void pu(int x) {_=0;do __[_++]=x%10;while(x/=10);while(_--)_o[_o0++]=__[_]+'0';}
void pi(int x) {if(x<0){_o[_o0++]='-';x=-x;}_=0;do __[_++]=x%10;while(x/=10);while(_--)_o[_o0++]=__[_]+'0';}
#define put(s) do{int t=strlen(s);memcpy(_o+_o0,s,t);_o0+=t;}while(0)

int main()
{
    #ifdef NOT_DMOJ
    freopen("data.txt","r",stdin);
    #endif // NOT_DMOJ
    fread(_i,1,INPUT_SIZE,stdin);
    fwrite(_o,1,_o0,stdout);
}



// output in C (fastest), uncommon
#include <stdio.h>
#include <string.h>
#ifdef fwrite_unlocked
#define fwrite fwrite_unlocked
#endif
#define OUTPUT_SIZE (2<<20)
int _o0=0;
char _,__[12],_o[OUTPUT_SIZE+5];
void pu(int x) {_=0;do __[_++]=x%10;while(x/=10);while(_--)_o[_o0++]=__[_]+'0';}
void pi(int x) {if(x<0){_o[_o0++]='-';x=-x;}_=0;do __[_++]=x%10;while(x/=10);while(_--)_o[_o0++]=__[_]+'0';}
#define put(s) do{int t=strlen(s);memcpy(_o+_o0,s,t);_o0+=t;}while(0)

int main()
{
    #ifdef NOT_DMOJ
    freopen("data.txt","r",stdin);
    #endif // NOT_DMOJ
    fwrite(_o,1,_o0,stdout);
}



// reading in C++ (slower)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef NOT_DMOJ
    freopen("data.txt","r",stdin);
    #endif // NOT_DMOJ
    cin.sync_with_stdio(0);
    cin.tie(0);
}
