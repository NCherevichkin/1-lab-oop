#include "container_atd.h"
namespace simple_shapes {
	// Инициализация контейнера
	container::container() : len(0) { }
	// Очистка контейнера от элементов
	void container::Clear() {
		for (int i = 0; i < len; i++) {
			delete cont[i];
		}
		len = 0;
	}

	// Ввод содержимого контейнера
	void container::In(ifstream &ifst) {
		while (!ifst.eof()) {
			if (((cont[len] = shape::In(ifst)) != 0) && len < 99) {
				len++;
			}
		}
	}

	// Вывод содержимого контейнера
	/*void container::Out(ofstream &ofst) {
		ofst << "Container contents " << len
			<< " elements." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->Out(ofst);
			ofst << "V = " << cont[i]->V() << endl;
		}
	}*/
	// Сортировка содержимого контейнера
	void container::Sort() {
		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				if (cont[i]->Compare(*cont[j])) {
					shape *tmp = cont[i];
					cont[i] = cont[j];
					cont[j] = tmp;
				}
			}
		}
	}

	// Вывод содержимого контейнера
	void container::OutShare(ofstream &ofst) {
		ofst << "Only shares." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->OutShare(ofst);
		}
	}
} // end simple_shapes namespace
