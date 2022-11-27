find
	void	RequestToAdd(LPCHARACTER ch, LPCHARACTER target);

add
#ifdef CROSS_CHANNEL_FRIEND_REQUEST
	void	RegisterRequestToAdd(const char* szAccount, const char* szTarget);
	void	P2PRequestToAdd_Stage1(LPCHARACTER ch, const char* targetName);
	void	P2PRequestToAdd_Stage2(const char* characterName, LPCHARACTER target);
#endif
