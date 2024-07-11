import java.io.*;
import java.net.*;

public class test{
  public static void main(String[] avgs){
    try{
      InetAddress[] address = InetAddress.getAllByName("www.watsrariangschool.ac.th");
      for(InetAddress address: address){
   
        System.out.println(address);
 //     System.out.println("Host name: " + ip.getHostName());
 //     System.out.println("Host name: " + ip.getHostAddress());
      }
    }catch (Exception ex){
      System.out.println(ex);
    }

  }
}
