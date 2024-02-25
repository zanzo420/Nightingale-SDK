#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ProjectilePayload_Torch.GA_ProjectilePayload_Torch_C
// (None)

class UClass* UGA_ProjectilePayload_Torch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ProjectilePayload_Torch_C");

	return Clss;
}


// GA_ProjectilePayload_Torch_C GA_ProjectilePayload_Torch.Default__GA_ProjectilePayload_Torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ProjectilePayload_Torch_C* UGA_ProjectilePayload_Torch_C::GetDefaultObj()
{
	static class UGA_ProjectilePayload_Torch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ProjectilePayload_Torch_C*>(UGA_ProjectilePayload_Torch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ProjectilePayload_Torch.GA_ProjectilePayload_Torch_C.HandleProjectileImpact
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          TorchITM                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileBase_Torch_C*  K2Node_DynamicCast_AsBP_Projectile_Base_Torch                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemInstanceData*>   Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_CreateNewItemEntry_NewEntry                             (None)
// enum class EGetResult              CallFunc_CreateNewItemEntry_OutBranch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ItemProxy_Simple_Torch_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_ProjectilePayload_Torch_C::HandleProjectileImpact(const struct FItemDataReference& TorchITM, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class ABP_ProjectileBase_Torch_C* K2Node_DynamicCast_AsBP_Projectile_Base_Torch, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class UItemInstanceData*>& Temp_object_Variable, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ItemProxy_Simple_Torch_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ProjectilePayload_Torch_C", "HandleProjectileImpact");

	Params::UGA_ProjectilePayload_Torch_C_HandleProjectileImpact_Params Parms{};

	Parms.TorchITM = TorchITM;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Base_Torch = K2Node_DynamicCast_AsBP_Projectile_Base_Torch;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_CreateNewItemEntry_NewEntry = CallFunc_CreateNewItemEntry_NewEntry;
	Parms.CallFunc_CreateNewItemEntry_OutBranch = CallFunc_CreateNewItemEntry_OutBranch;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


