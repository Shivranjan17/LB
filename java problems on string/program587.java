import java.util.*;
class problem587
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner (System.in);
        System.out.println("Enter String :");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        int iCnt = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            if (Arr[i]==' ')
            {
                iCnt++;
            }

        System.out.println("Number of white spaces are : "+str);
    }
}
}