package threesolid;

import java.awt.*;        // Using AWT container and component classes
import java.awt.event.*;  // Using AWT event classes and listener interfaces
import java.io.*;

public class ThreeSolidMain
{

    public static Manager tsManager = new Manager();
    public static ProjectManager pjManager = new ProjectManager();
    public static ProductManager pdManager = new ProductManager();
    
    // The entry main() method
    // Applies to Single Responsibility Principle since only main class will be in this file and it acts as an implementation of other classes
    // Interface Segregation Principle and Open Close Principle doesn't apply to main
    
    public static void main(String[] args)
    {
    	
    	Manager tsManager = new Manager();
        ProjectManager pjManager = new ProjectManager();
        ProductManager pdManager = new ProductManager();

        try
        {
            System.out.format("Starting ... \n");
            System.out.print("\n");
        }
        catch (Exception main_except)
        {
            main_except.printStackTrace();
        }
        
        Worker worker = new Worker();
        SuperWorker sWorker = new SuperWorker();
        TempWorker tWorker = new TempWorker();
        Robot robot = new Robot();
        
        System.out.format("This is a normal worker: \n");
        worker.work();
        worker.eat();
        System.out.format("\n");
        
        System.out.format("This is a super worker: \n");
        sWorker.work();
        sWorker.eat();
        System.out.format("\n");
        
        System.out.format("This is a temp worker: \n");
        tWorker.work();
        tWorker.eat();
        System.out.format("\n");
        
        System.out.format("This is a robot: \n");
        robot.work();
        robot.reboot();
        System.out.format("\n");
        
        tsManager.setWorker(worker);
        tsManager.manage();
        
        pdManager.defineProduct();
        pjManager.scheduleWork(robot);

        try
        {
            System.out.format("Stopping ... \n");
        }
        catch (Exception main_except)
        {
            main_except.printStackTrace();
        }

        System.exit(0);

    }
}
