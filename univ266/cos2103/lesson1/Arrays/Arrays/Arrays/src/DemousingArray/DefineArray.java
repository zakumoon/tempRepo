/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DemousingArray;

/**
 *
 * @author PC
 */
public class DefineArray {

    static int x[] = new int[5];
    static int a[];
    static String name[]=new String[5];
    
    public static void main(String arg[]) {
        float y[]= new float[5];
        double z[]={3.4,5.0,6.9};
       // int a[];
        x[0] = 30;
        x[1] = 50;
        x[2] = 130;
        x[3] = 150;
        x[4] = 30;
        System.out.println(x[0]);
        System.out.println(x[1]);
        System.out.println(x[2]);
        System.out.println(x[3]);
        System.out.println(x[4]);
        y[0] = 12.5f;
        System.out.println(z[2]);
        a  = new int[5];
        name[0] = "สมใจ"; 
        name[1] = "Somkit";
        System.out.println(name[0]+"  "+name[1]);
    }
//   static int x[] = new int[5];
//    static int a[]; 
}
