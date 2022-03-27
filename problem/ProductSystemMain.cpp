#include "ProductCommonDecl.h"
#include "ProductHandler.h"

int main(void)
{
	ProductHandler manager;
	int choice;

	while (true)
	{
		manager.ShowMenu();
		cin >> choice;

		switch (choice)
		{
		case PRODUCTADD:
			manager.AddProduct();
			break;
		case PRODUCTINQUIRY:
			manager.InquiryProduct();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}
