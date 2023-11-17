import java.util.*;
class ItemType
{
    public String name;
    public double deposit;
    public double costPerDay;
    ItemType(String a,double b,double c)
    {
        this.name=a;
        this.deposit=b;
        this.costPerDay=c;
    }
    public void setname(String a)
    {
        this.name=a;
    }
    public void setdeposit(double b)
    {
        this.deposit=b;
    }
    public void setcostPerDay(double c)
    {
        this.costPerDay=c;
    }
    public String getname()
    {
        return name;
    }
    public double getdeposit()
    {
        return deposit;
    }
    public double getcost()
    {
        return costPerDay;
    }
}

class ItemTypeBO
{
    public void search(String se,ItemType[] itemTypeArray,int n)
    {
        int f=0,ind;
        for(int i=0;i<n;i++)
        {
            if(itemTypeArray[i].name.equalsIgnoreCase(se))
            {
                f=1;
                System.out.println(itemTypeArray[i].name+" "+itemTypeArray[i].deposit+" "+itemTypeArray[i].costPerDay);
            }
        }
        if(f==0)
        {
            System.out.println("Searched item Type not found");
        }
    }
    public void display(ItemType[] itemTypeArray,int n)
    {
        for(int i=0;i<n;i++)
        {
            System.out.println(itemTypeArray[i].name+" "+itemTypeArray[i].deposit+" "+itemTypeArray[i].costPerDay);
        }
    }
}

class main
{
    public static void main(String dfdf[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        ItemType itemTypeArray[]=new ItemType[n];
        String a;
        int b,c;
        for(int i=0;i<n;i++)
        {
            a=s.next();
            b=s.nextInt();
            c=s.nextInt();
            itemTypeArray[i]=new ItemType(a,b,c);
        }
        String se=s.next();
        ItemTypeBO I=new ItemTypeBO();
        I.search(se,itemTypeArray,n);
        I.display(itemTypeArray,n);
    }
}
