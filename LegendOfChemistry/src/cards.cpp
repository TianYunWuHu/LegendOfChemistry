#include "cards.h"

//��ȡ�ƶ�
std::vector<IonCard> Cards::GetCards() {
	return cards;
}

//����ƶ����Ƿ���ĳ����
bool Cards::CheckIonElement(std::vector<IonCard> CheckedCards, IonCard CheckedCard) {
	for (int i = 0; i < CheckedCards.size(); i++) {
		if (CheckedCards[i] == CheckedCard) return true;
	}
	return false;
}