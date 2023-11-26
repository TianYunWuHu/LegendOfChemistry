#include "card.h"

void Card::ChangeNumber(int num) {
	this->number = num;
}

int Card::Number() {
	return this->number;
}

IonCard::IonCard(IonCardType cardType) {
	this->CardType = cardType;
}

bool IonCard::operator==(IonCard& card) {
	if (this->CardType == card.CardType) return true;
	else return false;
}