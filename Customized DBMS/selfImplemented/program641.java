import java.util.*;
class program641 {
    public static void main(String[] args) {
        System.out.println("+++++++++++++++++++++++Customized DataBase Management System+++++++++++++++++++++++++++++++++");

        LinkedList <Integer> lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(22);
        lobj.add(33);
        lobj.add(44);

        System.out.println(lobj);

        System.out.println("Number of Elements :"+lobj.size());
        for(int no : lobj)
        {
            System.out.println(no);
        }
    }
}
