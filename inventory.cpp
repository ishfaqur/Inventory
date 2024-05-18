//Ishfaqur Rahman, CS 162
//The purpose of the programming assignment is to track the product of the inventory and find a specific product from the inventory

#include "inventory.h"

//This function will read all the information of an item
void read_product( product library[], int & index_products)
{
	if (index_products<20)
	{
		cout<<"Enter the name of the new item: ";
		cin>>library[index_products].item_name;
		cin.ignore(100,'\n');

		cout<<"Dc or Marvel? ";
		cin>>library[index_products].superhero_pref;
		cin.ignore(100,'\n');

		cout<<"Tell me something about it: ";
		cin>>library[index_products].description;
		cin.ignore(100,'\n');

		cout<<"What is the price? ";
		cin>>library[index_products].price;
		cin.ignore(100,'\n');

		cout<<"What is the colour? ";
		cin>>library[index_products].colour;
		cin.ignore(100,'\n');

		cout<<"Rate the popularity(1-5): ";
		cin>>library[index_products].popularity;
		cin.ignore(100,'\n');

		cout<<"What is the barcode number?";
		cin>>library[index_products].barcode;
		cin.ignore(100,'\n');

		++index_products;
	}
	else
	{
		cout<<endl<<"Out of the Boundary"<<endl;
	}


}
//This function will display all the informations of the item
void show_product( product library[], int index)
{
	cout<<"The item name is: "<<library[index].item_name<<endl;
	cout<<"The item is a "<<library[index].superhero_pref<<" character"<<endl;
	cout<<"The description of the item is: "<<library[index].description<<endl;
	cout<<"The price is: "<<library[index].price<<endl;
	cout<<"The colour of the item is: "<<library[index].colour<<endl;
	cout<<"The rate of the popularity is:" <<library[index].popularity<<endl;
	cout<<"The barcode number of the item is: "<<library[index].barcode<<endl;
}

//calling the show_product function here
void display_products(product library[], int & index_counter)
{
	for (int i=0; i<index_counter; ++i)
	{
		show_product(library,i);

	}


}
//This function will compare the item name if it is in the inventory or not
void display_a_product (char find[],product library[],int counter)
{
	int i=0;
	while (strcmp(library[i].item_name,find)!=0 && i<counter)
	{
		++i;
	
	}
	if (i<counter)

	{
		cout<<"Its a match!!! The product is: "<<library[i].item_name<<endl;
	
	}
	else
	{
		cout<<"Not mached!"<<endl;
	
	}

}
bool again()
{
	char response;

	cout<<"You want to play again? If yes type (Y/y) or if not type (N/n)"<<endl;
	cin>>response;
	cin.ignore(100,'\n');
	response=toupper(response);

	if (response=='Y')
	{
	 return true;	
	}
	else
	{
		cout<<"Its a QUIT!! Thanks for checking the inventory store!"<<endl;
		return false;
	
	}


}


