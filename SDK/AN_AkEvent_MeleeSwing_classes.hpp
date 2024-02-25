#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3B - 0x38)
// BlueprintGeneratedClass AN_AkEvent_MeleeSwing.AN_AkEvent_MeleeSwing_C
class UAN_AkEvent_MeleeSwing_C : public UAnimNotify_FPTP
{
public:
	enum class ESwingDirection                   SwingDirection;                                    // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeavySwing;                                      // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStopEvent;                                       // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_AkEvent_MeleeSwing_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UBP_EquippableItemAudioComponent_C* CachedEquippedItemAudio, class AEquippableItem* CachedEquippedItem, class AActor* CachedOwner, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, class UBP_EquippableItemAudioComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem);
};

}


