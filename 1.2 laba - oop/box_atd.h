#pragma once
#ifndef __box_atd__
#define __box_atd__
// Требеутся описание класса shape
#include "shape_atd.h"
namespace simple_shapes {
	// параллелепипед
	class box : public shape {
		int x, y, z; // ширина, высота, длина
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst);  // ввод
		void Out(ofstream &ofst);    // вывод 
		box() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif
