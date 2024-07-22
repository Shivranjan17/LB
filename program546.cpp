#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int iSize;

    ArrayX(int Value)
    {
        this->iSize = Value;
        this->Arr = new int[iSize];
    }

    void Accept()
    {
        cout << "Enter the Elements:\n";
        for(int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }

    void Display()
    {
        cout << "Entered elements are:\n";
        for(int i = 0; i < iSize; i++)
        {
            cout << Arr[i] << "\n";
        }
    }
};

int main(int argc, char **argv)
{
    int iLength = 0;

    cout << "Enter the number of elements:\n";
    cin >> iLength;

     ArrayX *aobj = new ArrayX(iLength);
    
    aobj->Accept();
    aobj->Display();
    delete aobj;
    
    // Manually delete the allocated memory
    

    return 0;
}
