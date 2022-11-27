in
case MESSENGER_SUBHEADER_CG_ADD_BY_NAME:

find
		if (!tch)
		{
			ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("%s is not online."), name);
		}
		else

replace
		if (!tch)
		{
#ifdef CROSS_CHANNEL_FRIEND_REQUEST
			MessengerManager::instance().P2PRequestToAdd_Stage1(ch, name);
#endif
			//ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("%s is not online."), name);
		}
		else