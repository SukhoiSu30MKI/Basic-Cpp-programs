#include<iostream,h>
#include<string.h>
void main()
{
	string str,newstr;
	cout<<"Enter a string: ";
	getline(cin,str);
	strcpy(newstr, str);   //performing string copy
	cout<<"The copied string is: "<< newstr;
}
