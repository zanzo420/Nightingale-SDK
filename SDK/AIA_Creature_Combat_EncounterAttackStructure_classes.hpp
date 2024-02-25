#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x188 - 0x188)
// BlueprintGeneratedClass AIA_Creature_Combat_EncounterAttackStructure.AIA_Creature_Combat_EncounterAttackStructure_C
class UAIA_Creature_Combat_EncounterAttackStructure_C : public UAIA_Creature_Combat_AttackStructure_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_EncounterAttackStructure_C* GetDefaultObj();

	int32 GetTicketPriority(class AActor* Target, int32 CallFunc_GetTicketPriority_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, class AActor* LTarget, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, TScriptInterface<class IBPI_StructureAIInterfaces_C> K2Node_DynamicCast_AsBPI_Structure_AIInterfaces, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_GetReachableNavTransform_Success, const struct FTransform& CallFunc_GetReachableNavTransform_ReachableNavTransform, class UObject* CallFunc_GetReachableNavTransform_Structure);
	float GetNormalizedScore(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, float CallFunc_GetNormalizedScore_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class APawn*>& CallFunc_GetPlayersInRange_Players, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast);
	bool CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_GetIsValidEnemyStructure_IsValidEnemyStructure, bool CallFunc_CheckStaticTargetRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


