#include "cards.h"

void Cards::addCards(IonCard addCards) {
	addCards.ChangeNumber(this->count);
	IonVector.append(addCards);
	count += 1;
}

void Cards::addCards(ConditionCard addCards) {
	addCards.ChangeNumber(this->count);
	ConditionVector.append(addCards);
	count += 1;
}

void Cards::addCards(MultipleCard addCards) {
	addCards.ChangeNumber(this->count);
	MultipleVector.append(addCards);
	count += 1;
}