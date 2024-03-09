#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A8 - 0x1A0)
// BlueprintGeneratedClass AIAR_AggressiveToTarget_NPC.AIAR_AggressiveToTarget_NPC_C
class UAIAR_AggressiveToTarget_NPC_C : public UAIAR_AggressiveToTarget
{
public:
	class UAICompanionComponent*                 CompanionComponent;                                // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAR_AggressiveToTarget_NPC_C* GetDefaultObj();

	bool CheckTargetRequirements(class AActor* Target, float CombatDistance, class ANWXAICharacter* CallFunc_GetCreature_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_CheckTargetRequirements_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasLeader_ReturnValue, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast);
	bool IsHostileTowardsTarget(class AActor* TargetActor, class AActor* InCreature, const struct FGameplayTag& Temp_struct_Variable, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetTarget_Target, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1);
	bool Initialize(bool CallFunc_Initialize_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXAICharacter* CallFunc_GetCreature_ReturnValue, class UAICompanionComponent* CallFunc_GetComponentByClass_ReturnValue);
};

}


