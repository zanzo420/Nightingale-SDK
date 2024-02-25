#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitEffect_GrowthRate.BP_StructureTraitEffect_GrowthRate_C
// (None)

class UClass* UBP_StructureTraitEffect_GrowthRate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitEffect_GrowthRate_C");

	return Clss;
}


// BP_StructureTraitEffect_GrowthRate_C BP_StructureTraitEffect_GrowthRate.Default__BP_StructureTraitEffect_GrowthRate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitEffect_GrowthRate_C* UBP_StructureTraitEffect_GrowthRate_C::GetDefaultObj()
{
	static class UBP_StructureTraitEffect_GrowthRate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitEffect_GrowthRate_C*>(UBP_StructureTraitEffect_GrowthRate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitEffect_GrowthRate.BP_StructureTraitEffect_GrowthRate_C.OnTraitRemoved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TScriptInterface<class IEnvironmentalInfluenceReceiver>K2Node_DynamicCast_AsEnvironmental_Influence_Receiver            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureActorInPlacement_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_GrowthRate_C::OnTraitRemoved(class AActor* OwningActor, struct FStructureTrait& Trait, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsStructureActorInPlacement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_GrowthRate_C", "OnTraitRemoved");

	Params::UBP_StructureTraitEffect_GrowthRate_C_OnTraitRemoved_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Trait = Trait;
	Parms.K2Node_DynamicCast_AsEnvironmental_Influence_Receiver = K2Node_DynamicCast_AsEnvironmental_Influence_Receiver;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsStructureActorInPlacement_ReturnValue = CallFunc_IsStructureActorInPlacement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEffect_GrowthRate.BP_StructureTraitEffect_GrowthRate_C.OnTraitAdded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureActorInPlacement_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEnvironmentalInfluenceReceiver>K2Node_DynamicCast_AsEnvironmental_Influence_Receiver            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_GrowthRate_C::OnTraitAdded(class AActor* OwningActor, struct FStructureTrait& Trait, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsStructureActorInPlacement_ReturnValue, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_GrowthRate_C", "OnTraitAdded");

	Params::UBP_StructureTraitEffect_GrowthRate_C_OnTraitAdded_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Trait = Trait;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsStructureActorInPlacement_ReturnValue = CallFunc_IsStructureActorInPlacement_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnvironmental_Influence_Receiver = K2Node_DynamicCast_AsEnvironmental_Influence_Receiver;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


