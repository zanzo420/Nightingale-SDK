#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass BTD_LeaderEncumbered.BTD_LeaderEncumbered_C
class UBTD_LeaderEncumbered_C : public UBTDecorator_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UBTD_LeaderEncumbered_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class UAICompanionComponent* CompanionComponent, class ABP_CreatureBase_C* LCreature, class ABP_CreatureSpawnerBase_C* LSpawner, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class UAICompanionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXCharacter* CallFunc_GetLeader_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
};

}


