find
HEADER_GG_WARP_CHARACTER = 13,

add(change the number if you already have it)
#ifdef CROSS_CHANNEL_FRIEND_REQUEST
	HEADER_GG_MESSENGER_REQUEST_ADD = 14,
#endif

find
typedef struct SPacketGGMessenger
{
	uint8_t        bHeader;
	char        szAccount[CHARACTER_NAME_MAX_LEN + 1];
	char        szCompanion[CHARACTER_NAME_MAX_LEN + 1];
} TPacketGGMessenger;


add
#ifdef CROSS_CHANNEL_FRIEND_REQUEST
typedef struct SPacketGGMessengerRequest
{
	uint8_t	header;
	char	account[CHARACTER_NAME_MAX_LEN + 1];
	char	target[CHARACTER_NAME_MAX_LEN + 1];
} TPacketGGMessengerRequest;
#endif
