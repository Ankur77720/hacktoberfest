#include<iostream>
using namespace std;
class cir
{
    public:
        int r;
        float a, c;

       float cir1(int *i)
        {
            c = (3.14 * (*i) * (*i));
            return (c);
        }
        float cir2(int r1)
        {
            a = (3.14 * r1 * r1);
            return (a);
        }
};

int main()
{
    int i;
    cout << "Enter radius of circle : ";
    cin >> i;
    cir ankur ;
   cout<<"Area of circle by value "<< ankur.cir1(&i)<<endl;
   cout<<"Area of circle by reeference "<< ankur.cir2(i)<<endl;
}