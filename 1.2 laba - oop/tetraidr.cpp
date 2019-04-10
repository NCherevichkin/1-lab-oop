#include "tetraidr_atd.h"
using namespace std;
namespace simple_shapes {
	// Ввод параметров тетраидра
	void tetraidr::InData(ifstream &ifst) {
		ifst >> a;
		shape::InData(ifst);
	}
} // end simple_shapes namespace

using namespace std;
namespace simple_shapes {
	// Вывод параметров тетраидра
	void tetraidr::Out(ofstream &ofst) {
		ofst << "It is Tetraidr: r = "
			<< a << endl;
		shape::Out(ofst);
	}
} // end simple_shapes namespace