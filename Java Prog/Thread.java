class NewThread implements Runnable
{
  Thread t;
  //Creating and starting a new thread. Passing this to the
  // Thread constructor – the new thread will call this
  // object’s run method:
  NewThread()
  {
    t = new Thread(this, "Demo Thread");
    System.out.println("Child thread: " + t);
    t.start();
  }
  //This is the entry point for the newly created thread – a five-iterations loop
  //with a half-second pause between the iterations all within try/catch:
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
class ThreadDemo
{
  public static void main(String args[])
  {
    //A new thread is created as an object of
    // NewThread:
    new NewThread();
    //After calling the NewThread start method,
    // control returns here.
    //Both threads (new and main) continue concurrently.
    //Here is the loop for the main thread:
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
