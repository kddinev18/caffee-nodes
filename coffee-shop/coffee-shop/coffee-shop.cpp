#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct COFFEE {
	string articul;
	int count = 0;
	float price = 0;
	COFFEE* next = NULL;
};

COFFEE* prependNode(COFFEE* head, string articul, int count, float price)
{
	COFFEE* newNode = new COFFEE;
	newNode->articul = articul;
	newNode->count = count;
	newNode->price = price;
	newNode->next = head;
	head = newNode;
	return head;
}

void displayList(COFFEE* head)
{
	COFFEE* list = head;
	while (list != NULL)
	{
		cout << list->articul << " ";
		cout << list->count << " ";
		cout << list->price << " ";
		list = list->next;
		cout << endl;
	}
}

void calculatePrice(COFFEE* head)
{
	COFFEE* list = head;
	while (list != NULL)
	{
		cout << list->articul << " ";
		cout << (float)list->count * list->price << " ";
		list = list->next;
		cout << endl;
	}
}

bool mainMenu()
{
	cout << "1. Buy" << endl;
	cout << "2. Pay" << endl;
	cout << "3. Find the cheapest product" << endl;
	cout << "4. Find the most expensive product" << endl;
	cout << "5. Search" << endl;
	cout << "0. Exit" << endl;

	int option;
	cin >> option;
	switch (option)
	{
	case 1:

		return true;
		break;
	case 2:

		return true;
		break;
	case 3:

		return true;
		break;
	case 4:

		return true;
		break;
	case 5:

		return true;
		break;
	case 0:

		return false;
		break;
	}

}

int main()
{
	COFFEE* head = NULL;
	string articuls;
	int num;
	float price1;

	for (int i = 0; i < 3; i++)
	{
		cin >> articuls;
		cin >> num;
		cin >> price1;
		head = prependNode(head, articuls, num, price1);
	}
}
