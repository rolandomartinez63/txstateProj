package threesolid;

import java.awt.*;        // Using AWT container and component classes
import java.awt.event.*;  // Using AWT event classes and listener interfaces
import java.io.*;

class Manager {
    /* methods: manage(), setWorker()
     *
     * Manager keeps in mind the single responsibility by only including responsibilities that only a manger would have and not others that can be implemented
     * worker
     *
     * Manager class does not apply to the interface segregation principle
     *
     * Manager class keeps in mind the open/close principle since it will be made to allow extensions
     */

    BaseWorker worker;
    
    public void setWorker (BaseWorker w) {
        worker = w;
        System.out.println("I just set a worker to work.");
    }

    public void manage () {
        worker.work();
        System.out.println("I am managing a worker.");
    }

}

class ProjectManager extends Manager {

    public void scheduleWork (BaseWorker w) {  
    	System.out.println("I am scheduling work.");
    }

}

class ProductManager extends Manager{

    public void defineProduct() {  
    	System.out.println("I am defining a product.");
    }
    
}
