import javax.swing.JLabel;
//import java.awt.Color;

public class test{
  public static void main(String[] args){

    /* 
    JFrame frame = new JFrame();
    frame.setTitle("Hello");
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setSize(414, 696);
    frame.setResizable(false);
    frame.setVisible(true);

    frame.getContentPane().setBackground(new Color(000000));

    System.out.println("Hello World");
    */

    MyFrame myFrame = new MyFrame();
    
    JLabel label = new JLabel();
    label.setText("What the fuck!!");
    label.setHorizontalTextPosition(JLabel.CENTER);
    label.setVerticalTextPosition(JLabel.TOP);
    

    myFrame.add(label);
    


    
  }
}
