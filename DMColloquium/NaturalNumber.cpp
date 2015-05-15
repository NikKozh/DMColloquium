//
//  NaturalNumber.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "NaturalNumber.h"

NaturalNumber::NaturalNumber() {
	digitBlocks = std::vector<unsigned int>(1);
	digitBlocks[0] = 0;
}

// Задача N-3, группа: Кожевников Никита, Ташланов Андрей
NaturalNumber NaturalNumber::ADD_1N_N(){
	NaturalNumber result = *this;

	for (unsigned int i = 0; i < result.digitBlocks.size(); i++)
	{
		if (result.digitBlocks[i] != 999999999)
		{
			result.digitBlocks[i] += 1;
			break;
		}
		else
			result.digitBlocks[i] = 0;
	
		if ((i+1) == result.digitBlocks.size())
		{
			result.digitBlocks.push_back(1);
			break;
		}
	}

    return result;
}
