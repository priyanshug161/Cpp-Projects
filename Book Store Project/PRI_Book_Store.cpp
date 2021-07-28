#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string>

using namespace std;
void welcome();
void title();
int menu();

int cart();
void nameask();

int bookprice,tprice=0,num_items=0,card1=0;
string cart_books[21];
int cart_book_price[21];
string name("none");
string bookx[3];

class BOOK
{
public:
	
	string book0[3]={"Sita - Warrior of Mithila","Amish Tripathi","***"};
	string book1[3]={"Origin: Number 5 of the Robert Langdon Series","Dan Brown","***"};
	string book2[3]={"The Secret Of The Nagas (Shiva Trilogy-2)","Amish Tripathi","****"};
	string book3[3]={"Leonardo da Vinci: A Life From Beginning to End","Hourly History","****"};
	string book4[3]={"Minimalism: The Path to an Organized, Stress-free Life","Gwyneth Snow","***"};
	string book5[3]={"How to Be a Bawse: A Guide to Conquering Life","Lilly Singh","*****"};
	string book6[3]={"Think and Grow Rich","Napoleon Hill","****"};
	string book7[3]={"Indian Polity 5th Edition","M. Laxmikanth","****"};
	string book8[3]={"Rich Dad Poor Dad","Robert T Kiyosaki","****"};
	string book9[3]={"Sapiens: A Brief History of Humankind","Yuval Noah Harari","****"};
	string book10[3]={"Adolf Hitler: A Life From Beginning to End","Hourly History","***"};
	string book11[3]={"World War 1: A History From Beginning to End","Henry Freeman","***"};
	string book12[3]={"The 21 Day Miracle: How To Change Anything in 3 Short Weeks","Ed Rush","***"};
	string book13[3]={"300 Best Jokes: One-Liners and Funny Short Stories Collection ","Donald Shaw","**"};
	string book14[3]={"Mrs Funnybones","Twinkle Khanna","***"};
	string book15[3]={"Raavan (A Preview): Orphan of Aryavarta","Amish Tripathi","****"};
	string book16[3]={"A Wasted Hour","Jeffrey Archer","***"};
	string book17[3]={"Everyone Has a Story 2","Savi Sharma","*****"};
	string book18[3]={"Sapiens: A Brief History of Humankind","Yuval Noah Harari","****"};
	string book19[3]={"Elon Musk: How the Billionaire CEO of Spacex and Tesla is Shaping Our Future","Ashlee Vance","****"};
	string book20[3]={"A Brief History of Time: From Big Bang to Black Holes","Stephen Hawking","****"};
	
	string sub0[3]={"Sita - Warrior of Mithila","Origin: Number 5 of the Robert Langdon Series","The Secret Of The Nagas (Shiva Trilogy-2)"};
	string sub1[3]={"Leonardo da Vinci: A Life From Beginning to End","Minimalism: The Path to an Organized, Stress-free Life","How to Be a Bawse: A Guide to Conquering Life"};
	string sub2[3]={"Think and Grow Rich","Indian Polity 5th Edition","Rich Dad Poor Dad"};
	string sub3[3]={"Sapiens: A Brief History of Humankind","Adolf Hitler: A Life From Beginning to End","World War 1: A History From Beginning to End"};
	string sub4[3]={"The 21 Day Miracle: How To Change Anything in 3 Short Weeks","300 Best Jokes: One-Liners and Funny Short Stories Collection ","Mrs Funnybones"};
	string sub5[3]={"Raavan (A Preview): Orphan of Aryavarta","A Wasted Hour","Everyone Has a Story 2"};
	string sub6[3]={"Sapiens: A Brief History of Humankind","Elon Musk: How the Billionaire CEO of Spacex and Tesla is Shaping Our Future","A Brief History of Time: From Big Bang to Black Holes"};
	
	int book_price[21]={208,479,214,998,550,359,169,511,305,272,999,975,795,716,198,100,100,150,272,419,240};
	
