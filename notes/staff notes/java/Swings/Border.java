
package org.kodejava.example.swing;
 
03.import javax.swing.*;
04.import javax.swing.border.LineBorder;
05.import javax.swing.border.BevelBorder;
06.import javax.swing.border.EtchedBorder;
07.import javax.swing.border.MatteBorder;
08.import java.awt.*;
09. 
10.public class BorderDemo extends JFrame {
11. 
12.    public BorderDemo() {
13.        initializeUI();
14.    }
15. 
16.    private void initializeUI() {
17.        setSize(400, 400);
18.        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
19.        setLayout(new BorderLayout(15, 15));
20. 
21.        JPanel top = new JPanel();
22.        top.setBorder(new LineBorder(Color.RED, 1, true));
23. 
24.        JPanel bottom = new JPanel();
25.        bottom.setBorder(new BevelBorder(BevelBorder.LOWERED));
26. 
27.        JPanel left = new JPanel();
28.        left.setBorder(new EtchedBorder(EtchedBorder.RAISED));
29. 
30.        JPanel right = new JPanel();
31.        right.setBorder(new MatteBorder(5, 5, 5, 5, Color.BLUE));
32. 
33.        JPanel center = new JPanel();
34.        center.setBorder(new BevelBorder(BevelBorder.RAISED));
35. 
36.        getContentPane().add(top, BorderLayout.NORTH);
37.        getContentPane().add(bottom, BorderLayout.SOUTH);
38.        getContentPane().add(left, BorderLayout.WEST);
39.        getContentPane().add(right, BorderLayout.EAST);
40.        getContentPane().add(center, BorderLayout.CENTER);
41.    }
42. 
43.    public static void main(String[] args) {
44.        SwingUtilities.invokeLater(new Runnable() {
45.            public void run() {
46.                new BorderDemo().setVisible(true);
47.            }
48.        });
49.    }
50.}