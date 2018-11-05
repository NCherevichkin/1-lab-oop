
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "box_atd.h"
#include "share_atd.h"
using namespace std;
#include "shape_atd.h"

namespace simple_shapes {
	// Ввод параметров обобщенной фигуры 
	shape* shape::In(ifstream &ifst) {
		shape *sp;
		int k;
		ifst >> k;
		switch (k) 
		{
		case 1:
			sp = new box;
			break;
		case 2:
			sp = new share;
			break;
		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}
} // end simple_shapes namespace

