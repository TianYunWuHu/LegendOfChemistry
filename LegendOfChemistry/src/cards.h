#ifndef _LOC_CARDS_H_
#define _LOC_CARDS_H_

#include <vector>
#include "card.h"

class Cards {
private:
	std::vector<IonCard> cards;

public:
	std::vector<IonCard> GetCards();
	bool CheckIonElement(std::vector<IonCard> CheckedCards,IonCard CheckedCard);
};

#endif // !_COL_CARDS_H_
