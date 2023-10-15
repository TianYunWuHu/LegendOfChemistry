#ifndef _COFLIB_CARD_H_
#define _COFLIB_CARD_H_

#include "qimage.h"

//牌类型 ion离子元素牌 condition条件牌 multiple倍数牌
class ion_card {
private:
	QImage face;
public:
	ion_card reaction();//与其他离子牌反应

};

class C : public ion_card {
public:
	C();
};
class N : public ion_card {
public:
	N();
};
class Na : public ion_card {
public:
	Na();
};
class Mg : public ion_card {
public:
	Mg();
};
class Al : public ion_card {
public:
	Al();
};
class S : public ion_card {
public:
	S();
};
class Cl : public ion_card {
public:
	Cl();
};
class K : public ion_card {
public:
	K();
};
class Ca : public ion_card {
public:
	Ca();
};
class Fe : public ion_card {
public:
	Fe();
};
class Cu : public ion_card {
public:
	Cu();
};
class Zn : public ion_card {
public:
	Zn();
};
class Ag : public ion_card {
public:
	Ag();
};
class Ba : public ion_card {
public:
	Ba();
};
class H : public ion_card {
public:
	H();
};
class OH : public ion_card {
public:
	OH();
};
class SO4 : public ion_card {
public:
	SO4();
};
class HSO4 : public ion_card {
public:
	HSO4();
};
class NO3 : public ion_card {
public:
	NO3();
};
class CO3 : public ion_card {
public:
	CO3();
};
class HCO3 : public ion_card {
public:
	HCO3();
};
class NH4 : public ion_card {
public:
	NH4();
};
#endif // !_COFLIB_CARD_H_

