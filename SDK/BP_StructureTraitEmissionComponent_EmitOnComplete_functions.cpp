#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitEmissionComponent_EmitOnComplete.BP_StructureTraitEmissionComponent_EmitOnComplete_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_StructureTraitEmissionComponent_EmitOnComplete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitEmissionComponent_EmitOnComplete_C");

	return Clss;
}


// BP_StructureTraitEmissionComponent_EmitOnComplete_C BP_StructureTraitEmissionComponent_EmitOnComplete.Default__BP_StructureTraitEmissionComponent_EmitOnComplete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitEmissionComponent_EmitOnComplete_C* UBP_StructureTraitEmissionComponent_EmitOnComplete_C::GetDefaultObj()
{
	static class UBP_StructureTraitEmissionComponent_EmitOnComplete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitEmissionComponent_EmitOnComplete_C*>(UBP_StructureTraitEmissionComponent_EmitOnComplete_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitEmissionComponent_EmitOnComplete.BP_StructureTraitEmissionComponent_EmitOnComplete_C.OnOwningStructureInitialized
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEmissionComponent_EmitOnComplete_C::OnOwningStructureInitialized(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEmissionComponent_EmitOnComplete_C", "OnOwningStructureInitialized");

	Params::UBP_StructureTraitEmissionComponent_EmitOnComplete_C_OnOwningStructureInitialized_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEmissionComponent_EmitOnComplete.BP_StructureTraitEmissionComponent_EmitOnComplete_C.OnOwningStructureStateUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEmissionComponent_EmitOnComplete_C::OnOwningStructureStateUpdated(class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEmissionComponent_EmitOnComplete_C", "OnOwningStructureStateUpdated");

	Params::UBP_StructureTraitEmissionComponent_EmitOnComplete_C_OnOwningStructureStateUpdated_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEmissionComponent_EmitOnComplete.BP_StructureTraitEmissionComponent_EmitOnComplete_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEmissionComponent_EmitOnComplete_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEmissionComponent_EmitOnComplete_C", "ReceiveEndPlay");

	Params::UBP_StructureTraitEmissionComponent_EmitOnComplete_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEmissionComponent_EmitOnComplete.BP_StructureTraitEmissionComponent_EmitOnComplete_C.PostInitializeEmissionTraits
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_StructureTraitEmissionComponent_EmitOnComplete_C::PostInitializeEmissionTraits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEmissionComponent_EmitOnComplete_C", "PostInitializeEmissionTraits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureTraitEmissionComponent_EmitOnComplete.BP_StructureTraitEmissionComponent_EmitOnComplete_C.ExecuteUbergraph_BP_StructureTraitEmissionComponent_EmitOnComplete
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AStructureConstructedBase*   K2Node_DynamicCast_AsStructure_Constructed_Base                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureConstructedBase*   K2Node_DynamicCast_AsStructure_Constructed_Base_1                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEmissionComponent_EmitOnComplete_C::ExecuteUbergraph_BP_StructureTraitEmissionComponent_EmitOnComplete(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AStructureConstructedBase* K2Node_DynamicCast_AsStructure_Constructed_Base, bool K2Node_DynamicCast_bSuccess, class AStructureConstructedBase* K2Node_DynamicCast_AsStructure_Constructed_Base_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* CallFunc_GetOwner_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEmissionComponent_EmitOnComplete_C", "ExecuteUbergraph_BP_StructureTraitEmissionComponent_EmitOnComplete");

	Params::UBP_StructureTraitEmissionComponent_EmitOnComplete_C_ExecuteUbergraph_BP_StructureTraitEmissionComponent_EmitOnComplete_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Constructed_Base = K2Node_DynamicCast_AsStructure_Constructed_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Constructed_Base_1 = K2Node_DynamicCast_AsStructure_Constructed_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


