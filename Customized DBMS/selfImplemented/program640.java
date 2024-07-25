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

class program640 {
    public static void main(String[] args) {
        System.out.println("+++++++++++++++++++++++Customized DataBase Management System+++++++++++++++++++++++++++++++++");

        Employee eobj1 = new Employee( "John Doe", "1234 Elm Street", 50000);
        Employee eobj2 = new Employee( "Shiv", "Pune", 5000000);
        Employee eobj3 = new Employee( "Tuhin", "Kothrud", 1500000);
        Employee eobj4 = new Employee( "Parth", "Nagpur", 1000000);

        eobj1.DisplayInfo();
        eobj2.DisplayInfo();
        eobj3.DisplayInfo();
        eobj4.DisplayInfo();
    }
}
