
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	cout << "**********************************************************";
	cout << "\n* Members:                                               *";
	cout << "\n*      San Jose, Julius C. / BSIT                        *";
	cout << "\n*      Reyes, Gabriel Miguel  R. / BSIT                  *";
	cout << "\n*      Catapang, Sean Rikcel P. / BSIT                   *";
	cout << "\n*      Mortera, Carl Desmond G. / BSIT                   *";
	cout << "\n*      Esley, Andrew Jacob  N. / BSIT                    *";
	cout << "\n*      Obillo, Cyriel Alden F. / BSIT                    *";
	cout << "\n**********************************************************";

	string ltr;
	int quantity;

	class price {
	public:
		int snowBear = 1;
		int mentos = 1;
		int maxx = 1;
		int nerds = 3;
		int frutos = 1;
	};

	cout << "\nWhat would you like?";
	cout << "\nA. Snow bear $1";
	cout << "\nB. Mentos $1";
	cout << "\nC. MAXX $1";
	cout << "\nD. Nerds $3";
	cout << "\nE. Frutos $1\n";
	
	cout << "\nChoose what you like: ";
	cin >> ltr;
	cout << "How many would you like: ";
	cin >> quantity;
	cout << "\nYou picked: " << ltr << "\nQuantity: " << quantity;

	if (ltr == "A" || ltr == "a") {
		price myPrice;
		myPrice.snowBear = 1;
		cout << "\nPrice: " << myPrice.snowBear;
	}

	else if (ltr == "B" || ltr == "b") {
		price myPrice;
		myPrice.mentos = 1;
		cout << "\nPrice: " << myPrice.mentos;
	}

	else if (ltr == "C" || ltr == "c") {
		price myPrice;
		myPrice.maxx;
		cout << "\nPrice: " << myPrice.maxx;
	}

	else if (ltr == "D" || ltr == "d") {
		price myPrice;
		myPrice.nerds;
		cout << "\nPrice: " << myPrice.nerds;
	}

	else if (ltr == "E" || ltr == "e") {
		price myPrice;
		myPrice.frutos;
		cout << "\nPrice: " << "\n" << myPrice.frutos;
	}

	
	cout << "\nSummary:\n";
	cout << setw(13) << left << "Name: " << ltr;
	cout << setw(1) << right << " ";
	cout << setw(15) << left << "Quantity:" << quantity;
	cout << setw(1) << right << " ";
	cout << setw(15) << left << "Price";
}
