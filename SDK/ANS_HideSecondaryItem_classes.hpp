#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass ANS_HideSecondaryItem.ANS_HideSecondaryItem_C
class UANS_HideSecondaryItem_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UANS_HideSecondaryItem_C* GetDefaultObj();

	bool SetSecondaryHidden(class USkeletalMeshComponent* SkeletalMeshComp, bool Hidden, class ABP_Character_C* Character, class AEquippableItem* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetItemInLoadoutSlot_ReturnValue);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class ABP_Character_C* Character, bool CallFunc_SetSecondaryHidden_ReturnValue);
	void Set1stPersonSecondaryHidden(bool Hidden_, class ABP_EquippableItemBase_C* Item, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem);
	void Set3rdPersonSecondaryHidden(bool Hidden_, class ABP_EquippableItemBase_C* Item);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class ABP_Character_C* Character, bool CallFunc_SetSecondaryHidden_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class ABP_Character_C* Character, bool CallFunc_SetSecondaryHidden_ReturnValue);
};

}


