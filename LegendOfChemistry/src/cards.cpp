#include "cards.h"

//获取牌堆
std::vector<IonCard> Cards::GetCards() {
	return cards;
}

//检查牌堆里是否有某张牌
bool Cards::CheckIonElement(std::vector<IonCard> CheckedCards, IonCard CheckedCard) {
	for (int i = 0; i < CheckedCards.size(); i++) {
		if (CheckedCards[i] == CheckedCard) return true;
	}
	return false;
}