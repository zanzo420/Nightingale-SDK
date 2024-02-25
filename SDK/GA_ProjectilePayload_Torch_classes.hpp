#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x7E8 - 0x7E8)
// BlueprintGeneratedClass GA_ProjectilePayload_Torch.GA_ProjectilePayload_Torch_C
class UGA_ProjectilePayload_Torch_C : public UGA_ProjectilePayload_Thrown_C
{
public:

	static class UClass* StaticClass();
	static class UGA_ProjectilePayload_Torch_C* GetDefaultObj();

	void HandleProjectileImpact(const struct FItemDataReference& TorchITM, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class ABP_ProjectileBase_Torch_C* K2Node_DynamicCast_AsBP_Projectile_Base_Torch, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class UItemInstanceData*>& Temp_object_Variable, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ItemProxy_Simple_Torch_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


