#include "share_atd.h"
using namespace std;
namespace simple_shapes {
	// Ввод параметров шара
	void share::InData(ifstream &ifst) 
	{
		ifst >> rad;
	}
} // end simple_shapes namespace

using namespace std;
namespace simple_shapes {
	// Вывод параметров шара
	void share::Out(ofstream &ofst)
	{
		ofst << "It is Sphere: r = "
			<< rad << endl;
	}
} // end simple_shapes namespace