	int choices()
	{
	try_again:
	system("cls");
	title();
	int ch_sub,ch_book;
	
	cout<<"Please select your choice (1-7):\n\n";
	cout<<"1. Action and Adventure\n";
	cout<<"2. Arts, film and Photography\n";
	cout<<"3. Business and Economics\n";
	cout<<"4. History\n";
	cout<<"5. Humour\n";
	cout<<"6. Literature and Fiction\n";
	cout<<"7. Sciences, Technology and Medicine\n";
	cin>>ch_sub;
	
	system("cls");
	title();
	cout<<"Please Select yout book (1-3)\n\n";
	
	switch(ch_sub)
	{
		case 1:
			cout<<"1. "<<sub0[0]<<"\n";
			cout<<"2. "<<sub0[1]<<"\n";
			cout<<"3. "<<sub0[2]<<"\n";
			cin>>ch_book;
			if(ch_book>3 || ch_book<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_book-1);
			
		case 2:
			cout<<"1. "<<sub1[0]<<"\n";
			cout<<"2. "<<sub1[1]<<"\n";
			cout<<"3. "<<sub1[2]<<"\n";
			cin>>ch_book;
			if(ch_book>3 || ch_book<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_book+3-1);
			
		case 3:
			cout<<"1. "<<sub2[0]<<"\n";
			cout<<"2. "<<sub2[1]<<"\n";
			cout<<"3. "<<sub2[2]<<"\n";
			cin>>ch_book;
			if(ch_book>3 || ch_book<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_book+6-1);
		
		case 4:
			cout<<"1. "<<sub3[0]<<"\n";
			cout<<"2. "<<sub3[1]<<"\n";
			cout<<"3. "<<sub3[2]<<"\n";
			cin>>ch_book;
			if(ch_book>3 || ch_book<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_book+9-1);
		
		case 5:
			cout<<"1. "<<sub4[0]<<"\n";
			cout<<"2. "<<sub4[1]<<"\n";
			cout<<"3. "<<sub4[2]<<"\n";
			cin>>ch_book;
			if(ch_book>3 || ch_book<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_book+12-1);
									
		case 6:
			cout<<"1. "<<sub5[0]<<"\n";
			cout<<"2. "<<sub5[1]<<"\n";
			cout<<"3. "<<sub5[2]<<"\n";
			cin>>ch_book;
			if(ch_book>3 || ch_book<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_book+15-1);
				
		case 7:
			cout<<"1. "<<sub6[0]<<"\n";
			cout<<"2. "<<sub6[1]<<"\n";
			cout<<"3. "<<sub6[2]<<"\n";
			cin>>ch_book;
			if(ch_book>3 || ch_book<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_book+18-1);				
				
		default:
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;	
	}	
	}
	
	int show()
	{
		int k;
	system("cls");
	title();
	cout<<"Book Title:-  "<<bookx[0];
	cout<<"\nAuthor:-      "<<bookx[1];
	cout<<"\n\n\t\t\t\t   Ratings: "<<bookx[2];
	cout<<"\n\t\t\t\t     _________  \n";
	cout<<"\t\t\t\t    /________/| \n";
	cout<<"\t\t\t\t   |        | | \n";
	cout<<"\t\t\t\t   |  Price | | \n";
	cout<<"\t\t\t\t   |   "<<bookprice<<"  | | \n";
	cout<<"\t\t\t\t   |        | | \n";
	cout<<"\t\t\t\t   |        | | \n";
	cout<<"\t\t\t\t   |________|/  \n";
	
	cout<<"\nSelect your choice:-\n";
	cout<<"1. Add to Cart\n";
	cout<<"2. Go to Main Menu\n";
	cin>>k;
	return k;
		
	}
	
			
};


class PAYMENT : public BOOK
{
	public:
	string user1,pass1,pass2,email,mobno,bank,cardno,cvv,add;

