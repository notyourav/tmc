#ifndef GREATFAIRY_H
#define GREATFAIRY_H

extern u32 __modsi3(u32, u32);
extern void InitializeAnimation(Entity*, u32);
extern void GreatFairy_InitializeAnimation(Entity*);
extern u32 CheckRoomFlag();
extern Entity* GreatFairy_CreateForm(Entity*, u32, u32);
extern void PositionRelative();
extern void CopyPosition();
extern void DoFade();
extern void PlaySFX();
extern void GetNextFrame();
extern void sub_0805EC9C();
extern void sub_0805EC60();
extern void sub_080873D0();
extern void DeleteEntity();
extern u32 sub_080045D4();
extern void sub_0806F69C();
extern u32 Random();
extern void sub_0805E3A0(Entity*, u32);
extern Entity* FindEntityInListBySubtype(u32, u32, u32);
extern void sub_080791D0();
extern u32 FindEntityInListByForm(u32, u32, u32, u32, u32);
extern void (*const GreatFairy_Main[])(Entity*);
extern void (*const GreatFairy_Behaviors[])(Entity*);
extern void (*const GreatFairy_WingsBehaviors[])(Entity*);
extern void (*const GreatFairy_WakeBehaviors[])(Entity*);
extern void (*const GreatFairy_MiniBehaviors[])(Entity*);
extern void (*const GreatFairy_MiniAffineBehaviors[])(Entity*);
extern void (*const GreatFairy_DropletBehaviors[])(Entity*);
extern void (*const GreatFairy_RippleBehaviors[])(Entity*);
extern void (*const GreatFairy_BigRippleBehaviors[])(Entity*);
extern void (*const GreatFairy_EnergyBehaviors[])(Entity*);
extern void (*const GreatFairy_Form1Behaviors[])(Entity*);
extern void (*const GreatFairy_Form2Behaviors[])(Entity*);
extern void (*const gUnk_081207A4[])(Entity*);

extern u32 gUnk_0810C2E4;
extern RoomControls gRoomControls;
extern Entity gPlayerEntity;
extern const s16 GreatFairy_RippleOffsets[10];
extern u32 gUnk_02034350;
extern RoomVars gRoomVars;
extern Screen gScreen;
extern u32 gUnk_02033280;
extern u8 gUnk_0812079C[8];
extern s16 gSineTable[];
extern s8 gUnk_081207AC[];

typedef struct {
    s32 unk0;
    s32 unk4;
} struct_08087424;

#endif
