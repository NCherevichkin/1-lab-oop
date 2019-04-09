#pragma once
#ifndef __share_atd__
#define __share_atd__
// Требуется описание класса shape
#include "shape_atd.h"
namespace simple_shapes {
	// шар
	class share : public shape {
		int rad; // радиус
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst);  // ввод
		void Out(ofstream &ofst);     // вывод 
		//------
		double V(); // вычисление объема
		//------
		share() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif

