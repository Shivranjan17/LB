#include <iostream>
using namespace std;
//Approch 3 using Recussion
void Display()
{
     static int i = 1;
     if(i<= 4)
    {
        cout<<"*"<<endl;
        i++;
        Display();

    }
}
int main()
{
    Display();
    return 0;

}