/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package textareaexamplesw;
import javax.swing.*;  
import java.awt.event.*;  
/**
 *
 * @author Apollo
 */
public class TextAreaExampleSw implements ActionListener{

    JLabel l1,l2;  
JTextArea area;  
JButton b;  
TextAreaExampleSw() {  
    JFrame f= new JFrame();  
    l1=new JLabel();  
    l1.setBounds(50,25,100,30);  
    l2=new JLabel();  
    l2.setBounds(160,25,100,30);  
    area=new JTextArea();  
    area.setBounds(20,75,250,200);  
    b=new JButton("Count Words");  
    b.setBounds(100,300,120,30);  
    b.addActionListener(this);  
    f.add(l1);f.add(l2);f.add(area);f.add(b);  
    f.setSize(450,450);  
    f.setLayout(null);  
    f.setVisible(true);  
}  
public void actionPerformed(ActionEvent e){  
    String text=area.getText();  
    String words[]=text.split("\\s");  
    l1.setText("Words: "+words.length);  
    l2.setText("Characters: "+text.length());  
}  
    public static void main(String[] args) {
        // TODO code application logic here
        new TextAreaExampleSw(); 
    }
    
}
