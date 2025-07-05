#include<iostream>
using namespace std;

struct rectangle
{
    int length ;
    float breadth ;
};

int main ()
{
    // struct rectangle r;
    struct rectangle r = {3,5.6};
    r.length=2;
    cout<<r.length*r.breadth;
}