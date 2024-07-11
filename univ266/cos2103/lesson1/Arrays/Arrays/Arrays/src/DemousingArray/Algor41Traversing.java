/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package DemousingArray;

//import arrays.*;

/**
 *
 * @author ComSCIv3400
 */
public class Algor41Traversing {
    final static int UB=10;
    static int LB=0;      
    static int LA[]={11,22,33,44,55,66,77,88,99,1010}; //new int[UB];     //Step 1
  
  public static void main(String args[]){
        TraversingArr();
        int x[]={10,20,30,40,50};
        TraversingArr(x,0,5);
  }
  
  public static void TraversingArr(){
      int K=LB;                 //Step 0
      while (K<=(UB-1)){            //Step 2 
        System.out.print(LA[K]+","); //Apply PROCESS to LA[K] 
        K++;
      }                         //end of Step 2
  } 
  
  public static void TraversingArr(int LA[], int LB, int UB){
      int K=LB;                 //Step 0
      while (K<=(UB-1)){            //Step 2 
        System.out.print(LA[K]+","); //Apply PROCESS to LA[K] 
        K++;
      }                         //end of Step 2
  }
  
}                               //Exit
