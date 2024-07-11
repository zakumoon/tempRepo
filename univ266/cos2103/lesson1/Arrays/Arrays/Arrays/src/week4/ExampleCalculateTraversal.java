/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package week4;

/**
 *
 * @author PC
 */
public class ExampleCalculateTraversal {
    static int salary[] = new int[20];
    static int total=0;
    
    public static void main(String args[]){
        salary[0]=1234; salary[1]=3456; salary[2]=3456; salary[3]= 5678; 
        salary[4]=4444; salary[5]=3456; salary[6]=3456; salary[7]= 5678;
        salary[8]=3456; salary[9]=3456; salary[10]= 5678; salary[11]= 5678;
        salary[12]=3456; salary[13]=3456; salary[14]= 5678; salary[15]= 5678;
        salary[16]=3456; salary[17]=3456; salary[18]= 5678; salary[19]= 5678;
        TraversingArr(salary, 0, 20);
        System.out.println("Final Total:"+total);
    }
    
    public static void TraversingArr(int LA[], int LB, int UB){
      int K=LB;                 //Step 0
      while (K<=(UB-1)){            //Step 2          
        total = total+LA[K];  
        System.out.println("total:"+total); //Apply PROCESS to LA[K] 
        K++;
      }                         //end of Step 2
  }
    
}
