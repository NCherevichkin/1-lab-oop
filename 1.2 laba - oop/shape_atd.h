#pragma once
#ifndef __shape_atd__
#define __shape_atd__
#include <fstream>
using namespace std;
namespace simple_shapes {
	//  ласс, обобщающает все имеющиес€ фигуры.
	// явл€етс€ абстрактным, обеспечива€, тем самым, 
	// проверку интерфейса 
	class shape 
	{
		int temp;
	public:
		// иденитфикаци€, порождение и ввод фигуры из пото-ка
		static  shape* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;  // ввод
		virtual void Out(ofstream &ofst) = 0;     // вывод
		virtual void OutShare(ofstream &ofst); // вывод только шаров

		//-------
		virtual double V() = 0; // вычисление объема
		//-------
		 // сравнение двух объектов
		bool Compare(shape &other);
	};
	
	
	
} // end simple_shapes namespace
#endif
