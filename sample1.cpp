#include <bits/stdc++.h>
#include <curses.h>
using namespace std;


class keyboard{
	
	public: 
	void display(string s)
	{
		cout<<s<<endl;
	}

};

int main()
{
	char ch; 
	string s ="";	
	keyboard obj;
	while(1)
	{ 
		char ch = cin.get(); 
		if(  ch != '\n' && ch != 'q')
		{
			//cin.ignore();
			s = s + ch;
		}
		else if (ch == '\n')
		{			
			obj.display(s);
			s = "";
		}	
		else if(ch == 0x71)                  // Press 'q' to exit;
		{
			return 0;
		}
		
	}

	return 0;
}


