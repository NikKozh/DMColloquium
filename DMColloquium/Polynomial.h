//
//  Polynomial.h
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "RationalNumber.h"

class Polynomial {
private:
    std::vector<RationalNumber> coefficients;
public:
	Polynomial SUB_PP_P(Polynomial SecondPoly);
};

#endif /* defined(__DMColloquium__Polynomial__) */ 
