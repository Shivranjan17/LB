import java.util.*;
public class program667 {
    public static void main(String[] args) {
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter string :");
            String str = sobj.nextLine();
            char Arr[] = str.toCharArray();
            HashMap <Character,Integer> hobj = new HashMap<Character,Integer>();
            int Frequency = 0;
            for(char ch : Arr)
            {
                if(hobj.containsKey(ch))
                {
                    Frequency = hobj.get(ch);
                    hobj.put(ch,Frequency+1);

                }
                else
                {
                    hobj.put(ch,1);

                }

            }
            System.out.println(hobj);
        }
    
}
}


//put(key,Value)
//get(key,Value)
//containsKey(key)