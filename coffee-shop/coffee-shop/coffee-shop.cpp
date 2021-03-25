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
	int count = 0;
	while (list != NULL)
	{
		cout << count++ << ". ";
		cout << list->articul << " ";
		cout << list->count << " ";
		cout << list->price << " ";
		list = list->next;
		cout << endl;
	}
}

void removeSpecialNode(COFFEE* head, string wantedArtucule)
{
	if (head->next == NULL)
	{
		return;
	}
	COFFEE* prev = head;
	COFFEE* tempt = head->next;
	if (tempt->articul == wantedArtucule)
	{
		tempt = head->next;
		prev->next = tempt->next;
		delete tempt;
	}
	else
	{
		removeSpecialNode(head->next, wantedArtucule);
	}
}



int main()
{
	COFFEE* head = NULL;
	string articuls;
	int num;
	float price1;
	int addCount;

	cin >> addCount;

	for (int i = 0; i < addCount; i++)
	{
		cin >> articuls;
		cin >> num;
		cin >> price1;
		head = prependNode(head, articuls, num, price1);
	}



	displayList(head);
	cout << "Choose index: ";
	int option;
	cin >> option;

	COFFEE* list = head;
	for (int i = 0; i < option; i++)
	{
		list = list->next;
	}
	if (list->count == 1)
	{
		removeSpecialNode(head, list->articul);
	}
	else
	{
		list->count--;
	}
	displayList(head);
}
