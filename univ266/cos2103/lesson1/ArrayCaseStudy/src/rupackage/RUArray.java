/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package rupackage;

/**
 *
 * @author Dell
 */
public class RUArray {
    int DATA[];// = {11, 22, 33, 44, 55, 66, 77, 88, 99, 1010}; //new int[UB];     //Step 1
    int LB = 0;
    int UB = 0;
    int N = 0;
    int ITEM;
    //-------------------------------------------------

    public void ArrayTraverseWhile(int LB, int UB, int LA[]) {   //Algorithm Implemtation
        int K = LB;
        while (K <= (UB - 1)) {            //Step 2 
            System.out.print(LA[K] + ","); //Apply PROCESS to LA[K] 
           // jTextArea1.setText(jTextArea1.getText() + "\n" + LA[K]);
            K++;
        }
    }

    public void ArrayTraverseFor(int LB, int UB, int LA[]) {   //Algorithm Implemtation
        for (int K = LB; K <= (UB - 1); K++) {            //Step 2 
            System.out.print(LA[K] + ","); //Apply PROCESS to LA[K] 
         //   jTextArea1.setText(jTextArea1.getText() + "\n" + LA[K]);
        }                         //end of Step 2
    }

    /*public void ArrayTraverse2N(int LB, int UB, int LA[]) {   //Algorithm Implemtation
        for (int K = LB; K <= (UB - 1); K++) {            //Step 2 
            System.out.print(LA[K] + ","); //Apply PROCESS to LA[K] 
             jTextArea1.setText(jTextArea1.getText()+"\n"+LA[K]);
        }                         //end of Step 2
    }*/
    //-------------------------------------------------
    public void Insert(int K, int LA[], int ITEM) { //(int LA[], int N, int K, int ITEM ){  //Inserting Operation
        int J = N;
        while (J >= K) {
            LA[J + 1] = LA[J];
            J--;
        }//end of Step 2 loop
        LA[K] = ITEM;
        N++;
    }  //Exit

    public void Delete(int LA[], int K) { //(int LA[], int N, int K, int ITEM ){  //Inserting Operation
        ITEM = LA[K];
        for (int J = K; J < N - 1; J++) {
            LA[J] = LA[J + 1];
        }//end of Step 2 loop       
        N--;
    }  //Exit
    ///-----------------------------------
    //Search 1

    public int Search1(int ITEM, int DATA[]) {
        //เริ่มอัลกอริทึม
        DATA[N] = ITEM;
        int LOC = 0;
        while (DATA[LOC] != ITEM) {
            LOC++;
        }
        if (LOC == N) {
            LOC = -1;
            System.out.println("ไม่พบ");
        } else {
            System.out.println("พบที่ :" + LOC);
        }
        //จบอัลกอริทึม
        return LOC;
    }

    public int Search2(int ITEM, int DATA[]) {
        //เริ่มอัลกอริทึม
        int LOC = -1, I = 1;
        while (I <= N) {
            if (DATA[I] == ITEM) {
                LOC = I;
                return LOC; //คืนค่าเมื่อ พบ
            } else {
                I = I + 1;
            }
        } //end while 
        if (LOC == -1) {
            /// LOC = -1;
            System.out.println("ไม่พบ");
        } else {
            System.out.println("พบที่ :" + LOC);
        }
        //จบอัลกอริทึม
        return LOC;  //คืนค่า ไม่พบ -1
    }
    //--------------- เรียง
    public void Sort(){
          //เริ่มอัลกอริทึม
       for(int K=0; K<N-1;K++){    //K=0 เพราะจาวา เริ่ม 0 , วนจนถึง N-1 
          int PTR=0;
          while(PTR<((N-1)-K)){   //ต้องลดค่าลง 1 เสมอ
        //      System.out.println("รอบ :"+K+"N:"+N);
            if(DATA[PTR]>DATA[PTR+1]){
                int temp = DATA[PTR];  //Interchange 
                DATA[PTR]=DATA[PTR+1];
                DATA[PTR+1]=temp;
            }
            PTR++; 
          //  System.out.println("รอบ :"+PTR+"N:"+N+"PRT:"+PTR);
          }//end while loop
       }//end for loop   
       //จบอัลกอริทึม
    }
    
}
