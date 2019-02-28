#pragma once
#ifndef __container_atd__
#define __container_atd__
#include "shape_atd.h"
namespace simple_shapes {
	// ѕростейший контейнер на основе одномерного массива
	class container {
		enum { max_len = 100 }; // максимальна€ длина
		int len; // текуща€ длина
		shape *cont[max_len];

	public:
		void In(ifstream &ifst);     // ввод 
		void Out(ofstream &ofst);    // вывод 
		//------
		void V(ofstream &ofst); // вывод объема
		//------
		void Clear();  // очистка контейнера от фигур
		container();    // инициализаци€ контейнера
		~container() { Clear(); } // утилизаци€ контейнера
	};
} // end simple_shapes namespace
#endif

