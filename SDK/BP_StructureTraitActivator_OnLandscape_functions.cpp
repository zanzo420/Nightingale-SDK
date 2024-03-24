#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C
// (None)

class UClass* UBP_StructureTraitActivator_OnLandscape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitActivator_OnLandscape_C");

	return Clss;
}


// BP_StructureTraitActivator_OnLandscape_C BP_StructureTraitActivator_OnLandscape.Default__BP_StructureTraitActivator_OnLandscape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitActivator_OnLandscape_C* UBP_StructureTraitActivator_OnLandscape_C::GetDefaultObj()
{
	static class UBP_StructureTraitActivator_OnLandscape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitActivator_OnLandscape_C*>(UBP_StructureTraitActivator_OnLandscape_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.OnOwnerTraitsChanged
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureTraitChangedContextTraitChangedContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FStructureTrait>     CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits                (ReferenceParm, ContainsInstancedReference)
// TArray<struct FStructureTrait>     CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits              (ReferenceParm, ContainsInstancedReference)
// TArray<struct FStructureTrait>     CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits             (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_OnLandscape_C::OnOwnerTraitsChanged(struct FStructureTraitChangedContext& TraitChangedContext, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_OnLandscape_C", "OnOwnerTraitsChanged");

	Params::UBP_StructureTraitActivator_OnLandscape_C_OnOwnerTraitsChanged_Params Parms{};

	Parms.TraitChangedContext = TraitChangedContext;
	Parms.CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits = CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits;
	Parms.CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits = CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits;
	Parms.CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits = CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.BindEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningStructure_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSupportObjectFromStructure_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningStructure_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISupportInterface>K2Node_DynamicCast_AsSupport_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureTraitInterface>K2Node_DynamicCast_AsStructure_Trait_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitComponent*    CallFunc_GetStructureTraitComponent_ReturnValue                  (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_OnLandscape_C::BindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_GetOwningStructure_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* CallFunc_GetSupportObjectFromStructure_ReturnValue, class UObject* CallFunc_GetOwningStructure_ReturnValue_1, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_OnLandscape_C", "BindEvents");

	Params::UBP_StructureTraitActivator_OnLandscape_C_BindEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningStructure_ReturnValue = CallFunc_GetOwningStructure_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetSupportObjectFromStructure_ReturnValue = CallFunc_GetSupportObjectFromStructure_ReturnValue;
	Parms.CallFunc_GetOwningStructure_ReturnValue_1 = CallFunc_GetOwningStructure_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSupport_Interface = K2Node_DynamicCast_AsSupport_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Trait_Interface = K2Node_DynamicCast_AsStructure_Trait_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStructureTraitComponent_ReturnValue = CallFunc_GetStructureTraitComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.CheckOverriddenByArtisanCard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetOwningStructure_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureTraitInterface>K2Node_DynamicCast_AsStructure_Trait_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitComponent*    CallFunc_GetStructureTraitComponent_ReturnValue                  (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasActiveTrait_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_OnLandscape_C::CheckOverriddenByArtisanCard(class UObject* CallFunc_GetOwningStructure_ReturnValue, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_HasActiveTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_OnLandscape_C", "CheckOverriddenByArtisanCard");

	Params::UBP_StructureTraitActivator_OnLandscape_C_CheckOverriddenByArtisanCard_Params Parms{};

	Parms.CallFunc_GetOwningStructure_ReturnValue = CallFunc_GetOwningStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Trait_Interface = K2Node_DynamicCast_AsStructure_Trait_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureTraitComponent_ReturnValue = CallFunc_GetStructureTraitComponent_ReturnValue;
	Parms.CallFunc_HasActiveTrait_ReturnValue = CallFunc_HasActiveTrait_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.CheckSupport
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningStructure_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetAllSupportingObjectsOfType_OutSupportingObjects      (ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHitObjectLandscape_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_OnLandscape_C::CheckSupport(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_GetOwningStructure_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UObject*>& CallFunc_GetAllSupportingObjectsOfType_OutSupportingObjects, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsHitObjectLandscape_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_OnLandscape_C", "CheckSupport");

	Params::UBP_StructureTraitActivator_OnLandscape_C_CheckSupport_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwningStructure_ReturnValue = CallFunc_GetOwningStructure_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllSupportingObjectsOfType_OutSupportingObjects = CallFunc_GetAllSupportingObjectsOfType_OutSupportingObjects;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsHitObjectLandscape_ReturnValue = CallFunc_IsHitObjectLandscape_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.InitializeActivator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_StructureTraitActivator_OnLandscape_C::InitializeActivator(struct FStructureTrait& Trait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_OnLandscape_C", "InitializeActivator");

	Params::UBP_StructureTraitActivator_OnLandscape_C_InitializeActivator_Params Parms{};

	Parms.Trait = Trait;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.ExecuteUbergraph_BP_StructureTraitActivator_OnLandscape
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             K2Node_Event_Trait                                               (ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningStructure_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_OnLandscape_C::ExecuteUbergraph_BP_StructureTraitActivator_OnLandscape(int32 EntryPoint, const struct FStructureTrait& K2Node_Event_Trait, class UObject* CallFunc_GetOwningStructure_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_OnLandscape_C", "ExecuteUbergraph_BP_StructureTraitActivator_OnLandscape");

	Params::UBP_StructureTraitActivator_OnLandscape_C_ExecuteUbergraph_BP_StructureTraitActivator_OnLandscape_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Trait = K2Node_Event_Trait;
	Parms.CallFunc_GetOwningStructure_ReturnValue = CallFunc_GetOwningStructure_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


