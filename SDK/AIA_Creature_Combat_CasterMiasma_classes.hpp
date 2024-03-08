#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x178 - 0x16C)
// BlueprintGeneratedClass AIA_Creature_Combat_CasterMiasma.AIA_Creature_Combat_CasterMiasma_C
class UAIA_Creature_Combat_CasterMiasma_C : public UAIA_Creature_Combat_C
{
public:
	uint8                                        Pad_A871[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_CasterMiasma_C* GetDefaultObj();

	int32 GetTicketPriority(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, int32 CallFunc_GetTicketPriority_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
	float GetNormalizedScore(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_GetPlayerInRange_PlayerInRange, class AActor* CallFunc_GetPlayerInRange_PlayerActor, double CallFunc_GetPlayerInRange_Distance, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckOwnerRequirements_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool CheckTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CheckTargetRequirements_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_CheckStaticTargetRequirements_ReturnValue);
	void Stop(class AActor* Target);
	void ExecuteUbergraph_AIA_Creature_Combat_CasterMiasma(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, class AActor* K2Node_Event_Target);
};

}


