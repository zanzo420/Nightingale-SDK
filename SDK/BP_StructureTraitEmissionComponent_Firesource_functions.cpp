#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitEmissionComponent_Firesource.BP_StructureTraitEmissionComponent_Firesource_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_StructureTraitEmissionComponent_Firesource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitEmissionComponent_Firesource_C");

	return Clss;
}


// BP_StructureTraitEmissionComponent_Firesource_C BP_StructureTraitEmissionComponent_Firesource.Default__BP_StructureTraitEmissionComponent_Firesource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitEmissionComponent_Firesource_C* UBP_StructureTraitEmissionComponent_Firesource_C::GetDefaultObj()
{
	static class UBP_StructureTraitEmissionComponent_Firesource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitEmissionComponent_Firesource_C*>(UBP_StructureTraitEmissionComponent_Firesource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitEmissionComponent_Firesource.BP_StructureTraitEmissionComponent_Firesource_C.OnIgnite
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_StructureTraitEmissionComponent_Firesource_C::OnIgnite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEmissionComponent_Firesource_C", "OnIgnite");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureTraitEmissionComponent_Firesource.BP_StructureTraitEmissionComponent_Firesource_C.OnExtinguish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_StructureTraitEmissionComponent_Firesource_C::OnExtinguish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEmissionComponent_Firesource_C", "OnExtinguish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureTraitEmissionComponent_Firesource.BP_StructureTraitEmissionComponent_Firesource_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEmissionComponent_Firesource_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEmissionComponent_Firesource_C", "ReceiveEndPlay");

	Params::UBP_StructureTraitEmissionComponent_Firesource_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEmissionComponent_Firesource.BP_StructureTraitEmissionComponent_Firesource_C.PostInitializeEmissionTraits
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_StructureTraitEmissionComponent_Firesource_C::PostInitializeEmissionTraits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEmissionComponent_Firesource_C", "PostInitializeEmissionTraits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureTraitEmissionComponent_Firesource.BP_StructureTraitEmissionComponent_Firesource_C.ExecuteUbergraph_BP_StructureTraitEmissionComponent_Firesource
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureFireComponent*     Temp_object_Variable                                             (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureFireInterface>K2Node_DynamicCast_AsStructure_Fire_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureFireComponent*     CallFunc_GetStructureFireComponent_ReturnValue                   (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEmissionComponent_Firesource_C::ExecuteUbergraph_BP_StructureTraitEmissionComponent_Firesource(int32 EntryPoint, class UStructureFireComponent* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IStructureFireInterface> K2Node_DynamicCast_AsStructure_Fire_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureFireComponent* CallFunc_GetStructureFireComponent_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEmissionComponent_Firesource_C", "ExecuteUbergraph_BP_StructureTraitEmissionComponent_Firesource");

	Params::UBP_StructureTraitEmissionComponent_Firesource_C_ExecuteUbergraph_BP_StructureTraitEmissionComponent_Firesource_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Fire_Interface = K2Node_DynamicCast_AsStructure_Fire_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureFireComponent_ReturnValue = CallFunc_GetStructureFireComponent_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


