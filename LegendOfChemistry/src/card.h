#ifndef _LOC_CARD_H_
#define _LOC_CARD_H_

#include "qimage.h"

//牌类型 ion离子元素牌 condition条件牌 multiple倍数牌

class IonCard {
private:
	enum CardType { C, N, Na, O, Mg, Al, S, Cl, K, Ca, Fe, Cu, Zn, Ag, Ba, H, OH, SO4, HSO4, NO3, CO3, HCO3, NH4 } ThisCardType;
	QImage face;

public:
	bool operator==(IonCard card);
	IonCard reaction();
};
#endif // !_COFLIB_CARD_H_

