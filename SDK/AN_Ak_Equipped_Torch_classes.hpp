#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass AN_Ak_Equipped_Torch.AN_Ak_Equipped_Torch_C
class UAN_Ak_Equipped_Torch_C : public UAnimNotify
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_Ak_Equipped_Torch_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem, bool CallFunc_IsValid_ReturnValue, class ABP_LightweightTorch_C* K2Node_DynamicCast_AsBP_Lightweight_Torch, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_PostAkEventScoped_ReturnValue);
};

}


