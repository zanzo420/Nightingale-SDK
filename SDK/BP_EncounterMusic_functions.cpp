#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EncounterMusic.BP_EncounterMusic_C
// (Actor)

class UClass* ABP_EncounterMusic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EncounterMusic_C");

	return Clss;
}


// BP_EncounterMusic_C BP_EncounterMusic.Default__BP_EncounterMusic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EncounterMusic_C* ABP_EncounterMusic_C::GetDefaultObj()
{
	static class ABP_EncounterMusic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EncounterMusic_C*>(ABP_EncounterMusic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EncounterMusic.BP_EncounterMusic_C.HandleDefenseBeamHPUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NormalizedHealth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EncounterMusic_C::HandleDefenseBeamHPUpdated(double NormalizedHealth, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterMusic_C", "HandleDefenseBeamHPUpdated");

	Params::ABP_EncounterMusic_C_HandleDefenseBeamHPUpdated_Params Parms{};

	Parms.NormalizedHealth = NormalizedHealth;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast = CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterMusic.BP_EncounterMusic_C.SubscribeToDefenseBeamHPUpdates
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Defense*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_StructurePartProxy_C*    K2Node_DynamicCast_AsBP_Structure_Part_Proxy                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_Defense_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EncounterMusic_C::SubscribeToDefenseBeamHPUpdates(TSubclassOf<class IInterface> Temp_class_Variable, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Defense* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_StructurePartProxy_C* K2Node_DynamicCast_AsBP_Structure_Part_Proxy, bool K2Node_DynamicCast_bSuccess_2, class ANWXStructure* CallFunc_GetStructure_Structure, class ABP_Structure_EncounterTrigger_Defense_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterMusic_C", "SubscribeToDefenseBeamHPUpdates");

	Params::ABP_EncounterMusic_C_SubscribeToDefenseBeamHPUpdates_Params Parms{};

	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Structure_Part_Proxy = K2Node_DynamicCast_AsBP_Structure_Part_Proxy;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterMusic.BP_EncounterMusic_C.ServerHandleEncounterCombatEnded
// (BlueprintAuthorityOnly, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCombatEncounter_ReturnValue                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCustomIntensityUpdateLogic_ReturnValue               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EncounterMusic_C::ServerHandleEncounterCombatEnded(class AEncounterBase* Encounter, bool CallFunc_IsCombatEncounter_ReturnValue, bool CallFunc_HasCustomIntensityUpdateLogic_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterMusic_C", "ServerHandleEncounterCombatEnded");

	Params::ABP_EncounterMusic_C_ServerHandleEncounterCombatEnded_Params Parms{};

	Parms.Encounter = Encounter;
	Parms.CallFunc_IsCombatEncounter_ReturnValue = CallFunc_IsCombatEncounter_ReturnValue;
	Parms.CallFunc_HasCustomIntensityUpdateLogic_ReturnValue = CallFunc_HasCustomIntensityUpdateLogic_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterMusic.BP_EncounterMusic_C.ServerHandleEncounterCombatStarted
// (BlueprintAuthorityOnly, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCombatEncounter_ReturnValue                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCustomIntensityUpdateLogic_ReturnValue               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EncounterMusic_C::ServerHandleEncounterCombatStarted(class AEncounterBase* Encounter, bool CallFunc_IsCombatEncounter_ReturnValue, bool CallFunc_HasCustomIntensityUpdateLogic_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterMusic_C", "ServerHandleEncounterCombatStarted");

	Params::ABP_EncounterMusic_C_ServerHandleEncounterCombatStarted_Params Parms{};

	Parms.Encounter = Encounter;
	Parms.CallFunc_IsCombatEncounter_ReturnValue = CallFunc_IsCombatEncounter_ReturnValue;
	Parms.CallFunc_HasCustomIntensityUpdateLogic_ReturnValue = CallFunc_HasCustomIntensityUpdateLogic_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterMusic.BP_EncounterMusic_C.TrySetEncounterIntensityByWaveNumbers
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasCustomIntensityUpdateLogic_ReturnValue               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EncounterMusic_C::TrySetEncounterIntensityByWaveNumbers(bool CallFunc_HasCustomIntensityUpdateLogic_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterMusic_C", "TrySetEncounterIntensityByWaveNumbers");

	Params::ABP_EncounterMusic_C_TrySetEncounterIntensityByWaveNumbers_Params Parms{};

	Parms.CallFunc_HasCustomIntensityUpdateLogic_ReturnValue = CallFunc_HasCustomIntensityUpdateLogic_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast = CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterMusic.BP_EncounterMusic_C.HandleWaveCreatureKilled
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EncounterMusic_C::HandleWaveCreatureKilled(class ABP_CreatureBase_C* Creature, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterMusic_C", "HandleWaveCreatureKilled");

	Params::ABP_EncounterMusic_C_HandleWaveCreatureKilled_Params Parms{};

	Parms.Creature = Creature;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterMusic.BP_EncounterMusic_C.HandleWaveCreatureSpawned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EncounterMusic_C::HandleWaveCreatureSpawned(class ABP_CreatureBase_C* Creature, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterMusic_C", "HandleWaveCreatureSpawned");

	Params::ABP_EncounterMusic_C_HandleWaveCreatureSpawned_Params Parms{};

	Parms.Creature = Creature;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterMusic.BP_EncounterMusic_C.PostInitialization
// (BlueprintAuthorityOnly, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_EncounterComponent_Spawners_C*Spawner                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_EncounterComponent_Spawners_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_EncounterMusic_C::PostInitialization(class UBP_EncounterComponent_Spawners_C* Spawner, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_MatchesTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UBP_EncounterComponent_Spawners_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterMusic_C", "PostInitialization");

	Params::ABP_EncounterMusic_C_PostInitialization_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


