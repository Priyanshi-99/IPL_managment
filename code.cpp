#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	while(1)
	{
	int b;
	cout<<"\n1.Result of Previous Year\n2.Time table\n3.Team Detials\n4.Insirt more Teams\n5.Update Given Teams\n6.Delete Given Teams\n7.Exit\n";
	cin>>b;
	if(b!=1&&b!=2&&b!=3&&b!=4&&b!=5&&b!=6&&b!=7)
	cout<<"\nYou have intered Invalid Input Please Try Again\n ";
	switch(b)
	{
			case 1:
				{
			ifstream out;
			out.open("IPL.txt");
			char ch;
			ch=out.get();
			while(!out.eof())
			{
				cout<<ch;
				ch=out.get();
				
			}
			out.close();
			break;
				}
				case 2:
					{
							ifstream out1;
			out1.open("DATE.txt");
			char c;
			
				c=out1.get();
			while(!out1.eof())
			{
				cout<<c;
				c=out1.get();
			
			}
			out1.close();
			break;

					}
						case 3:
						{
							int v=0;
							while(v==0)
							{
								cout<<"\n";
							ifstream get;
			get.open("Teams.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			cout<<"\n10.Return Home Page\n";
						
						
								int a;
								cin>>a;
								
								if(a!=10&&a!=1&&a!=2&&a!=3&&a!=4)
								cout<<"\nEnter Team Diteals Not Avilavle Yet\n*****Please Try Again******\n"<<endl;
								if(a==10)
								a=5;
								switch(a)
								{
									case 1:
										{	ifstream get;
			get.open("MI.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();	
			break;	}
			
			
			case 2:
				{
					ifstream get;
			get.open("KKR.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			break;
				}
				case 3:
					{
						ifstream get;
			get.open("RPS.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			break;
					}
					case 4:
						{
							ifstream get;
			get.open("DD.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			break;
						}
						case 5:
							{
							v++;
							}
						break;
					}
				}
					break;
				}
				case 4:
					{
											
  std::ofstream outfile;
string s;
  outfile.open("Teams.txt", std::ios_base::app);
  cout<<"Enter the name=";
  cin>>s;
  int c;
  cout<<"Enter NEw Team Id=";
  cin>>c;
  outfile<<"\n";
  outfile <<c<<"."<<s; 
  outfile.close();
  break;
											
						
					
	}
	case 5:
	
	{
	
	int len,sum=0,p;
	string a;
	cout<<"Enter the string=";
	cin>>a;
	cout<<"Enter the line=";
	cin>>len;
	int id;
	id=len;
	len=id+4;
	ifstream in ("Teams.txt");
	ofstream out ("MOM.txt",ios::out);
	string s;
	
	
		sum=1;
	while(!in.eof())
	{	
	getline(in,s);
	if(sum==len)
	out<<id<<"."<<a<<"\n";
	if(sum!=len)
	out<<s<<"\n";
     sum++;
    }
	in.close();
	out.close();
	ifstream get ("MOM.txt");
	ofstream put ("Teams.txt",ios::out);
	string t;
	while(!get.eof())
	{
		getline(get,t);
		put<<t<<"\n";
	}
	get.close();
	put.close();
	break;
	}
	case 6:
		{
			int len;
			cout<<"Enter the line=";
	cin>>len;
	
	ifstream in ("Teams.txt");
	ofstream out ("MOM.txt",ios::out);
	string s;
	
	
		int sum=1;
		int t=4;
		len=len+t;
	while(!in.eof())
	{	
	getline(in,s);
	if(len!=sum)
	out<<s<<"\n";
     sum++;
    }
	in.close();
	out.close();
	ifstream get ("MOM.txt");
	ofstream put ("Teams.txt",ios::out);
	string M;
	while(!get.eof())
	{
		getline(get,M);
		put<<M<<"\n";
	}
	get.close();
	put.close();
			break;
		}
		case 7:
			{
				cout<<"-----------------------------------------------------------------"<<endl;
				cout<<"              THANK YOU FOR USE                                  "<<endl;
				cout<<"-------------------------------------------------------------------"<<endl;
				return 0;
			}

}}
return 0;
}
