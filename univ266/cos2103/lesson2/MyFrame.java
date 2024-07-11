
//import java.awt.Color;
import javax.swing.JFrame;

public class MyFrame extends JFrame{

    MyFrame(){
    this.setTitle("Hello");
    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    //this.setSize(414, 696);
    this.setSize(414, 414);
    this.setResizable(false);
    this.setVisible(true);
    
    //this.getContentPane().setBackground(new Color(111111));

    }
}