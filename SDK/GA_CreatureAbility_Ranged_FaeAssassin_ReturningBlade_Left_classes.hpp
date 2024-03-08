#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x6C8 - 0x6C0)
// BlueprintGeneratedClass GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left.GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C
class UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C : public UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Left(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

}


