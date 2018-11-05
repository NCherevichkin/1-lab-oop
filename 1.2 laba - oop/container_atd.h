#pragma once
#ifndef __container_atd__
#define __container_atd__
#include "shape_atd.h"
namespace simple_shapes {
	// Простейший контейнер на основе одномерного массива
	class container {
		enum { max_len = 100 }; // максимальная длина
		int len; // текущая длина
		shape *cont[max_len];
	public:
		void In(ifstream &ifst);     // ввод 
		void Out(ofstream &ofst);    // вывод 
		void Clear();  // очистка контейнера от фигур
		container();    // инициализация контейнера
		~container() { Clear(); } // утилизация контейнера
	};
} // end simple_shapes namespace
#endif

