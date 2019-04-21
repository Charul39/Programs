class NewThread extends Thread
{
  //Create a new thread by calling the Thread’s
  // constructor and start method:
  NewThread()
  {
    super("Demo Thread");
    System.out.println("Child thread: " + this);
    start();
  }
  //NewThread overrides the Thread’s run method:
  public void run()
  {
    try
    {
      for (int i = 5; i > 0; i--)
      {
        System.out.println("Child Thread: " + i);
        Thread.sleep(500);
      }
    }
    catch (InterruptedException e)
    {
      System.out.println("Child interrupted.");
    }
    System.out.println("Exiting child thread.");
  }
}
class ExtendThread
{
  public static void main(String args[])
  {
    //After a new thread is created:
    new NewThread();
    //the new and main threads continue
    //concurrently…
    //This is the loop of the main thread:
    try
    {
      for (int i = 5; i > 0; i--)
      {
        System.out.println("Main Thread: " + i);
        Thread.sleep(1000);
      }
    }
    catch (InterruptedException e)
    {
      System.out.println("Main thread interrupted.");
    }
    System.out.println("Main thread exiting.");
  }
}
