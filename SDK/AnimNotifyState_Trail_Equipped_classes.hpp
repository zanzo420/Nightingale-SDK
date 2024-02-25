#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xB0 - 0x38)
// BlueprintGeneratedClass AnimNotifyState_Trail_Equipped.AnimNotifyState_Trail_Equipped_C
class UAnimNotifyState_Trail_Equipped_C : public UAnimNotifyState_FPTP
{
public:
	TMap<struct FItemDataReference, class UAnimSequence*> TrailAnimation;                                    // 0x38(0x50)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UNiagaraSystem>         Magic_Effect;                                      // 0x88(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotifyState_Trail_Equipped_C* GetDefaultObj();

	void GetItemMesh(class UActorComponent* Mesh, class USkeletalMeshComponent** SkeletalMeshRoot, struct FItemDataReference* ItemId, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ILoadoutReadInterface> CallFunc_GetEquippedItem_self_CastInput, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetLightweightRoot_bSuccess, class USkeletalMeshComponent* CallFunc_GetLightweightRoot_Root);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UNiagaraComponent* Particle, const TArray<class UNiagaraComponent*>& ParticleArray, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class UNiagaraComponent* NiagaraSystem, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess);
};

}


