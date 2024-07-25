import java.util.*;
class Employee {
    public int EID; //characteristics
    public String EName; //characteristics
    public String EAddress; //characteristics
    public int ESalary; //characteristics

    private static int Counter;
    static 
    {
        Counter = 0;
    }

    public Employee( String B, String C, int D) {
        this.EID = ++Counter;
        this.EName = B;
        this.EAddress = C;
        this.ESalary = D;
    }

    void DisplayInfo() {
        System.out.println("EID: " + EID + " Name: " + EName + " Address: " + EAddress + " Salary: " + ESalary);
    }
}
class MarvellousDBMS
{
    
    public MarvellousDBMS()//constructor of MarvellousDBMS
    {
        
    }
}
class program642 {
    public static void main(String[] args) {
        System.out.println("+++++++++++++++++++++++Customized DataBase Management System+++++++++++++++++++++++++++++++++");

        MarvellousDBMS mobj = new MarvellousDBMS();
        LinkedList <Employee> lobj = new LinkedList<Employee>();

        Employee eobj1 = new Employee("Sagar","Pune",21000);
        Employee eobj2 = new Employee("pooja","satara",19000);

        lobj.add(eobj1);
        lobj.add(eobj2);

        for (Employee eref : lobj)
        {
            eref.DisplayInfo();
        }
    
    }
}
