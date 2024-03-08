#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x528 - 0x520)
// BlueprintGeneratedClass GA_CreatureAbility_Evade_FaeAssassin.GA_CreatureAbility_Evade_FaeAssassin_C
class UGA_CreatureAbility_Evade_FaeAssassin_C : public UGA_CreatureAbility_Evade_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Evade_FaeAssassin_C* GetDefaultObj();

	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_Evade_FaeAssassin(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled);
};

}


