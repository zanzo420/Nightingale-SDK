#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1A0 - 0x1A0)
// BlueprintGeneratedClass AIAR_AggressiveToTarget_Harpy.AIAR_AggressiveToTarget_Harpy_C
class UAIAR_AggressiveToTarget_Harpy_C : public UAIAR_AggressiveToTarget
{
public:

	static class UClass* StaticClass();
	static class UAIAR_AggressiveToTarget_Harpy_C* GetDefaultObj();

	bool IsHostileTowardsTarget(class AActor* TargetActor, class AActor* InCreature, const struct FGameplayTag& Temp_struct_Variable, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsHostileTowardsTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ANWXAICharacter* CallFunc_GetCreature_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
};

}


