#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass ANS_ReduceStrengthResistance.ANS_ReduceStrengthResistance_C
class UANS_ReduceStrengthResistance_C : public UAnimNotifyState
{
public:
	enum class EVisibilityBasedAnimTickOption    VisibilityBasedAnimTickOption;                     // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A20A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CreatureBase_C*                    Creature;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNWXAbilitySystemComponent*            Ability_System;                                    // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_ReduceStrengthResistance_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UNWXAbilitySystemComponent* LSameAbilitySystem, class ABP_CreatureBase_C* LSameCreature, class USkeletalMeshComponent* LMesh, class UBP_CreatureSocketTraceComponent_C* SocketTraceComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UNWXAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class ABP_CreatureBase_C* LCreature, class UNWXAbilitySystemComponent* LAbilitySystem, class AActor* Actor, class UBP_CreatureSocketTraceComponent_C* SocketTraceComponent, const struct FS_CreatureKnockbackData& KnockbackData, class AActor* CallFunc_GetOwner_ReturnValue, class UNWXAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


