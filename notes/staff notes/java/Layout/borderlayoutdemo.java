import java.applet.*;
import java.awt.*;
public class borderlayoutdemo extends Applet
{
Button b1,b2,b3,b4;
public void init()
{
setLayout(new BorderLayout());
b1=new Button("North");
b2=new Button("South");    
b3=new Button("West");       
b4=new Button("East");         
add(b1,BorderLayout.NORTH);
add(b2,BorderLayout.SOUTH);
add(b3,BorderLayout.WEST);
add(b4,BorderLayout.EAST);

String str="Welcome";
TextArea txt=new TextArea(str);
add(txt,BorderLayout.CENTER);
}
}

/*<applet code="borderlayoutdemo.class" width=300 height=300>
</applet>*/