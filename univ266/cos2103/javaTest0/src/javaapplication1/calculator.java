/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication3;

/**
 *
 * @author zk
 */
public class calculator {
  public static void main(String avgs[]){
  
    int n1 = 50;
    int n2 = 10;
    System.out.println(plus( n1, n2));
    System.out.println(multi(n1, n2));
    System.out.println(han(n1, n2));

    int total = plus(49 , 181);
    System.out.println(total);
  } 
  public static int plus(int x, int y){
    return x + y;
  }
  public static float multi(int x, int y){
    return x * y;
  }
public static float han(int x, int y){
    return x / y;
  }


}
