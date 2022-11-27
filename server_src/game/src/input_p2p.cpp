add
#ifdef CROSS_CHANNEL_FRIEND_REQUEST
#include "crc32.h"
#endif

find
void CInputP2P::MessengerAdd(const char* c_pData)

add before
#ifdef CROSS_CHANNEL_FRIEND_REQUEST
void CInputP2P::MessengerRequestAdd(const char* c_pData)
{
	TPacketGGMessengerRequest* p = (TPacketGGMessengerRequest*)c_pData;
	sys_log(0, "P2P: Messenger: Friend Request from %s to %s", p->account, p->target);

	LPCHARACTER tch = CHARACTER_MANAGER::Instance().FindPC(p->target);
	MessengerManager::Instance().P2PRequestToAdd_Stage2(p->account, tch);
}
#endif

find
	case HEADER_GG_MESSENGER_ADD:
		MessengerAdd(c_pData);
		break;

add
#ifdef CROSS_CHANNEL_FRIEND_REQUEST
	case HEADER_GG_MESSENGER_REQUEST_ADD:
		MessengerRequestAdd(c_pData);
		break;
#endif