	int entries()
	{
		system("cls");
		title();
		cout<<"Enter your personal Details\n\n";
		cout<<"NAME: "<<name<<"\n";
		cout<<"EMAIL: ";
		cin>>email;
		
		cout<<"\nADDRESS: ";
		cin.ignore();
		getline(cin,add);
		//cin>>add;
						
		mobile:
		cout<<"\nMOBILE NUMBER: ";
		
		cin>>mobno;
		if((mobno.length())!=10)
		{
			cout<<"\nPlease enter 10 digit Mobile number\n";
			goto mobile;
		}
		cout<<"\nCreate Username: ";
		cin>>user1;
		password:
		cout<<"\n\nCreate Password: ";
		cin>>pass1;
		cout<<"\nConfirm Password: ";
		cin>>pass2;
		if(pass1==pass2)
		{
			ofstream save("logindata.txt",ios::app);
			save<<user1<<" "<<pass1<<" "/*<<name<<" "*/<<email<<" "<<mobno<</*" "<<add<<*/endl;
			cout<<"\n\nRegistration Successful";
			getch();
			save.close();
			return 0;		
		}
		else
		{
		cout<<"\nIncorrect Password. Try Again";
		getch();
		goto password;	
		}
			
	}
	
	
	int login()
	{
		string user,pass;
		int flag=0;
		system("cls");
		title();
		cout<<"Enter username:";
		cin>>user;
		cout<<"Enter password:";
		cin>>pass;
		
		ifstream get("logindata.txt");
		while(get>>user1>>pass1)
		{
		if(user==user1 && pass==pass1)
		{
			flag=1;
		}	
		}
		get.close();
		if(flag==1)
		{
		cout<<"Login Success. Press any key to continue";
		getch();
		return 0;
	    }
	    
	    else
		{
		cout<<"Login Failure. Press any key to continue";
		getch();
		return 1;
	    }
	    	
	}
	
	int method()
	{
		int method;
		system("cls");
		title();
		cout<<"Choose one option: \n\n";
		cout<<"1.Existing user- Login\n";
		cout<<"2.Sign Up\n";
		cin>>method;
		return method;	
	}
	
	int payment_option()
	{
		int choice4;
		system("cls");
		title();
		cout<<"Choose Payment Option\n\n";
		cout<<"1.Cash on Delivery\n";
		cout<<"2.Credit Card\n";
		cout<<"3.Debit Card\n";
		cin>>choice4;
		return choice4;
	}
	
	void card()
	{
		int v;
		string cardnm,cr("CREDIT"),db("DEBIT ");
		
		if(card1==2)
		{
			cardnm=cr;			
		}
		else if(card1==3)
		{
			cardnm=db;
		}
		system("cls");
		title();
		cout<<"Enter card Details:\n\n";
		
		cout<<"Bank Name:";
		cin.ignore();
		getline(cin,bank);
		
		cardnum:
		cout<<"\nCard Number:";		
		cin>>cardno;
		if(cardno.length()!=16)
		{
			cout<<"\nPlease enter 16 digit card number";
			goto cardnum;
		}
		cvv1:
		cout<<"\nCVV:";
		cin>>cvv;
		if(cvv.length()!=3)
		{
			cout<<"\nPlease enter 3 digit card number";
			goto cvv1;
		}
		
		system("cls");
		title();
		
		cout<<"\t        _________________________________________________ \n";
		cout<<"\t       |                                                 |\n";
		cout<<"\t       |  CLASSIC "<<cardnm<<" CARD                            |\n";
		cout<<"\t       |  "<<bank<<"                                            \n";
		cout<<"\t       |    ________                     MONTH/YEAR      |\n";
		cout<<"\t       |   |___|| __|       VALID          06/24         |\n";
		cout<<"\t       |   |__|  |__|       THRU                         |\n";
		cout<<"\t       |   |___||___|                                    |\n";
		cout<<"\t       |                                                 |\n";
		cout<<"\t       |   "<<cardno<<"                              |\n";
		cout<<"\t       |                                    VISA         |\n";
		cout<<"\t       |   "<<name<<"                                           \n";
		cout<<"\t       |_________________________________________________|\n";
		cout<<"\n\n\t                            Processing                \n";
		
		for(v=1;v<=80;v++)
		{
		cout<<"=";
		Sleep(50);
		}
		
		cout<<"\n\nSorry, you have nil balance in your bank account.\n\nPress Enter to pay with Cash on Delivery\n\n";
		getch();
	}
	
};


	
	int cart()
	{
	system("cls");
	title();

	if(num_items==0)
	{
	cout<<"\nSorry "<<name<<", you have no Books in your cart. Please add books";
	cout<<"\n\nPress any key to go to Main menu";
	getch();
	return 3;
		
	}
	else
	{
	return 2;
	}
	
	}


