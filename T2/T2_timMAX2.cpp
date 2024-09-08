#include <iostream>
using namespace std;

int main () {
    float a,b,c,d,e, maxx, maxx2, minn;
    cin >> a >> b >> c >> d >> e;
    maxx=a;
    minn=a;

    // Tìm số lớn nhất
    if (b>maxx) { maxx=b;}
    if (c>maxx) { maxx=c;}
    if (d>maxx) { maxx=d;}
    if (e>maxx) { maxx=e;}

    // Tìm số nhỏ nhất
    if (b<minn) { minn=b;}
    if (c<minn) { minn=c;}
    if (d<minn) { minn=d;}
    if (e<minn) { minn=e;}

    // Tìm số lớn thứ 2
    maxx2=minn;
    if (b>maxx2 && b!=maxx) { maxx2=b;}
    if (c>maxx2 && c!=maxx) { maxx2=c;}
    if (d>maxx2 && d!=maxx) { maxx2=d;}
    if (e>maxx2 && e!=maxx) { maxx2=e;}

    cout << maxx2;
}