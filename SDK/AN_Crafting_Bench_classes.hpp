#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass AN_Crafting_Bench.AN_Crafting_Bench_C
class UAN_Crafting_Bench_C : public UAnimNotify
{
public:
	class UAkAudioEvent*                         Scoped_AK_Event;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_Crafting_Bench_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UScopedAkComponent* Scoped_Ak_Component, class ABP_Structure_CraftingBench_C* CraftingBench, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Structure_CraftingBench_C* K2Node_DynamicCast_AsBP_Structure_Crafting_Bench, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ CallFunc_GetAkEventCallback_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UScopedAkComponent* CallFunc_GetStructureAkComponent_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_PostAkEventScopedWithCallback_ReturnValue);
};

}


