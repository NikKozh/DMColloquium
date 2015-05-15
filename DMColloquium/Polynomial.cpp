//
//  Polynomial.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Polynomial.h"
using namespace std;
Polynomial::Polynomial() {
    coefficients = vector<RationalNumber>(1);
}

// Задача P-2, группа: Кожевников Никита, Ташланов Андрей
Polynomial Polynomial::SUB_PP_P(Polynomial SecondPoly)
{
	Polynomial result = *this;
	unsigned int i;

	if (result.coefficients.size() >= SecondPoly.coefficients.size()) // Если первый многочлен больше второго или равен ему
	{
		for (i = 0; i < SecondPoly.coefficients.size(); i++)
			result.coefficients[i] = result.coefficients[i].SUB_QQ_Q(SecondPoly.coefficients[i]);
	}
	else
	{
		for (i = 0; i < result.coefficients.size(); i++)
			result.coefficients[i] = result.coefficients[i].SUB_QQ_Q(SecondPoly.coefficients[i]);
		for (RationalNumber null; i < SecondPoly.coefficients.size(); i++) // Создаётся объект null рационального типа (дробь 0/1). Из него вычитаются коэффициенты второго многочлена в том случае, если первый многочлен оказался меньше и его дальнейшие коэффициенты, из которых нужно вычитать, отсутствуют.
			result.coefficients[i] = null.SUB_QQ_Q(SecondPoly.coefficients[i]);
	}

	return result;
}
