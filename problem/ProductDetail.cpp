#include "Product.h"
#include "ProductDetail.h"

Book::Book(int price, string description, string isbn, string title, string writer, string publisher)
		: Product(price, description)
{
	this->isbn = isbn;
	this->title = title;
	this->writer = writer;
	this->publisher = publisher;
}

void Book::getProduct()
	{
		cout << " ISBN : " << isbn << endl;
		cout << " TITLE : " << title << endl;
		cout << " WRITER : " << writer << endl;
		cout << " PUBLISHER : " << publisher << endl;
	}

string Book::ProductInfo() { return "BOOK"; }


CD::CD(int price, string description, string title, int playtime, string singer)
		: Product(price, description)
{
	this->title = title;
	this->playtime = playtime;
	this->singer = singer;
}

void CD::getProduct()
{
	cout << " TITLE : " << title << endl;
	cout << " PLAY TIME : " << playtime << endl;
	cout << " SINGER : " << singer << endl;
}

string CD::ProductInfo() { return "COMPACTDISC"; }


Cellphone::Cellphone(int price, string description, string model, string manufacture)
		: Product(price, description)
{
	this->model = model;
	this->manufacture = manufacture;
}

void Cellphone::getProduct()
{
	cout << " MODEL : " << model << endl;
	cout << " MANUFACTURE : " << manufacture << endl;
}

string Cellphone::ProductInfo() { return "CELLPHONE"; }
