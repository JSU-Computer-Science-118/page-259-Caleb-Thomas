// Caleb Thomas 11/9/22 J00986740
// Chapter 4 program num 7

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, root1, root2;
    cout << "To solve an qudratic equation, enter the coffeicents if a,b,c in this order";
    cin >> a >> b >> c;
    if (a == 0)
        cout << " It is not a quadratic equation";
    else
    {
        root1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
        root2 = (-b - sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);

        cout << "There are two roots";
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }
    if (a > 0)
       cout << "Has two real roots";
    else 
    {
        root1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
        root2 = (-b - sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);

        cout << "There are two real roots";
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }
     if (a < 0)
        cout << "Has two complex roots";
     else 
     {
         root1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
         root2 = (-b - sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);

         cout << "There are two complex roots";
         cout << "Root1 = " << root1 << endl;
         cout << "Root2 = " << root2 << endl;
     }
    return 0;
