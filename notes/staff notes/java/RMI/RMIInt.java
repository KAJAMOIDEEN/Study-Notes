import java.rmi.*;

public interface RMIInt extends Remote
{
	public int add(int a,int b)throws RemoteException;
}

		