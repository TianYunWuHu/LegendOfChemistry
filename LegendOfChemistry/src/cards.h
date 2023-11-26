#ifndef _LOC_CARDS_H_
#define _LOC_CARDS_H_

#include "card.h"
#include<qvector.h>

class Cards {
private:
	QVector<IonCard> IonVector;
	QVector<ConditionCard> ConditionVector;
	QVector<MultipleCard> MultipleVector;
	int count = 0;

public:
	void addCards(IonCard addCards);
	void addCards(ConditionCard addCards);
	void addCards(MultipleCard addCards);

};

#endif // !_COL_CARDS_H_
