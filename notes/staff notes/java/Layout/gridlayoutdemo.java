import java.applet.*;
import java.awt.*;
public class gridlayoutdemo extends Applet
{
public void init()
{
setLayout(new GridLayout(4,4));
setFont(new Font("SanSerif",Font.BOLD,24));
for(int i=1;i<=16;i++)
add(new Button(" "+i));
}
}

/*<applet code="gridlayoutdemo.class" width=300 height=300>
</applet>*/