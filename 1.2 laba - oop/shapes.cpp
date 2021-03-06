
// ���������� ���������� ���������� ��� ���� ���������
// �������������� �������
#include "box_atd.h"
#include "share_atd.h"
#include "tetraidr_atd.h"
using namespace std;
#include "shape_atd.h"

namespace simple_shapes {

	//----------------------------------------------------
	// ���� ���������� ������
	void shape::InData(ifstream &ifst) {
		ifst >> temp;
	}

	//----------------------------------------------------
	// ����� ���������� ������
	void shape::Out(ofstream &ofst) {
		ofst << "Melting point = " << temp << " �C " << endl;
	}
	// ���� ���������� ���������� ������ 
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
		case 3:
			sp = new tetraidr;
			break;
		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}
	//-----------------------------------------------------
	// ��������� ���� ��������
	bool shape::Compare(shape &other) {
		return V() < other.V();
	}
	void shape::OutShare(ofstream &ofst) {
		ofst << endl;  // ������ ������
	}
} // end simple_shapes namespace

