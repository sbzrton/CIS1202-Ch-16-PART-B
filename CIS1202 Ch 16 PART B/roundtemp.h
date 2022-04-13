#pragma once
#include <iomanip>
#include<iostream>
using namespace std;

//generic template
template <typename R> 

	R half(R num) {


		num = num * .5;

		return num;
	}
	 
	//Explicit template
	template <typename R> int half(int num) {

		float halved = num * .5;
	
	num = static_cast<int>(round(halved));
		return num;

	}