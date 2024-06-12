#include<iostream>
using namespace std;
int SumFactors(int iNo)
{
    int iCnt  = 0;
    int iSum = 0;
    for (int iCnt  = 1; iCnt <iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum = iSum +iCnt;
        }
        return iSum;
         
    }

}
int main(int argc, char** argv)
{
    int iValue=0;
    int iRet = 0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;
    iRet = SumFactors(iValue);
    cout<<"Addition of Factors is : "<<iRet<<endl;


}