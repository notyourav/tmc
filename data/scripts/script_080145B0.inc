SCRIPT_START script_080145B0
	BeginBlock 
	SetEntityPositionRelative 0x01f8, 0x00e0
	CheckLocalFlag 0x005e
	JumpIf script_080145E4
	EndBlock 
script_080145C2:
	CheckRoomFlag 0x0005
	JumpIfNot script_080145C2
	_0807E864 
	ClearRoomFlag 0x0005
	Wait 0x000c
	_0807EB8C 
	TextboxNoOverlapFollowPos 0x432e, 0x000c
	_0807EA94 
	_0807E878 
	Jump script_080145C2
script_080145E4:
	EndBlock 
SCRIPT_END
