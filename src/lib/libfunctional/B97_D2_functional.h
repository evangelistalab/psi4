#ifndef B97_D2_functional_h
#define B97_D2_functional_h
/**********************************************************
* B97_D2_functional.h: declarations for B97_D2_functional for KS-DFT
* Robert Parrish, robparrish@gmail.com
* Autogenerated by MATLAB Script on 27-Oct-2010
*
***********************************************************/
#include "functional.h"

namespace psi { namespace functional {

class B97_D2_Functional : public Functional {
public:
    B97_D2_Functional(int npoints, int deriv);
    virtual ~B97_D2_Functional();
    virtual void computeRKSFunctional(boost::shared_ptr<Properties> prop);
    virtual void computeUKSFunctional(boost::shared_ptr<Properties> prop);
};
}}
#endif

