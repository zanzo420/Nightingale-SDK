#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x680 - 0x678)
// BlueprintGeneratedClass GA_ClimbFromItem.GA_ClimbFromItem_C
class UGA_ClimbFromItem_C : public UGA_TechniqueBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x678(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_ClimbFromItem_C* GetDefaultObj();

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, class UNWX_CharacterMovementComponent* K2Node_DynamicCast_AsNWX_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClimbing_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_ClimbFromItem(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UNWXTraversalComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTraversalTraceResult& CallFunc_TraversalTrace_OutResult, bool CallFunc_TraversalTrace_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromVector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class UAbilitySystemComponent* CallFunc_GetOwningActorAbilitySystem_ReturnValue, bool CallFunc_TryActivateAbilityByClass_ReturnValue);
};

}


