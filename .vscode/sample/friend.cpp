#include <iostream>
using namespace std;
class Box
{
private:
int length;//agr nhi use karenge to length will be inaccessible
public:
Box(): length(0) { }//constructor
int printLength(Box); //friend function
};
int printLength(Box b)
{
b.length += 100;
return b.length;
}
int main()
{
Box b;
cout<<"Length of box: "<< printLength(b)<<endl;
return 0;}