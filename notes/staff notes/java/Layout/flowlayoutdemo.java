import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class flowlayoutdemo extends Applet implements ItemListener
{
String str="";
Checkbox c1,c2,c3,c4;
public void init()
{
setLayout(new FlowLayout(FlowLayout.RIGHT));

c1=new Checkbox("Windows98/xp",null,true);
c2=new Checkbox("Windows NT/2000");
c3=new Checkbox("Solaris");
c4=new Checkbox("MacOS");

add(c1);
add(c2);
add(c3);
add(c4);


c1.addItemListener(this);
c2.addItemListener(this);
c3.addItemListener(this);
c4.addItemListener(this);
}
public void itemStateChanged(ItemEvent e)
{
repaint();
}
public void paint(Graphics g)
{
str="current state:";
g.drawString(str,6,80);
str="Windows 98/xp:"+c1.getState();
g.drawString(str,6,100);
str="Windows NT/2000:"+c2.getState();
g.drawString(str,6,120);
str="Solaris:"+c3.getState();
g.drawString(str,6,140);
str="MacOS:"+c4.getState();
g.drawString(str,6,160);
}
}

/*<applet code="flowlayoutdemo.class" width=300 height=300>
</applet>*/