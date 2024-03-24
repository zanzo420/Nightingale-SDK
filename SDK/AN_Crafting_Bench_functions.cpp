#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Crafting_Bench.AN_Crafting_Bench_C
// (None)

class UClass* UAN_Crafting_Bench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Crafting_Bench_C");

	return Clss;
}


// AN_Crafting_Bench_C AN_Crafting_Bench.Default__AN_Crafting_Bench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_Crafting_Bench_C* UAN_Crafting_Bench_C::GetDefaultObj()
{
	static class UAN_Crafting_Bench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_Crafting_Bench_C*>(UAN_Crafting_Bench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_Crafting_Bench.AN_Crafting_Bench_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          Scoped_Ak_Component                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_CraftingBench_C*CraftingBench                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_CraftingBench_C*K2Node_DynamicCast_AsBP_Structure_Crafting_Bench                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 CallFunc_GetAkEventCallback_ReturnValue                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetStructureAkComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScopedWithCallback_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAN_Crafting_Bench_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UScopedAkComponent* Scoped_Ak_Component, class ABP_Structure_CraftingBench_C* CraftingBench, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Structure_CraftingBench_C* K2Node_DynamicCast_AsBP_Structure_Crafting_Bench, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ CallFunc_GetAkEventCallback_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UScopedAkComponent* CallFunc_GetStructureAkComponent_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_PostAkEventScopedWithCallback_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Crafting_Bench_C", "Received_Notify");

	Params::UAN_Crafting_Bench_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.Scoped_Ak_Component = Scoped_Ak_Component;
	Parms.CraftingBench = CraftingBench;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Crafting_Bench = K2Node_DynamicCast_AsBP_Structure_Crafting_Bench;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAkEventCallback_ReturnValue = CallFunc_GetAkEventCallback_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetStructureAkComponent_ReturnValue = CallFunc_GetStructureAkComponent_ReturnValue;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_PostAkEventScopedWithCallback_ReturnValue = CallFunc_PostAkEventScopedWithCallback_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


