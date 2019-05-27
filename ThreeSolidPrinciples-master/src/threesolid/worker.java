package threesolid;

import java.awt.*;        // Using AWT container and component classes
import java.awt.event.*;  // Using AWT event classes and listener interfaces
import java.io.*;


class BaseWorker {
    public String work() {
        return "I am working..";
    }
}

class Worker extends BaseWorker implements IEat, ISick {

    public void eat() {
        System.out.println("I am eating.");
    }

    public void sick() {
        System.out.println("I am sick.");
    }
}

class SuperWorker extends BaseWorker implements IEat, ISick{
    public String work() {
        return "Super worker working much more!";
    }

    public void eat() {
        System.out.println("Super eating!");
    }

    public void sick() {
        System.out.println("I am super sick.");
    }
}

class TempWorker extends BaseWorker implements IEat, ISick{
    public String work() {
        return "I am working part time.";
    }

    public void eat() {
        System.out.println("I am temporarily eating.");
    }

    public void sick() {
        System.out.println("I am temporarily sick.");
    }
}