import java.util.*;


public class program207 
{
    public static int Difference(int iNo)
    {
        int iCnt = 0,iSumF = 0,iSumN = 0;
        for (iCnt = 1;iCnt<iNo;iCnt++)
        {
            if((iNo%iCnt )==0)
            {
                iSumF =iSumF+iCnt;

            }
            else{
                iSumN = iSumN + iCnt;
            }
        }
        return iSumN- iSumF;

    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0,iRet = 0;
        System.out.println("Enter Number :");
        iValue = sobj.nextInt();
        iRet = Difference(iValue);
        System.out.println("Difference between sum of factors and non factors is :"+iRet);

    }
    
}
