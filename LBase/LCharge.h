#ifndef _L_CHARGE_H_
#define _L_CHARGE_H_

#include "LBuff.h"

//房卡类型
enum CARD_TYPE
{
	CARD_TYPE_4 = 1,//4局卡
	CARD_TYPE_8 = 2,//8局卡
	CARD_TYPE_16 = 3,//16局卡
	CARD_TYPE_32 = 4, //1局卡
	CARD_TYPE_64 = 5, //2局卡
};

enum CARDS_OPER_TYPE
{
	CARDS_OPER_TYPE_INIT = 0,//新手赠送
	CARDS_OPER_TYPE_CHARGE = 1,//充值活动
	CARDS_OPER_TYPE_FREE_GIVE = 2,//免费赠送
	CARDS_OPER_TYPE_CREATE_ROOM = 3,//创建房间扣除
	CARDS_OPER_TYPE_ACTIVE = 4,		//活动送房卡
	CARDS_OPER_TYPE_PURCHASE_GIVE = 5,	//购买道具赠送
	CARDS_OPER_TYPE_VIP_GIVE = 6,	//购买道具VIP额外赠送
	CARDS_OPER_TYPE_INVITING = 7,		//邀请好友送房卡
	CARDS_OPER_TYPE_PLAYING = 8,	//完成牌局赠送
	CARDS_OPER_TYPE_SIGN_SPORT = 9,//报名比赛场扣除房卡或比赛场获得奖励
	CARDS_OPER_TYPE_DRAW = 10,     //抽奖使用
};

class LCharge
{
public:
	LCharge();
	~LCharge();

	void	Read(LBuff& buff);
	void	Write(LBuff& buff);
public:
	Lint	m_time;
	Lint	m_cardType;
	Lint	m_cardNum;
	Lint	m_type;
	Lint	m_userId;
	Lstring	m_admin;
};
#endif