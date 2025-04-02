/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labelexamplesw;
import javax.swing.*;  
import java.awt.*;  
import java.awt.event.*;  
/**
 *
 * @author Apollo
 */
public class LabelExampleSw extends Frame implements ActionListener {
JTextField tf; JLabel l; JButton b;  
    LabelExampleSw(){  
        tf=new JTextField();  
        tf.setBounds(50,50, 150,20);  
        l=new JLabel();  
        l.setBounds(50,100, 250,20);      
        b=new JButton("Find IP");  
        b.setBounds(50,150,95,30);  
        b.addActionListener(this);    
        add(b);add(tf);add(l);    
        setSize(400,400);  
        setLayout(null);  
        setVisible(true);  
    }  
    public void actionPerformed(ActionEvent e) {  
        try{  
        String host=tf.getText();  
        String ip=java.net.InetAddress.getByName(host).getHostAddress();  
        l.setText("IP of "+host+" is: "+ip);  
        }catch(Exception ex){System.out.println(ex);
        }  
    
    }
    public static void main(String[] args) {
        // TODO code application logic here
        new LabelExampleSw();  
    }
    
}
