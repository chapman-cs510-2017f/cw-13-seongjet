#include <iostream>
#include "structs.h"

using namespace std;

int main(void)
{
    // The default constructor for a struct just zeroes the values
    Vec3 v = Vec3();
    Vec3 vprime = Vec3();
    Vec2 w = Vec2();
    
    cout << "-----Pass by value test-----" << endl;
    cout << "Original 3 vector:" << endl;
    print_vec(v);
    vprime = set_vec(v, 1.0, 2.0, 3.0);
    cout << "Original 3 vector after modification:" << endl;
    print_vec(v);
    cout << "New 3 vector after modification:" << endl;
    print_vec(vprime);
    
    cout << "-----Pass by reference test-----" << endl;
    cout << "Original 2 vector:" << endl;
    print_vec(w);
    set_vec(w, 1.0, 2.0);
    cout << "Original 2 vector after modification:" << endl;
    print_vec(w);

    return 0;
}

Vec3 set_vec(Vec3 v, Component x, Component y, Component z)
{
    // Local value v is a copy of the original v
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

void set_vec(Vec2 &wr, Component x, Component y)
{
    // Local reference wr refers directly to original memory location
    wr.x = x;
    wr.y = y;
}

void print_vec(const Vec3 v)
{
    cout << "3-Vector : [" << v.x << ", " << v.y << ", " << v.z << "]" << endl;
}

void print_vec(const Vec2 &wr)
{
    // Passing in a reference wr prevents unnecessary memory copying
    cout << "2Vector : [" << wr.x << ", " << wr.y << "]" << endl;
}

//TODO : Implement overloaded + operators
