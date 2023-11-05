#include "card.h"

bool IonCard::operator==(IonCard card) {
	if (this->ThisCardType == card.ThisCardType) return true;
	else return false;
}