#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	string palavra;
	int quantidade = 0;

	cout << "Qual palavra deseja verificar? \n";
	cin >> palavra;

	for (int i = 0; i < palavra.size(); i++) {
		if (palavra.at(i) == 'a' || palavra.at(i) == 'A') {
			quantidade++;
		}
	}

	if (quantidade > 0) {
		printf("A letra 'a' apareceu %i vezes. \n", quantidade);
	} else {
		cout << "Nao tem letra 'a'. \n";
	}
	system("pause");
}
