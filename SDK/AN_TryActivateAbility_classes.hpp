#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass AN_TryActivateAbility.AN_TryActivateAbility_C
class UAN_TryActivateAbility_C : public UAnimNotify
{
public:
	struct FGameplayTag                          AbilityTag;                                        // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_TryActivateAbility_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UNWXAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue);
	class FString GetNotifyName(class FName CallFunc_GetTagName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue);
};

}


