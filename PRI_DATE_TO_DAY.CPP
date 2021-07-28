//To find out day on any given date
#include<iostream>
#include<conio.h>

using namespace std;

int o,y,m,d,f=28;

int main()
{
 system("cls");

 cout<<"Enter day (1 to 31)=";
 cin>>d;

 cout<<"Enter month (1 to 12)=";
 cin>>m;

 cout<<"Enter year=";
 cin>>y;

  if(y%4==0)
  {
   f=29;
  }

  if((y%100==0)&&(y%400!=0))
  {
   f=28;
  }
	if(d<1 || d>31 || m<1 || m>12 || y<1 || ((m==2||m==4||m==6||m==9||m==11)&&(d==31)) || (d>28 && f==28 && m==2) || (d>29 && m==2))
	{
	 cout<<"Wrong Input";
	}
	else
	{
	 y=y-1;
	 y=y%400;
	 o=(5*(y/100));
	 y=y%100;
	 o=o+(2*(y/4))+(y-(y/4));
	 o=o%7;

		if(m==2)
		{
		 o=o+3;
		}
		if(m==3)
		{
			if(f==28)
			{
			o=o+3;
			}
			if(f==29)
			{
			o=o+1+3;
			}
		}
		if(m==4)
		{
			if(f==28)
			{
			o=o+3+3;
			}
			if(f==29)
			{
			o=o+3+3+1;
			}
		}
		if(m==5)
		{
			if(f==28)
			{
			o=o+3+3+2;
			}
			if(f==29)
			{
			o=o+3+3+2+1;
			}
		}
		if(m==6)
		{
			if(f==28)
			{
			o=o+3+3+2+3;
			}
			if(f==29)
			{
			o=o+3+3+2+3+1;
			}
		}
		if(m==7)
		{
			if(f==28)
			{
			o=o+3+3+2+3+2;
			}
			if(f==29)
			{
			o=o+3+3+2+3+2+1;
			}
		}
		if(m==8)
		{
			if(f==28)
			{
			o=o+3+3+2+3+2+3;
			}
			if(f==29)
			{
			o=o+3+3+2+3+2+3+1;
			}
		}
		if(m==9)
		{
			if(f==28)
			{
			o=o+3+3+2+3+2+3+3;
			}
			if(f==29)
			{
			o=o+3+3+2+3+2+3+3+1;
			}
		}
		if(m==10)
		{
			if(f==28)
			{
			o=o+3+3+2+3+2+3+3+2;
			}
			if(f==29)
			{
			o=o+3+3+2+3+2+3+3+2+1;
			}
		}
		if(m==11)
		{
			if(f==28)
			{
			o=o+3+3+2+3+2+3+3+2+3;
			}
			if(f==29)
			{
			o=o+3+3+2+3+2+3+3+2+3+1;
			}
		}
                if(m==12)
		{
			if(f==28)
			{
			o=o+3+3+2+3+2+3+3+2+3+2;
			}
			if(f==29)
			{
			o=o+3+3+2+3+2+3+3+2+3+2+1;
			}
		}

		o=o+d;
		o=o%7;
			
			switch(o)
		        {
		  	case 0: cout<<"\nSunday";
		  	break;
		  	case 1: cout<<"\nMonday";
		  	break;
		  	case 2: cout<<"\nTuesday";
		  	break;
		  	case 3: cout<<"\nWednesday";
		  	break;
		  	case 4: cout<<"\nThursday";
		  	break;
		  	case 5: cout<<"\nFriday";
		  	break;
		  	case 6: cout<<"\nSaturday";
		  	break;
		  	default: cout<<"Error 1";
		 	}
	}
 getch();
}
