#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x178 - 0x16C)
// BlueprintGeneratedClass AIA_Creature_Combat_Wildlife_Melee_Summoner.AIA_Creature_Combat_Wildlife_Melee_Summoner_C
class UAIA_Creature_Combat_Wildlife_Melee_Summoner_C : public UAIA_Creature_Combat_Wildlife_C
{
public:
	uint8                                        Pad_5DAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_Wildlife_Melee_Summoner_C* GetDefaultObj();

	bool CheckOwnerRequirements(bool CallFunc_OwnerMeleeRequirements_Success, bool CallFunc_CheckOwnerRequirements_ReturnValue);
	void OwnerMeleeRequirements(bool* Success, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void Start(class AActor* Target);
	void Stop(class AActor* Target);
	void ExecuteUbergraph_AIA_Creature_Combat_Wildlife_Melee_Summoner(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, class AActor* K2Node_Event_Target_1, class AActor* K2Node_Event_Target);
};

}


