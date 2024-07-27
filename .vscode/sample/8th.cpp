//lab program 8:
#include <iostream>
#include <fstream>
using namespace std;
void writefile(int h,int m,int s)
{
	char str[10];//character define hua hai 
	fstream file;
	file.open("abc.bin",ios::out|ios::binary);
	sprintf(str,"%d:%d:%d",h,m,s);//Formats the time as a string in the format “h:m:s”.
	file.write(str,sizeof(str));//writes in the file
	file.close();
}
void readfile()
{
	char str[10];
	fstream file;
	file.open("abc.bin",ios::out|ios::binary);
	file.read(str,sizeof(str));//Reads the content of the file into the array.
	file.close();
	cout<<str;
}
int main()
{
	int m,h,s;
	cout<<"enter time\n";
	cout<<"enter hour";
	cin>>h;
	cout<<"enter min";
	cin>>m;
	cout<<"enter sec";
	cin>>s;
	
	writefile(h,m,s);
	
	readfile();
	
	
	
	return 0;
}



