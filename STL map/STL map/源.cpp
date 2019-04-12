#include<map>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	map<char, string> m;
	pair<char, string>p1('H', "hello");
	pair<char, string>p2('W', "world");
	pair<char, string>p3('B', "Beijing");
	pair<char, string>p4('C' , "City");

	m.insert(p1);
	m.insert(p2);
	m.insert(p3);
	m.insert(p4);

	map<char, string>::iterator it = m.begin();
	for (; it != m.end(); it++)
	{
		cout << "key:"<<it->first <<"   ";
		cout << "value:"<<it->second << endl;
	}

	cout << "m['H']:" << m['H'] << endl;
	cout << "m['W']:" << m['W'] << endl;
		

}