void welcome()
{
	int wel,line,end1;
    cout<<"\n\n\n\n\n";
	cout<<"      ######                           #####                               \n";
	cout<<"      #     #                         #     #                              \n";
	cout<<"      #     #  ####   ####  #   #     #       #######  ####  #####  ###### \n";
	cout<<"      ######  #    # #    # #  #       #####     #    #    # #   #  #      \n";
	cout<<"      #     # #    # #    # ###             #    #    #    # ####   #####  \n";
	cout<<"      #     # #    # #    # #  #      #     #    #    #    # #   #  #      \n";
	cout<<"      ######   ####   ####  #   #      #####     #     ####  #    # ###### \n";
	
	cout<<"\n\n\n\t\t\t\t    LOADING\n\n";
	
	for(wel=1;wel<=80;wel++)
	{
	cout<<"=";
	Sleep(30);
	}
	cout<<"\n\n\t\t\t   Press any key to Continue";
    getch();
    
    for(end1=10;end1>=0;end1--)
    {
       	system("cls");
    	for(line=end1;line>=0;line--)
    	{
    	cout<<"\n";	
        }
		cout<<"\t\t   .--.           .       .-.  .              \n";
		cout<<"\t\t   |   )          |      (   )_|_             \n";
		cout<<"\t\t   |--:  .-.  .-. |.-.    `-.  |  .-. .--..-. \n";
		cout<<"\t\t   |   )(   )(   )|-.'   (   ) | (   )|  (.-' \n";
		cout<<"\t\t   '--'  `-'  `-' '  `-   `-'  `-'`-' '   `--'\n";
		//cout<<"\t\t   -------------------------------------------\n";
		Sleep(50);
	}
}

void title()
{
	system("cls");
	cout<<"\t\t   .--.           .       .-.  .              \n";
	cout<<"\t\t   |   )          |      (   )_|_             \n";
	cout<<"\t\t   |--:  .-.  .-. |.-.    `-.  |  .-. .--..-. \n";
	cout<<"\t\t   |   )(   )(   )|-.'   (   ) | (   )|  (.-' \n";
	cout<<"\t\t   '--'  `-'  `-' '  `-   `-'  `-'`-' '   `--'\n";
	cout<<"\t\t   -------------------------------------------\n";
	cout<<"\t\t\t       Copyright 2018, Priyanshu Gupta\n\n";	
	
}

int menu()
{
	menu:
	system("cls");
	title();
	int menu;
	cout<<"\nWelcome "<<name<<", Please select your choice:\n\n1.Add Books to Cart\n2.Go to cart\n3.Contact and support\n";
	cin>>menu;
	if(menu>=1 && menu<=3)
	{
		switch(menu)
		{
		case 1:
		return 1;
		break;
		
		case 2:
		return cart();
		break;
		
		case 3:
		system("cls");
		title();

		cout<<"Contact information:\n\n";
		cout<<"Priyanshu Gupta\n";
		cout<<"+917610949593\n";
		cout<<"priyanshug161@gmail.com\n\n";

		cout<<"Press any key to go to Main menu";
		getch();
		goto menu;
		
	    }
	}
	else
	{
		cout<<"Invalid Choice, Press any key to continue.\n";
		getch();
		goto menu;
	}
}


void nameask()
{
cout<<"\nPlease Enter your Name: ";
getline(cin,name);
}


