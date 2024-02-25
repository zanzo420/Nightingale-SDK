#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitEffect_CreatureSuppression.BP_StructureTraitEffect_CreatureSuppression_C
// (None)

class UClass* UBP_StructureTraitEffect_CreatureSuppression_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitEffect_CreatureSuppression_C");

	return Clss;
}


// BP_StructureTraitEffect_CreatureSuppression_C BP_StructureTraitEffect_CreatureSuppression.Default__BP_StructureTraitEffect_CreatureSuppression_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitEffect_CreatureSuppression_C* UBP_StructureTraitEffect_CreatureSuppression_C::GetDefaultObj()
{
	static class UBP_StructureTraitEffect_CreatureSuppression_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitEffect_CreatureSuppression_C*>(UBP_StructureTraitEffect_CreatureSuppression_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitEffect_CreatureSuppression.BP_StructureTraitEffect_CreatureSuppression_C.OnTraitRemoved
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     LCreatureManager                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureActorInPlacement_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureType_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTypeData*          CallFunc_GetStructureType_OutStructureType                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCreatureSuppressionRadius_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSuppressionTraitChangedPropertiesCallFunc_MakeSuppressionTraitChangedProperties_ReturnValue       (NoDestructor)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_CreatureSuppression_C::OnTraitRemoved(class AActor* OwningActor, struct FStructureTrait& Trait, class ANWXCreatureManagerBase* LCreatureManager, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStructureActorInPlacement_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureType_IsValid, class UStructureTypeData* CallFunc_GetStructureType_OutStructureType, float CallFunc_GetCreatureSuppressionRadius_ReturnValue, const struct FSuppressionTraitChangedProperties& CallFunc_MakeSuppressionTraitChangedProperties_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_CreatureSuppression_C", "OnTraitRemoved");

	Params::UBP_StructureTraitEffect_CreatureSuppression_C_OnTraitRemoved_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Trait = Trait;
	Parms.LCreatureManager = LCreatureManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsStructureActorInPlacement_ReturnValue = CallFunc_IsStructureActorInPlacement_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureType_IsValid = CallFunc_GetStructureType_IsValid;
	Parms.CallFunc_GetStructureType_OutStructureType = CallFunc_GetStructureType_OutStructureType;
	Parms.CallFunc_GetCreatureSuppressionRadius_ReturnValue = CallFunc_GetCreatureSuppressionRadius_ReturnValue;
	Parms.CallFunc_MakeSuppressionTraitChangedProperties_ReturnValue = CallFunc_MakeSuppressionTraitChangedProperties_ReturnValue;
	Parms.CallFunc_GetCreatureManager_ReturnValue = CallFunc_GetCreatureManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitEffect_CreatureSuppression.BP_StructureTraitEffect_CreatureSuppression_C.OnTraitAdded
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureTrait             Trait                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     LCreatureManager                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureType_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTypeData*          CallFunc_GetStructureType_OutStructureType                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureActorInPlacement_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCreatureSuppressionRadius_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSuppressionTraitChangedPropertiesCallFunc_MakeSuppressionTraitChangedProperties_ReturnValue       (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitEffect_CreatureSuppression_C::OnTraitAdded(class AActor* OwningActor, struct FStructureTrait& Trait, class ANWXCreatureManagerBase* LCreatureManager, bool CallFunc_IsValid_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureType_IsValid, class UStructureTypeData* CallFunc_GetStructureType_OutStructureType, bool CallFunc_IsStructureActorInPlacement_ReturnValue, float CallFunc_GetCreatureSuppressionRadius_ReturnValue, const struct FSuppressionTraitChangedProperties& CallFunc_MakeSuppressionTraitChangedProperties_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitEffect_CreatureSuppression_C", "OnTraitAdded");

	Params::UBP_StructureTraitEffect_CreatureSuppression_C_OnTraitAdded_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Trait = Trait;
	Parms.LCreatureManager = LCreatureManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCreatureManager_ReturnValue = CallFunc_GetCreatureManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureType_IsValid = CallFunc_GetStructureType_IsValid;
	Parms.CallFunc_GetStructureType_OutStructureType = CallFunc_GetStructureType_OutStructureType;
	Parms.CallFunc_IsStructureActorInPlacement_ReturnValue = CallFunc_IsStructureActorInPlacement_ReturnValue;
	Parms.CallFunc_GetCreatureSuppressionRadius_ReturnValue = CallFunc_GetCreatureSuppressionRadius_ReturnValue;
	Parms.CallFunc_MakeSuppressionTraitChangedProperties_ReturnValue = CallFunc_MakeSuppressionTraitChangedProperties_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


