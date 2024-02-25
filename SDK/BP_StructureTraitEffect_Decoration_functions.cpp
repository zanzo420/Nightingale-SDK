#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitEffect_Decoration.BP_StructureTraitEffect_Decoration_C
// (None)

class UClass* UBP_StructureTraitEffect_Decoration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitEffect_Decoration_C");

	return Clss;
}


// BP_StructureTraitEffect_Decoration_C BP_StructureTraitEffect_Decoration.Default__BP_StructureTraitEffect_Decoration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitEffect_Decoration_C* UBP_StructureTraitEffect_Decoration_C::GetDefaultObj()
{
	static class UBP_StructureTraitEffect_Decoration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitEffect_Decoration_C*>(UBP_StructureTraitEffect_Decoration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitEffect_Decoration.BP_StructureTraitEffect_Decoration_C.AddModifiers
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CurrentStack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             StructureTrait                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStationComp                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEnvironmentalInfluenceReceiver>K2Node_DynamicCast_AsEnvironmental_Influence_Receiver            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEnvironmentalInfluenceReceiver>K2Node_DynamicCast_AsEnvironmental_Influence_Receiver_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_Decoration_C::AddModifiers(class UObject* Target, uint8 CurrentStack, struct FStructureTrait& StructureTrait, class UBP_CraftingStationComponent_C* CraftingStationComp, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_Decoration_C", "AddModifiers");

	Params::UBP_StructureTraitEffect_Decoration_C_AddModifiers_Params Parms{};

	Parms.Target = Target;
	Parms.CurrentStack = CurrentStack;
	Parms.StructureTrait = StructureTrait;
	Parms.CraftingStationComp = CraftingStationComp;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsEnvironmental_Influence_Receiver = K2Node_DynamicCast_AsEnvironmental_Influence_Receiver;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsEnvironmental_Influence_Receiver_1 = K2Node_DynamicCast_AsEnvironmental_Influence_Receiver_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEffect_Decoration.BP_StructureTraitEffect_Decoration_C.RemoveModifiers
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CurrentStack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             StructureTrait                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStationComp                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEnvironmentalInfluenceReceiver>K2Node_DynamicCast_AsEnvironmental_Influence_Receiver            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEnvironmentalInfluenceReceiver>K2Node_DynamicCast_AsEnvironmental_Influence_Receiver_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_Decoration_C::RemoveModifiers(class UObject* TargetActor, uint8 CurrentStack, struct FStructureTrait& StructureTrait, class UBP_CraftingStationComponent_C* CraftingStationComp, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_Decoration_C", "RemoveModifiers");

	Params::UBP_StructureTraitEffect_Decoration_C_RemoveModifiers_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CurrentStack = CurrentStack;
	Parms.StructureTrait = StructureTrait;
	Parms.CraftingStationComp = CraftingStationComp;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsEnvironmental_Influence_Receiver = K2Node_DynamicCast_AsEnvironmental_Influence_Receiver;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsEnvironmental_Influence_Receiver_1 = K2Node_DynamicCast_AsEnvironmental_Influence_Receiver_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEffect_Decoration.BP_StructureTraitEffect_Decoration_C.OnTraitAdded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureActorInPlacement_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_Decoration_C::OnTraitAdded(class AActor* OwningActor, struct FStructureTrait& Trait, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStructureActorInPlacement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_Decoration_C", "OnTraitAdded");

	Params::UBP_StructureTraitEffect_Decoration_C_OnTraitAdded_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Trait = Trait;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsStructureActorInPlacement_ReturnValue = CallFunc_IsStructureActorInPlacement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEffect_Decoration.BP_StructureTraitEffect_Decoration_C.OnTraitRemoved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureActorInPlacement_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_Decoration_C::OnTraitRemoved(class AActor* OwningActor, struct FStructureTrait& Trait, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStructureActorInPlacement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_Decoration_C", "OnTraitRemoved");

	Params::UBP_StructureTraitEffect_Decoration_C_OnTraitRemoved_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Trait = Trait;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsStructureActorInPlacement_ReturnValue = CallFunc_IsStructureActorInPlacement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEffect_Decoration.BP_StructureTraitEffect_Decoration_C.OnTraitStackChanged
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// uint8                              PrevStack                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureActorInPlacement_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_Decoration_C::OnTraitStackChanged(class AActor* OwningActor, struct FStructureTrait& Trait, uint8 PrevStack, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStructureActorInPlacement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_Decoration_C", "OnTraitStackChanged");

	Params::UBP_StructureTraitEffect_Decoration_C_OnTraitStackChanged_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Trait = Trait;
	Parms.PrevStack = PrevStack;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsStructureActorInPlacement_ReturnValue = CallFunc_IsStructureActorInPlacement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


