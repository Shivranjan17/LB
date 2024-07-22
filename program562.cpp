#include<iostream>
using namespace std;
template<class T>

class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(T Value);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(T Value);
        bool BiDirectionalSearch(T Value);
        bool BinarySearch(T Value);
        void BubbleSort();
};
template<class T>
ArrayX<T>::ArrayX(T Value)
{
    this->iSize = Value;
    this->Arr = new T[iSize];
}
template<class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}
template<class T>
void ArrayX<T>::Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}
template<class T>
void ArrayX<T>::Display()
{
    int i = 0;

   
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
}
template<class T>
bool ArrayX<T>::LinearSearch(T Value)
{
    bool flag = false;
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            flag = true;
            break;
        }

    }
    return flag;

}

template<class T>
bool ArrayX<T>::BiDirectionalSearch(T Value)
{
    int iStart = 0;
    int iEnd = 0;
    bool flag = false;
    for(iStart = 0, iEnd = iSize-1;iStart <= iEnd; iStart++,iEnd--)
    {
        if(Arr[iStart] == Value||Arr[iEnd] == Value)
        {
            flag = true;
            break;
        }
        
    }

    
    return flag;
}

template<class T>
bool ArrayX<T>::BinarySearch(T Value)
{
    int iStart = 0;
    int iEnd = 0;
    int iMid = 0;
    bool flag = false;
    iStart = 0;
    iEnd = iSize-1;
    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart)/2);
        if((Arr[iMid] == Value)||(Arr[iStart] == Value)||(Arr[iEnd] == Value))
        {
            flag = true;
            break;
        }
        else if(Arr[iMid] > Value)//change 
        {
            iStart = iMid + 1;
        }
        else if(Arr[iMid] < Value)//change
        {
            iEnd = iMid - 1;
        }
    }
}

template<class T>
void ArrayX<T>::BubbleSort()
{
    T temp ;
    int i = 0;
    int j = 0;
    //     1            2       3
    for (int i = 0; i <iSize-1; i++)//outer//change
    {
        //   1            2            3
        for (int j = 0; j < iSize - 1-i; j++)//inner//change in this line
        {
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];          //swapping logic
                Arr[j] = Arr[j + 1];    //swapping logic
                Arr[j + 1] = temp;      //swapping logic
        }
    }
    cout<<"\nArray after pass :"<<i+1<<"\n";
    Display();
    }

}
int main()
{
    int iLength = 0;
  
    

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX<int> *aobj = new ArrayX<int>(iLength);

    aobj->Accept();
    cout<<"\nData  Before Sorting : \n";
    aobj->Display();
   
    

    aobj->BubbleSort();
    cout<<"Data  After Sorting : \n";
    aobj->Display();
    delete aobj;

    
    return 0;
}