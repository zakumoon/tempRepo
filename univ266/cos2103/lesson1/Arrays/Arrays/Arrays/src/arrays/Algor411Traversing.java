/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package arrays;

/**
 *
 * @author ComSCIv3400
 */
public class Algor411Traversing {
  public static void main(String args[]){
      final int UB=10;
      int LB=0;      
      int LA[]={11,22,33,44,55,66,77,88,99,1010}; //new int[UB];     //Step 1
      for (int K= LB;K<=(UB-1);K++){            //Step 2 
        System.out.println(LA[K]); //Apply PROCESS to LA[K] 
      }                         //end of Step 2
  }      
}                               //Exit
