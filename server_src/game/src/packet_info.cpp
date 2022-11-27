find
	Set(HEADER_GG_MESSENGER_ADD, sizeof(TPacketGGMessenger), "MessengerAdd", false);

add
#ifdef CROSS_CHANNEL_FRIEND_REQUEST
	Set(HEADER_GG_MESSENGER_REQUEST_ADD, sizeof(TPacketGGMessengerRequest), "MessengerRequestAdd", false);
#endif
