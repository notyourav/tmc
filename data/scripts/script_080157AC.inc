SCRIPT_START script_080157AC
	CheckPlayerInRegion 0x01f8, 0x0310, 0x2020
	JumpIfNot script_080157AC
	_0807E864 
	Call sub_0807F9A4
	Call sub_0807DF28
	_0807E5F8 0x00000001
	WaitForSomething2 0x00000002
	Call sub_0807DF50
	_0807E878 
script_080157DA:
	CheckPlayerInRegion 0x0250, 0x0230, 0x3040
	JumpIfNot script_080157DA
	_0807E864 
	Call sub_0807F9A4
	Call sub_0807DF28
	Call sub_0807F3F8
	Wait 0x003c
	_0807E5F8 0x00000001
	WaitForSomething2 0x00000002
	StartPlayerScript script_080158F8
	_0807F0B4 0x0001
	SetEntityPositionRelative 0x0248, 0x0218
	CameraTargetEntity 
	Call sub_0807F5C0
	WaitForSomething2 0x00000010
	_0807E5F8 0x00000008
	WaitForSomething2 0x00000020
	_0807E5F8 0x00000001
	WaitForSomething2 0x00000002
	StartPlayerScript script_08015918
	WaitForSomething2 0x00000010
	_0807E5F8 0x00000001
	WaitForSomething2 0x00000002
	TextboxNoOverlapFollowPos 0x1066, 0x0002
	_0807EA94 
	_0807E5F8 0x00000001
	WaitForSomething2 0x00000002
	Call sub_0807DF50
	_0807E878 
	Call sub_08066F94
	_0807E5F8 0x00000008
script_08015880:
	CheckRoomFlag 0x0000
	JumpIfNot script_08015880
script_08015888:
	_0807EA94 
	ComparePlayerAction 0x001c
	JumpIf script_08015888
	_0807E864 
	Call sub_0807DF28
	_0807F0B4 0x0002
	SetEntityPositionRelative 0x0248, 0x0208
	CameraTargetEntity 
	StartPlayerScript script_08015938
	WaitForSomething2 0x00000010
	TextboxNoOverlapFollowPos 0x106a, 0x000c
	_0807EA94 
	_0807E5F8 0x00000008
	Wait 0x0078
	_0807E8E4_2 
	TextboxNoOverlapFollowPos 0x1068, 0x0002
	_0807EA94 
	_0807E5F8 0x00000001
	WaitForSomething2 0x00000002
	SetLocalFlag 0x008b
	Call sub_08066FB8
	Call sub_0807DF50
	_0807E878 
	_0807F0B4 0x0004
	CameraTargetPlayer 
	DoPostScriptAction 0x0006
SCRIPT_END
