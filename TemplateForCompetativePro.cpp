#include <bits/stdc++.h>
using namespace std;

#define ll long long
template <typename T>
class CPoint
{
public:
    T x, y, z;
    CPoint(T tempx, T tempy, T tempz)
    {
        x = tempx;
        y = tempy;
        z = tempz;
    }
    CPoint Sum(CPoint<T> b)
    {
        return CPoint(this->x + b.x, this->y + b.y, this->z + b.z);
    }
    CPoint operator+(CPoint<T> b)
    {
        return CPoint(this->x + b.x, this->y + b.y, this->z + b.z);
    }

    CPoint &operator+=(CPoint<T> b)
    {
        *this = *this + b;
        return *this;
    }
};
int lcm(int a, int b)
{
    ll a0 = a;
    ll b0 = b;
    return a0 * b0 / __gcd(a0, b0);
}

// Dot Product of two vectors
template <typename T>
T DotProduct(CPoint<T> a, CPoint<T> b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
template <typename T>
double Angle(CPoint<T> a, CPoint<T> b)
{
    // a, a is a magnitude of vector a and b, b is magnitude of b
    // while DotProduct (a,b) is dot product of vectors
    // acos means inverse of cos
    // below will give us value in degrees 
    // return acos(DotProduct(a, b) / sqrt(DotProduct(a, a) * DotProduct(b, b)));

    // If we want our value in radians so mulutiply equation by 180/3.14159
    return acos(DotProduct(a,b)/sqrt(DotProduct(a,a)*DotProduct(b,b)))*180/3.14159;
}
int main()
{
    cout << lcm(2, 4);
    /*
    This Code is for LCM
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << lcm(lcm(a, b),c);
    */
    // ll x0, y0, z0, x1, y1, z1;
    // cin >> x0 >> y0 >> z0 >> x1 >> y1 >> z1;

    // CPoint a(x0, y0, z0);
    // CPoint b(x1, y1, z1);
    // CPoint<double> a(x0, y0, z0);
    // CPoint<double> b(x1, y1, z1);

    /*
    // Bellow code will take the a's first variabe and add class x variable
    cout << a.Sum(b).x << " " << a.Sum(b).y << " " << a.Sum(b).z <<endl;

    // Bellow code first call the plus fuction on the a where b is object
    cout << (a+b).x << " " << (a+b).y << " " << (a+b).z;

    a+=b;   // This means that we want to add each element with b's each element
    cout << endl <<(a.x) << " " << (a.y) << " " << (a.z);
    */
    // cout << Angle(a, b);
    return 0;
}