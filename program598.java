import java.util.*;
class problem598
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner (System.in);
        System.out.println("Enter String :");
        String str = sobj.nextLine();
        str = str.trim();
        str = str.replaceAll("\\s+"," ");
        String Arr[] = str.split(" ");
         
        System.out.println("Words from thr string are :" +Arr.length);

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println("length of :"+Arr[i].length() );
        }


       

    
}
}