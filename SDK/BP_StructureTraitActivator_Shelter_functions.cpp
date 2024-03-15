#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C
// (None)

class UClass* UBP_StructureTraitActivator_Shelter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitActivator_Shelter_C");

	return Clss;
}


// BP_StructureTraitActivator_Shelter_C BP_StructureTraitActivator_Shelter.Default__BP_StructureTraitActivator_Shelter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitActivator_Shelter_C* UBP_StructureTraitActivator_Shelter_C::GetDefaultObj()
{
	static class UBP_StructureTraitActivator_Shelter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitActivator_Shelter_C*>(UBP_StructureTraitActivator_Shelter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.OnOverriddenByArtisanCardChanged
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_StructureTraitActivator_Shelter_C::OnOverriddenByArtisanCardChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_Shelter_C", "OnOverriddenByArtisanCardChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.OnOwnerTraitsChanged
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureTraitChangedContextTraitChangedContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FStructureTrait>     CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits                (ReferenceParm, ContainsInstancedReference)
// TArray<struct FStructureTrait>     CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits              (ReferenceParm, ContainsInstancedReference)
// TArray<struct FStructureTrait>     CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits             (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_Shelter_C::OnOwnerTraitsChanged(struct FStructureTraitChangedContext& TraitChangedContext, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_Shelter_C", "OnOwnerTraitsChanged");

	Params::UBP_StructureTraitActivator_Shelter_C_OnOwnerTraitsChanged_Params Parms{};

	Parms.TraitChangedContext = TraitChangedContext;
	Parms.CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits = CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits;
	Parms.CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits = CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits;
	Parms.CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits = CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.BindEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningStructure_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureTraitInterface>K2Node_DynamicCast_AsStructure_Trait_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningStructure_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitComponent*    CallFunc_GetStructureTraitComponent_ReturnValue                  (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IShelterableEntityInterface>K2Node_DynamicCast_AsShelterable_Entity_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShelterComponent*           CallFunc_GetShelterComponentForModify_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_Shelter_C::BindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_GetOwningStructure_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetOwningStructure_ReturnValue_1, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, TScriptInterface<class IShelterableEntityInterface> K2Node_DynamicCast_AsShelterable_Entity_Interface, bool K2Node_DynamicCast_bSuccess_1, class UShelterComponent* CallFunc_GetShelterComponentForModify_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_Shelter_C", "BindEvents");

	Params::UBP_StructureTraitActivator_Shelter_C_BindEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningStructure_ReturnValue = CallFunc_GetOwningStructure_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsStructure_Trait_Interface = K2Node_DynamicCast_AsStructure_Trait_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningStructure_ReturnValue_1 = CallFunc_GetOwningStructure_ReturnValue_1;
	Parms.CallFunc_GetStructureTraitComponent_ReturnValue = CallFunc_GetStructureTraitComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsShelterable_Entity_Interface = K2Node_DynamicCast_AsShelterable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetShelterComponentForModify_ReturnValue = CallFunc_GetShelterComponentForModify_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.CheckOverriddenByArtisanCard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetOwningStructure_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureTraitInterface>K2Node_DynamicCast_AsStructure_Trait_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitComponent*    CallFunc_GetStructureTraitComponent_ReturnValue                  (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasActiveTrait_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_Shelter_C::CheckOverriddenByArtisanCard(class UObject* CallFunc_GetOwningStructure_ReturnValue, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_HasActiveTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_Shelter_C", "CheckOverriddenByArtisanCard");

	Params::UBP_StructureTraitActivator_Shelter_C_CheckOverriddenByArtisanCard_Params Parms{};

	Parms.CallFunc_GetOwningStructure_ReturnValue = CallFunc_GetOwningStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Trait_Interface = K2Node_DynamicCast_AsStructure_Trait_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureTraitComponent_ReturnValue = CallFunc_GetStructureTraitComponent_ReturnValue;
	Parms.CallFunc_HasActiveTrait_ReturnValue = CallFunc_HasActiveTrait_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.OnSheltered
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSheltered                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_Shelter_C::OnSheltered(bool IsSheltered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_Shelter_C", "OnSheltered");

	Params::UBP_StructureTraitActivator_Shelter_C_OnSheltered_Params Parms{};

	Parms.IsSheltered = IsSheltered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.CheckSheltered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetOwningStructure_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IShelterableEntityInterface>K2Node_DynamicCast_AsShelterable_Entity_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShelterComponent*           CallFunc_GetShelterComponent_ReturnValue                         (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitActivator_Shelter_C::CheckSheltered(class UObject* CallFunc_GetOwningStructure_ReturnValue, TScriptInterface<class IShelterableEntityInterface> K2Node_DynamicCast_AsShelterable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UShelterComponent* CallFunc_GetShelterComponent_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_Shelter_C", "CheckSheltered");

	Params::UBP_StructureTraitActivator_Shelter_C_CheckSheltered_Params Parms{};

	Parms.CallFunc_GetOwningStructure_ReturnValue = CallFunc_GetOwningStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsShelterable_Entity_Interface = K2Node_DynamicCast_AsShelterable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetShelterComponent_ReturnValue = CallFunc_GetShelterComponent_ReturnValue;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.InitializeActivator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_StructureTraitActivator_Shelter_C::InitializeActivator(struct FStructureTrait& Trait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_Shelter_C", "InitializeActivator");

	Params::UBP_StructureTraitActivator_Shelter_C_InitializeActivator_Params Parms{};

	Parms.Trait = Trait;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.ExecuteUbergraph_BP_StructureTraitActivator_Shelter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             K2Node_Event_Trait                                               (ConstParm, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_StructureTraitActivator_Shelter_C::ExecuteUbergraph_BP_StructureTraitActivator_Shelter(int32 EntryPoint, const struct FStructureTrait& K2Node_Event_Trait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitActivator_Shelter_C", "ExecuteUbergraph_BP_StructureTraitActivator_Shelter");

	Params::UBP_StructureTraitActivator_Shelter_C_ExecuteUbergraph_BP_StructureTraitActivator_Shelter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Trait = K2Node_Event_Trait;

	UObject::ProcessEvent(Func, &Parms);

}

}


