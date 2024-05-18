//Ishfaqur Rahman, CS 162
//The purpose of the programming assignment is to track the product of the inventory and find a specific product from the inventory


#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;

const int ITEM=20;
const int PREF=40;
const int INFO=121;
const int MAX_SIZE=20;


struct product
{
	char item_name [ITEM];
	char superhero_pref[PREF]; //catagory
	char description[INFO];  
	float price;
	char colour[41];
	int popularity;
	int barcode;
	
};

//Prototypes

void read_product( product library[], int & index_products);
void show_product( product library[], int index);
void display_products(product library[], int & index_counter);
void display_a_product (char find[],product library[],int counter);
bool again();
