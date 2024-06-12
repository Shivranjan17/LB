//Approach 1 
//Do not use this syntax in interview always use Approach 3 in java
import java.util.*;

public class program199
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 , iValue2 = 0;
        int iAns = 0;
        System.out.println("Enter first number ");
        iValue1 = sobj.nextInt();
        System.out.println("Enter second number ");
        iValue2 = sobj.nextInt();//method to accept int 

        iAns = iValue1 + iValue2 ;
        System.out.println("Addition is : "+iAns );
    }
}

//int nextInt(),float nextFloat(),double nextDouble(),String nextLine()

