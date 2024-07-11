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
public class MethodConcept {
  
    public static void main(String args[]){
        showName();
        showName("สมใจ","สมนึก");
        int r = mytotal(12,30);
        System.out.println(r);

    }
    
    public static void showName(){
       System.out.println("สวัสดี ฉันคือฉัน");    
    }
    public static void showName(String name, String surname){
       System.out.println("สวัสดี ฉันคือ"+name+"  "+surname);    
    } 
    public static int mytotal(int x,int y){
        int z=x+y;
        return z;
    } 
}
