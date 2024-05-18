//Ishfaqur Rahman, CS 162
//The purpose of the programming assignment is to track the product of the inventory and find a specific product from the inventory

#include "inventory.h"

int main()
{
	int index=0;
	product library[ITEM];
	int num_of_items=0;
	int index_products=0;
	bool flag=true;
	int choice=0;
	int counter=0;
	char find[20];


	while (flag)
	{
	cout<<"Welcome to the inventory menu, Here will can find the your desired product what you are searching"<<endl;
	cout<<"Please press 1 to (Enter an new item)"<<endl;
	cout<<"Please enter 2 to (Display a match of a particular item,by name)"<<endl;
	cout<<"Please enter 3 to (Display all item) "<<endl;
	cout<<"Please enter 4 to (QUIT)"<<endl;
	cin>>choice;



	switch(choice)
	{
		case 1:
		        read_product(library, index_products);
			cout<<index_products;
			break;
		case 2:
			cout<<"Please enter the name you want to find:"<<endl;
			cin>>find;
			cin.ignore(100,'\n');
			display_a_product (find,library,index_products);
			break;

		case 3:
			show_product(library,index);
	                display_products(library,index);
			break;
	        case 4:
	                flag=false;
			break;
	}

	flag=again();
	}

	return 0;
}
