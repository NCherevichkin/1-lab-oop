#include "share_atd.h"
using namespace std;
namespace simple_shapes {
	// Ввод параметров шара
	void share::InData(ifstream &ifst) 
	{
		ifst >> rad;
		shape::InData(ifst);
	}
} // end simple_shapes namespace

using namespace std;
namespace simple_shapes {
	// Вывод параметров шара
	void share::Out(ofstream &ofst)
	{
		ofst << "It is Sphere: r = "
			<< rad << endl;
		shape::Out(ofst);
	}
	void share::OutShare(ofstream &ofst)
	{
		Out(ofst);
	}
} // end simple_shapes namespace