int main()                                        //Starting of INT MAIN
{
	main:
	int check;
	check=0;
	if(name=="none")
	{
		welcome();
		title();
		nameask();
	}
	
	title();
	check=menu();

	if(check==1)
	{
		int sel_book,k1;
	
		BOOK call;
		sel_book=call.choices();
	
		switch(sel_book)
		{
		case 0:
			bookx[0]=call.book0[0];
			bookx[1]=call.book0[1];
			bookx[2]=call.book0[2];
			break;
			
		case 1:
			bookx[0]=call.book1[0];
			bookx[1]=call.book1[1];
			bookx[2]=call.book1[2];
			break;
			
		case 2:
			bookx[0]=call.book2[0];
			bookx[1]=call.book2[1];
			bookx[2]=call.book2[2];
			break;
		
		case 3:
			bookx[0]=call.book3[0];
			bookx[1]=call.book3[1];
			bookx[2]=call.book3[2];
			break;
			
		case 4:
			bookx[0]=call.book4[0];
			bookx[1]=call.book4[1];
			bookx[2]=call.book4[2];
			break;
		
		case 5:
			bookx[0]=call.book5[0];
			bookx[1]=call.book5[1];
			bookx[2]=call.book5[2];
			break;
			
		case 6:
			bookx[0]=call.book6[0];
			bookx[1]=call.book6[1];
			bookx[2]=call.book6[2];
			break;
			
		case 7:
			bookx[0]=call.book7[0];
			bookx[1]=call.book7[1];
			bookx[2]=call.book7[2];
			break;
			
		case 8:
			bookx[0]=call.book8[0];
			bookx[1]=call.book8[1];
			bookx[2]=call.book8[2];
			break;
			
		case 9:
			bookx[0]=call.book9[0];
			bookx[1]=call.book9[1];
			bookx[2]=call.book9[2];
			break;
												
		case 10:
			bookx[0]=call.book10[0];
			bookx[1]=call.book10[1];
			bookx[2]=call.book10[2];
			break;
			
		case 11:
			bookx[0]=call.book11[0];
			bookx[1]=call.book11[1];
			bookx[2]=call.book11[2];
			break;
		
		case 12:
			bookx[0]=call.book12[0];
			bookx[1]=call.book12[1];
			bookx[2]=call.book12[2];
			break;
		
		case 13:
			bookx[0]=call.book13[0];
			bookx[1]=call.book13[1];
			bookx[2]=call.book13[2];
			break;
		
		case 14:
			bookx[0]=call.book14[0];
			bookx[1]=call.book14[1];
			bookx[2]=call.book14[2];
			break;
							
		case 15:
			bookx[0]=call.book15[0];
			bookx[1]=call.book15[1];
			bookx[2]=call.book15[2];
			break;
		
		case 16:
			bookx[0]=call.book16[0];
			bookx[1]=call.book16[1];
			bookx[2]=call.book16[2];
			break;
		
		case 17:
			bookx[0]=call.book17[0];
			bookx[1]=call.book17[1];
			bookx[2]=call.book17[2];
			break;
		
		case 18:
			bookx[0]=call.book18[0];
			bookx[1]=call.book18[1];
			bookx[2]=call.book18[2];
			break;
			
		case 19:
			bookx[0]=call.book19[0];
			bookx[1]=call.book19[1];
			bookx[2]=call.book19[2];
			break;	
				
		case 20:
			bookx[0]=call.book20[0];
			bookx[1]=call.book20[1];
			bookx[2]=call.book20[2];
			break;						

    	}
    	bookprice=call.book_price[sel_book];
	
		k1=call.show();
		
		if(k1==1)
		{
			if(num_items==21)
			{
			cout<<"Sorry, Your cart is full\nPress any key to continue.";
			getch();
			goto main;	
			}
			cart_books[num_items]=bookx[0];
			cart_book_price[num_items]=bookprice;
			num_items=num_items+1;
			tprice=tprice+bookprice;
			
			cout<<"Your Book has been added to cart Successfully\nPress any key to continue.";
			getch();
			goto main;	
			
		}
		
		else if(k1==2)
		{
		goto main;	
		}
		
		else 
		{	
		cout<<"Invalid response\n Press any key to go to Main Menu";
		getch();
		goto main;	
		}
	
	}

	else if(check==2)                                                 //Cart
	{	
	int k2, choice3;
	cout<<"Total Items: "<<num_items<<"\n\n";
	
	for(k2=0;k2<num_items;k2++)
	{
		cout<<k2+1<<". "<<cart_books[k2]<<"\n   Rupees "<<cart_book_price[k2]<<"\n\n";	
	}
	cout<<"\n   Total Amount:-"<<tprice<<"\n\n";
	cout<<"Please select your choice:\n\n1.Pay Now\n2.Remove Books from Cart\n3.Go to Main Menu\n";
	cin>>choice3;
	
	if(choice3==1)
	{
		int payop,m;
		PAYMENT object;
		relogin:
		m=object.method();
		if(m==1)
		{
			int choice7;
			choice7=object.login();
			if(choice7==1)
			{
			goto relogin;	
			}	
		}
		else if(m==2)
		{
		object.entries();
        }
		payops:
		payop=object.payment_option();
		
		if(payop==1)                                      //Cash on Delivery
		{
			cod:
			system("cls");
			title();
		cout<<"\n\n\t\t\tYour Books will be Delivered Shortly\n\t\t\t    Thank you for Shopping with us\n\n";
		cout<<"\t\t                        .d8b.                \n";
		cout<<"\t\t                    _.d8888888b._            \n";
		cout<<"\t\t                  .88888888888888b.          \n";
		cout<<"\t\t                 d88888888888888888b         \n";
		cout<<"\t\t                 8888888888888888888         \n";
		cout<<"\t\t                 Y88888888888888888P         \n";
		cout<<"\t\t                  'Y8888888888888P'          \n";
		cout<<"\t\t                _..._ 'Y88888P' _..._        \n";
		cout<<"\t\t              .d88888b. Y888P .d88888b.      \n";
		cout<<"\t\t             d888888888b 888 d88888888b      \n";
		cout<<"\t\t             888P  `Y8888888888P'  Y888      \n";
		cout<<"\t\t              b8b    Y88888888P    d8Y       \n";
		cout<<"\t\t               `'   #############  '`        \n";
		cout<<"\t\t                      dP d8b Yb              \n";
		cout<<"\t\t                  Ob=dP d888b Yb=dO          \n";
		cout<<"\t\t                   ` ` O88888O ` `           \n";
		cout<<"\t\t                        'Y8P'                \n";
		cout<<"\t\t                          '                  \n";
		getch();
		return 0;
		}
		if(payop==2)
		{
		card1=2;
		object.card();
		goto cod;	
		}
		if(payop==3)
		{
		card1=3;
		object.card();
		goto cod;	
		}
		else
		{
		cout<<"\nINVALID CHOICE";
		getch();
		goto payops;	
		}
		
	}
	if(choice3==2)                         //Removing From Cart
	{
		system("cls");
		title();
		int k6,k7,k8=0,k9,choice8;
		
		string cart_books_backup[21];
		int cart_book_price_backup[21];
		
		cout<<"Enter the book which you want to remove (1-"<<num_items<<")\n\n";
	
		for(k6=0;k6<num_items;k6++)
		{
		cout<<k6+1<<". "<<cart_books[k6]<<"\n   Rupees "<<cart_book_price[k6]<<"\n\n";	
		}
		cin>>choice8;
		
		if(choice8>=1 && choice8<=num_items)
		{
			for(k7=0;k7<num_items;k7++)
			{
				if(k7==(choice8-1))
				{
					continue;
				}
				cart_books_backup[k8]=cart_books[k7];
				cart_book_price_backup[k8]=cart_book_price[k7];
				k8++;
			}
			num_items--;
			tprice=tprice-cart_book_price[(choice8-1)];
			
			for(k9=0;k9<num_items;k9++)
			{
			cart_books[k9]=cart_books_backup[k9];
			cart_book_price[k9]=cart_book_price_backup[k9];	
			}
		}
		else
		{
			cout<<"Invalid Response.Try again";
			getch();
			goto main;
		}
		
		cout<<"\n\nYour item is removed from cart successfully.\n Press any key to Continue";
		getch();
		goto main;
	}
	
	if(choice3==3)
	{
		goto main;	
	}
	else
	{
		cout<<"Invalid Choice.";
		getch();
		goto main;
	}
		
	}

	else if(check==3)
	{	
	goto main;	
	}


getch();
return 0;	
}



