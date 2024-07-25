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
        System.out.println(EID+"\t"+EName+"\t\t"+EAddress+"\t\t"+ESalary);

    }
}
class MarvellousDBMS
{
    public LinkedList<Employee> lobj;
    public MarvellousDBMS()//constructor of MarvellousDBMS
    {
        System.out.println("Marvellous DBMS started successfully......");
        lobj = new LinkedList<Employee>();
    }

    //Insert into Employee values(1,"Sagar","Pune",11000);
    public void InsertIntoTable(String name,String Address ,int Salary)
    {
        Employee obj = new Employee(name,Address,Salary);
        lobj.add(obj);
    }

    //select *from employee
    public void SelectStar()
    {
        System.out.println("Data from the Employee Database :");
        System.out.println("-----------------------------------------------------------------");
        System.out.println("EID\tEname\t\tEaddress\t\tESalary");
        System.out.println("-----------------------------------------------------------------");

        for(Employee eref : lobj)
        {
            eref.DisplayInfo();
        }
    }

    //Select * from employee where Eid = 3;
    public void SelectSpecific(int ID)
    {
        System.out.println("Information of Employee whose EID is : "+ID);
        for(Employee eref : lobj)
        {
            if(eref.EID == ID)
            {
                eref.DisplayInfo();
                break;
            }
        }
    }

    //Select * from employee where Ename = sagar;
    public void SelectSpecific(String Name)
    {
        System.out.println("Information of Employee whose Name is : "+Name);
        for(Employee eref : lobj)
        {
            if(Name.equals(eref.EName))
            {
                eref.DisplayInfo();
                break;
            }
        }
    }

    //delete from employee where EID = 3;
    public void DeleteFrom(int ID)
    {
        int index = 0;
        boolean bFlag = false ;
        for(Employee eref : lobj)
        {
            if(eref.EID == ID)
            {
                bFlag = true;
                break;
            }
            index++;
        }
        if (bFlag == false)
        {
            System.out.println("Employee with EID : "+ID+" not found");
        }
        else
        {
            lobj.remove(index);
            System.out.println("Employee with EID : "+ID+" deleted");
        }
    
    }

    //delete from employee where Name;
    public void DeleteFrom(String Name)
    {
        int index = 0;
        boolean bFlag = false ;
        for(Employee eref : lobj)
        {
            if(Name.equals(eref.EName))
            {
                bFlag = true;
                break;
            }
            index++;
        }
        if (bFlag == false)
        {
            System.out.println("Employee with EID : "+Name+" not found");
        }
        else
        {
            lobj.remove(index);
            System.out.println("Employee with EID : "+Name+" deleted");
        }
    
    }

    //select sum(ESalary) from employee;
    public void Aggregrate()
    {
        int iSum = 0;
        for(Employee eref : lobj)
        {
            iSum += eref.ESalary;
        }
        System.out.println("Sum of all Employee Salary : "+iSum);


    }

    // Select Max(ESalary) from Employee;
    public void AggregateMax()
    {
        int iMax = 0;

        for(Employee eref : lobj)
        {
            if(eref.ESalary > iMax)
            {
                iMax = eref.ESalary;
            }
        }

        System.out.println("Maximum salary : "+iMax);
    }

    // Select Min(ESalary) from Employee;
    public void AggregateMin()
    {
        Employee temp = lobj.get(0);

        int iMin = temp.ESalary;

        for(Employee eref : lobj)
        {
            if(eref.ESalary < iMin)
            {
                iMin = eref.ESalary;
            }
        }

        System.out.println("Minimum salary : "+iMin);
    }

    // Select Avg(ESalary) from Employee;
    public void AggregateAvg()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum + eref.ESalary;
        }

        System.out.println("Average salary : "+(iSum / lobj.size()));
    }

    // Select Count(ESalary) from Employee;
    public void AggregateCount()
    {
        System.out.println("Number of Employees: "+lobj.size());
    }
}
   


class program643 {
    
    public static void main(String[] args) {
        System.out.println("+++++++++++++++++++++++Customized DataBase Management System+++++++++++++++++++++++++++++++++");
       

        MarvellousDBMS mobj = new MarvellousDBMS();
        mobj.InsertIntoTable("Sagar","Mumbai",11000);
        mobj.InsertIntoTable("Shiv","Pune",20000);
        mobj.InsertIntoTable("Chinmeeye","Pune",12000);
        mobj.InsertIntoTable("puja","Pusad",13000);
        mobj.InsertIntoTable("Udayrage Deshmukh ","Makegaon talika Ambejogai",140000);
      

        mobj.SelectStar();
        mobj.SelectSpecific(3);
        mobj.SelectSpecific("Sagar");
        mobj.DeleteFrom(4);
        mobj.SelectStar();
        mobj.DeleteFrom(7);

        mobj.DeleteFrom("puja");
        mobj.SelectStar();

        mobj.Aggregrate();
        mobj.AggregateAvg();
        mobj.AggregateCount();
        mobj.AggregateMax();
        mobj.AggregateMin();



}
}
