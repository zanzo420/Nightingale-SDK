#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x178 - 0x16C)
// BlueprintGeneratedClass AIA_Creature_Combat_Wildlife_FleeSquadAttacked.AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C
class UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C : public UAIA_Creature_Combat_Wildlife_C
{
public:
	uint8                                        Pad_4E0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C* GetDefaultObj();

	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_1);
	float GetNormalizedScore(class AActor* Target);
	void Start(class AActor* Target);
	void ExecuteUbergraph_AIA_Creature_Combat_Wildlife_FleeSquadAttacked(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_Target);
};

}


