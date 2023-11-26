#ifndef _LOC_CARD_H_
#define _LOC_CARD_H_

//牌类型 ion离子元素牌 condition条件牌 multiple倍数牌
enum IonCardType { C, N, Na, O, Mg, Al, S, Cl, K, Ca, Fe, Cu, Zn, Ag, Ba, H, OH, SO4, HSO4, NO3, CO3, HCO3, NH4 };
//升温和降温不知道怎么说 就heat和cool
enum ConditionType { ignite, energize, heat, cool, filtrate };
enum MultipleType { x2, x3, x4 };

class Card {
private:
	int number = 0;

public:
	void ChangeNumber(int num);
	int Number();
};
class IonCard : public Card {
private:
	IonCardType CardType;

public:
	IonCard(IonCardType cardType);
	bool operator==(IonCard& card);
	IonCard reaction();
};

class ConditionCard : public Card {

};

class MultipleCard : public Card {

};
#endif // !_COFLIB_CARD_H_

