#pragma once
#ifndef __tetraidr_atd__
#define __tetraidr_atd__
// Требуется описание класса shape
#include "shape_atd.h"
namespace simple_shapes {
	// тетраидр
	class tetraidr : public shape {
		int a; // длина ребра 
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst);  // ввод
		void Out(ofstream &ofst);     // вывод 
		//------
		double V(); // вычисление объема
		//------
		tetraidr() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif