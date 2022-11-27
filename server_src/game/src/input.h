find(any)
	void		LoginPing(LPDESC d, const char* c_pData);
	void		BlockChat(const char* c_pData);
	void		IamAwake(LPDESC d, const char* c_pData);

add
#ifdef CROSS_CHANNEL_FRIEND_REQUEST
	void		MessengerRequestAdd(const char* c_pData);
#endif