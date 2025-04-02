#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
	char *str;
	int len;
	public :
		string()
		{
			strcpy(str," ");
		}
		string(char *s)
		{
			strcpy(str,s);
		}
		/*string(string &s)
		{
			len = s.len;
			str = new char[len+1];
			strcpy(str,s);
		} */
		void echo()
		{
			cout<<str<<endl;
		}

		friend string operator +(string &s,string &t);
};

string operator+(string &s,string &t)
{
	string temp;
	temp.len = s.len + t.len;
	temp.str = new char[temp.len+1];
	strcpy(temp.str,s.str);
	strcat(temp.str,t.str);
	return(temp);
}


void main()
{
	clrscr();
	string s1 = "New ";
s1.echo();
	string s2 = "York ";
	string s3;

	s3 = s1 + s2;
	cout<<"\ns1 = ";
	s1.echo();
	cout<<"\ns2 = ";
	s2.echo();
	cout<<"\ns3 = ";
	s3.echo();
	getch();
}

