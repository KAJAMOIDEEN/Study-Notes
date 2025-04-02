// Program for Popup Menu - Swing

import java.awt.*;
import java.awt.event.*;
import com.sun.java.swing.*;

public class popup extends JPanel
{
	JPopupMenu popup = new JPopupMenu();
	JTextField t = new JTextField(10);
	public popup()
	{
		add(t);
		ActionListener a1 = new ActionListener()
		{
			public void actionPerformed(ActionEvent e)
			{		t.setText((JMenuItem)e.getSource()).getText());
			}
		};
		JMenuItem m = new JMenuItem("Hither");
		m.addActionListener(a1);
		popup.add(m);
		m= new JMenuItem("Yon");
		m.addActionListener(a1);
		popup.add(m);
		m = new JMenuItem("Afar");
		m.addActionListener(a1);
		popup.add(m);
		popup.addSeparator();
		m=new JMenuItem("Stay Here");
		m.addActionListener(a1);
		popup.add(m);
		enableEvents(AWTEvent.MOUSE_EVENT_MASK);
		}

		protected void processMouseEvent(MouseEvent e)
		{
		if(e.isPopupTrigger())
			popup.show(e.getComponent(),e.getX(),e.getY());
			super.processMouseEvent(e);
		}

		public static void main(String ar[])
		{
			Show.inFrame(new Popup(),200,150);
		}
}