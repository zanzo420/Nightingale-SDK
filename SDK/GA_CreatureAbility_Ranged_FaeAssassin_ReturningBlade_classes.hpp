#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x6C0 - 0x6B8)
// BlueprintGeneratedClass GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade.GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C
class UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C : public UGA_CreatureAbility_Ranged01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade(int32 EntryPoint);
};

}


