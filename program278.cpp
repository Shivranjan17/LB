#include<iostream>
using namespace std;

void Display(int iNo)
{
    
    while( 1 <=iNo)
    {
        cout<<iNo<<endl;
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    cout<<"Enter number :"<<endl;
    cin >> iValue;
    Display(iValue);
    cout<<"End of application"<<endl;
    return 0;

}