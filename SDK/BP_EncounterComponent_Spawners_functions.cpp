#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C
// (None)

class UClass* UBP_EncounterComponent_Spawners_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EncounterComponent_Spawners_C");

	return Clss;
}


// BP_EncounterComponent_Spawners_C BP_EncounterComponent_Spawners.Default__BP_EncounterComponent_Spawners_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EncounterComponent_Spawners_C* UBP_EncounterComponent_Spawners_C::GetDefaultObj()
{
	static class UBP_EncounterComponent_Spawners_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EncounterComponent_Spawners_C*>(UBP_EncounterComponent_Spawners_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Spawner Location from Encounter Config
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Spawner_Transform                                                (ConstParm, Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bGotLocationFromConfig                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              CallFunc_Get_or_Cache_Encounter_Base_EncounterBase               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>CallFunc_GetMarkupDataAsset_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupDataInterface_SpawnerProvider>K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Spawner_Provider(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATargetPoint_AI*>     CallFunc_GetSpawners_ReturnValue                                 (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATargetPoint_AI*             CallFunc_Array_Random_OutItem                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Get_Spawner_Location_from_Encounter_Config(struct FTransform* Spawner_Transform, bool* bGotLocationFromConfig, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_SpawnerProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Spawner_Provider, bool K2Node_DynamicCast_bSuccess, TArray<class ATargetPoint_AI*>& CallFunc_GetSpawners_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ATargetPoint_AI* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Get Spawner Location from Encounter Config");

	Params::UBP_EncounterComponent_Spawners_C_Get_Spawner_Location_from_Encounter_Config_Params Parms{};

	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Get_or_Cache_Encounter_Base_EncounterBase = CallFunc_Get_or_Cache_Encounter_Base_EncounterBase;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_GetMarkupDataAsset_self_CastInput = CallFunc_GetMarkupDataAsset_self_CastInput;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Spawner_Provider = K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Spawner_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSpawners_ReturnValue = CallFunc_GetSpawners_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawner_Transform != nullptr)
		*Spawner_Transform = std::move(Parms.Spawner_Transform);

	if (bGotLocationFromConfig != nullptr)
		*bGotLocationFromConfig = Parms.bGotLocationFromConfig;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Initialize Encounter POI Implementer
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Creature_Spawner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              EncounterBase                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UNWXAIPOI_Component*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              CallFunc_Get_or_Cache_Encounter_Base_EncounterBase               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Initialize_Encounter_POI_Implementer(class ABP_CreatureSpawnerBase_C*& Creature_Spawner, class AEncounterBase* EncounterBase, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UNWXAIPOI_Component* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Initialize Encounter POI Implementer");

	Params::UBP_EncounterComponent_Spawners_C_Initialize_Encounter_POI_Implementer_Params Parms{};

	Parms.Creature_Spawner = Creature_Spawner;
	Parms.EncounterBase = EncounterBase;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_or_Cache_Encounter_Base_EncounterBase = CallFunc_Get_or_Cache_Encounter_Base_EncounterBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On NPC Spawner Finished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::On_NPC_Spawner_Finished(class ABP_CreatureSpawnerBase_C* Spawner, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "On NPC Spawner Finished");

	Params::UBP_EncounterComponent_Spawners_C_On_NPC_Spawner_Finished_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On NPC Spawned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::On_NPC_Spawned(class ABP_CreatureBase_C* Creature, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "On NPC Spawned");

	Params::UBP_EncounterComponent_Spawners_C_On_NPC_Spawned_Params Parms{};

	Parms.Creature = Creature;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Bind NPC Spawner Events
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Creature_Spawner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Bind_NPC_Spawner_Events(class ABP_CreatureSpawnerBase_C* Creature_Spawner, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Bind NPC Spawner Events");

	Params::UBP_EncounterComponent_Spawners_C_Bind_NPC_Spawner_Events_Params Parms{};

	Parms.Creature_Spawner = Creature_Spawner;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Bind Creature Spawner Events
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Creature_Spawner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawnerController*     K2Node_DynamicCast_AsNWXAISpawner_Controller                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Bind_Creature_Spawner_Events(class ABP_CreatureSpawnerBase_C* Creature_Spawner, class AController* CallFunc_GetController_ReturnValue, class ANWXAISpawnerController* K2Node_DynamicCast_AsNWXAISpawner_Controller, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Bind Creature Spawner Events");

	Params::UBP_EncounterComponent_Spawners_C_Bind_Creature_Spawner_Events_Params Parms{};

	Parms.Creature_Spawner = Creature_Spawner;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAISpawner_Controller = K2Node_DynamicCast_AsNWXAISpawner_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.SetCreature Realm Power Override
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::SetCreature_Realm_Power_Override(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "SetCreature Realm Power Override");

	Params::UBP_EncounterComponent_Spawners_C_SetCreature_Realm_Power_Override_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Is Creature Unique
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEncounterCreatureData      Creature_Data                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TArray<struct FEncounterCreatureData>Creature_Data_Array                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsUnique                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterCreatureData      CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Is_Creature_Unique(const struct FEncounterCreatureData& Creature_Data, TArray<struct FEncounterCreatureData>& Creature_Data_Array, bool* bIsUnique, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FEncounterCreatureData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Is Creature Unique");

	Params::UBP_EncounterComponent_Spawners_C_Is_Creature_Unique_Params Parms{};

	Parms.Creature_Data = Creature_Data;
	Parms.Creature_Data_Array = Creature_Data_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsUnique != nullptr)
		*bIsUnique = Parms.bIsUnique;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Set BPSpawner Data Override
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TSoftClassPtr<class ABP_CreatureBase_C>, int32>Required_Creature_Classes                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Total_Creature_Count                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Bound_Spawner_Tags                                               (Edit, BlueprintVisible)
// class UNWXSquadConfigData*         Bound_Squad_Data                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEnvQuery*                   Bound_Miasma_Spawning_Query                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftClassPtr<class ABP_CreatureBase_C>>Default_Creature_Classes                                         (Edit, BlueprintVisible)
// TSoftClassPtr<class ABP_CreatureBase_C>Required_First_Creature_Class_Key                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<TSoftClassPtr<class ABP_CreatureBase_C>>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// TSoftClassPtr<class ABP_CreatureBase_C>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, float>           K2Node_MakeMap_Map                                               (None)
// TArray<TSoftClassPtr<class ABP_CreatureBase_C>>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FS_SpawningData             K2Node_MakeStruct_S_SpawningData                                 (HasGetValueTypeHash)
// struct FS_BPSpawnerData            K2Node_MakeStruct_S_BPSpawnerData                                (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Set_BPSpawner_Data_Override(TMap<TSoftClassPtr<class ABP_CreatureBase_C>, int32> Required_Creature_Classes, int32 Total_Creature_Count, const struct FGameplayTagContainer& Bound_Spawner_Tags, class UNWXSquadConfigData* Bound_Squad_Data, class UEnvQuery* Bound_Miasma_Spawning_Query, const TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& Default_Creature_Classes, TSoftClassPtr<class ABP_CreatureBase_C> Required_First_Creature_Class_Key, TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& CallFunc_Map_Keys_Keys, TSoftClassPtr<class ABP_CreatureBase_C> CallFunc_Array_Get_Item, bool CallFunc_Map_Remove_ReturnValue, TMap<class FName, float> K2Node_MakeMap_Map, TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& K2Node_MakeArray_Array, const struct FS_SpawningData& K2Node_MakeStruct_S_SpawningData, const struct FS_BPSpawnerData& K2Node_MakeStruct_S_BPSpawnerData, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Set BPSpawner Data Override");

	Params::UBP_EncounterComponent_Spawners_C_Set_BPSpawner_Data_Override_Params Parms{};

	Parms.Required_Creature_Classes = Required_Creature_Classes;
	Parms.Total_Creature_Count = Total_Creature_Count;
	Parms.Bound_Spawner_Tags = Bound_Spawner_Tags;
	Parms.Bound_Squad_Data = Bound_Squad_Data;
	Parms.Bound_Miasma_Spawning_Query = Bound_Miasma_Spawning_Query;
	Parms.Default_Creature_Classes = Default_Creature_Classes;
	Parms.Required_First_Creature_Class_Key = Required_First_Creature_Class_Key;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_S_SpawningData = K2Node_MakeStruct_S_SpawningData;
	Parms.K2Node_MakeStruct_S_BPSpawnerData = K2Node_MakeStruct_S_BPSpawnerData;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Calculate Wave Max Challenge Rating
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEncounterSpawnerWaveData   Encounter_Spawner_Wave_Data                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Wave_Max_Challenge_Rating                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EAutomaticSpawnerWaveDifficulty, double>Spawner_Wave_Difficulty                                          (Edit, BlueprintVisible)
// TMap<enum class EAutomaticSpawnerWaveDifficulty, double>K2Node_MakeVariable_MakeVariableOutput                           (None)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentRealmPower_RealmPower                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Calculate_Wave_Max_Challenge_Rating(struct FEncounterSpawnerWaveData& Encounter_Spawner_Wave_Data, int32* Wave_Max_Challenge_Rating, TMap<enum class EAutomaticSpawnerWaveDifficulty, double> Spawner_Wave_Difficulty, TMap<enum class EAutomaticSpawnerWaveDifficulty, double> K2Node_MakeVariable_MakeVariableOutput, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_GetCurrentRealmPower_RealmPower, double CallFunc_Conv_IntToDouble_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Calculate Wave Max Challenge Rating");

	Params::UBP_EncounterComponent_Spawners_C_Calculate_Wave_Max_Challenge_Rating_Params Parms{};

	Parms.Encounter_Spawner_Wave_Data = Encounter_Spawner_Wave_Data;
	Parms.Spawner_Wave_Difficulty = Spawner_Wave_Difficulty;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetCurrentRealmPower_RealmPower = CallFunc_GetCurrentRealmPower_RealmPower;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast = CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Wave_Max_Challenge_Rating != nullptr)
		*Wave_Max_Challenge_Rating = Parms.Wave_Max_Challenge_Rating;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Filter Creature Spawner By Cluster
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEncounterSpawnerWaveData   Encounter_Spawner_Wave_Data                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FEncounterCreatureData>Cluster_Filtered_Creature_Data_Array                             (Parm, OutParm)
// TArray<struct FRealmPlacementRequirement>Cluster_Realm_Requirements                                       (Edit, BlueprintVisible)
// struct FEncounterCreatureData      Creature_Data_Entry                                              (Edit, BlueprintVisible, NoDestructor)
// class FName                        Cluster_Theme_Name                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterCreatureData>Cluster_Filtered_Creature_Data                                   (Edit, BlueprintVisible)
// struct FGameplayTagContainer       Cluster_Tags_Container                                           (Edit, BlueprintVisible)
// struct FClusterTheme               Master_Cluster_Theme                                             (Edit, BlueprintVisible)
// struct FClusterTheme               Cluster_Theme                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FEncounterCreatureDataArray CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Creature_Unique_bIsUnique                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterCreatureData      CallFunc_Array_Random_OutItem                                    (NoDestructor)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterCreatureData>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterCreatureDataArray CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterCreatureData      CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClusterCreatureData        CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags_1                (ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClusterTheme               CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Filter_Creature_Spawner_By_Cluster(struct FEncounterSpawnerWaveData& Encounter_Spawner_Wave_Data, TArray<struct FEncounterCreatureData>* Cluster_Filtered_Creature_Data_Array, const TArray<struct FRealmPlacementRequirement>& Cluster_Realm_Requirements, const struct FEncounterCreatureData& Creature_Data_Entry, class FName Cluster_Theme_Name, const TArray<struct FEncounterCreatureData>& Cluster_Filtered_Creature_Data, const struct FGameplayTagContainer& Cluster_Tags_Container, const struct FClusterTheme& Master_Cluster_Theme, const struct FClusterTheme& Cluster_Theme, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FEncounterCreatureDataArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue_1, bool CallFunc_Is_Creature_Unique_bIsUnique, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FEncounterCreatureData& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, TArray<struct FEncounterCreatureData>& K2Node_MakeArray_Array, bool CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_HasTag_ReturnValue, const struct FEncounterCreatureDataArray& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, const struct FEncounterCreatureData& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FClusterCreatureData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, const struct FGameplayTag& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FClusterTheme& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Filter Creature Spawner By Cluster");

	Params::UBP_EncounterComponent_Spawners_C_Filter_Creature_Spawner_By_Cluster_Params Parms{};

	Parms.Encounter_Spawner_Wave_Data = Encounter_Spawner_Wave_Data;
	Parms.Cluster_Realm_Requirements = Cluster_Realm_Requirements;
	Parms.Creature_Data_Entry = Creature_Data_Entry;
	Parms.Cluster_Theme_Name = Cluster_Theme_Name;
	Parms.Cluster_Filtered_Creature_Data = Cluster_Filtered_Creature_Data;
	Parms.Cluster_Tags_Container = Cluster_Tags_Container;
	Parms.Master_Cluster_Theme = Master_Cluster_Theme;
	Parms.Cluster_Theme = Cluster_Theme;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue_1 = CallFunc_Array_IsEmpty_ReturnValue_1;
	Parms.CallFunc_Is_Creature_Unique_bIsUnique = CallFunc_Is_Creature_Unique_bIsUnique;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet = CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags_1 = CallFunc_BreakGameplayTagContainer_GameplayTags_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Cluster_Filtered_Creature_Data_Array != nullptr)
		*Cluster_Filtered_Creature_Data_Array = std::move(Parms.Cluster_Filtered_Creature_Data_Array);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Initialize Creature Spawner and Count for Auto Spawner Wave Data
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEncounterSpawnerWaveData   Encounter_Spawner_Wave_Data                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Array_Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Creature_Spawner_Row_Handle                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Total_Creature_Count_                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TSoftClassPtr<class ABP_CreatureBase_C>, int32>Required_Creature_Classes                                        (Edit, BlueprintVisible)
// TSubclassOf<class ANWXAISpawner>   Default_Bound_Spawner_Class                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FEncounterCreatureData>Cluster_Filtered_Creature_Data_Array                             (Edit, BlueprintVisible)
// int32                              Wave_Max_Challenge_Rating                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Wave_Max_Challenge_Rating_Wave_Max_Challenge_Rating(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BPSpawnerData            CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCurveTableRowHandle        K2Node_MakeStruct_CurveTableRowHandle                            (NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              K2Node_MakeStruct_ScalableFloat                                  (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterCreatureData>CallFunc_Filter_Creature_Spawner_By_Cluster_Cluster_Filtered_Creature_Data_Array(ReferenceParm)
// struct FEncounterCreatureData      CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_IsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BPSpawnerData            CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterSpawnerData     CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class ABP_CreatureBase_C>CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// struct FEncounterCreatureData      CallFunc_Array_Get_Item_2                                        (NoDestructor)
// struct FS_EncounterSpawnerData     CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Initialize_Creature_Spawner_and_Count_for_Auto_Spawner_Wave_Data(struct FEncounterSpawnerWaveData& Encounter_Spawner_Wave_Data, int32 Array_Index, const struct FDataTableRowHandle& Creature_Spawner_Row_Handle, int32 Total_Creature_Count_, TMap<TSoftClassPtr<class ABP_CreatureBase_C>, int32> Required_Creature_Classes, TSubclassOf<class ANWXAISpawner> Default_Bound_Spawner_Class, const TArray<struct FEncounterCreatureData>& Cluster_Filtered_Creature_Data_Array, int32 Wave_Max_Challenge_Rating, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Calculate_Wave_Max_Challenge_Rating_Wave_Max_Challenge_Rating, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FCurveTableRowHandle& K2Node_MakeStruct_CurveTableRowHandle, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<struct FEncounterCreatureData>& CallFunc_Filter_Creature_Spawner_By_Cluster_Cluster_Filtered_Creature_Data_Array, const struct FEncounterCreatureData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Map_IsEmpty_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FS_EncounterSpawnerData& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, TSoftClassPtr<class ABP_CreatureBase_C> CallFunc_Array_Get_Item_1, const struct FEncounterCreatureData& CallFunc_Array_Get_Item_2, const struct FS_EncounterSpawnerData& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, int32 CallFunc_Divide_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Initialize Creature Spawner and Count for Auto Spawner Wave Data");

	Params::UBP_EncounterComponent_Spawners_C_Initialize_Creature_Spawner_and_Count_for_Auto_Spawner_Wave_Data_Params Parms{};

	Parms.Encounter_Spawner_Wave_Data = Encounter_Spawner_Wave_Data;
	Parms.Array_Index = Array_Index;
	Parms.Creature_Spawner_Row_Handle = Creature_Spawner_Row_Handle;
	Parms.Total_Creature_Count_ = Total_Creature_Count_;
	Parms.Required_Creature_Classes = Required_Creature_Classes;
	Parms.Default_Bound_Spawner_Class = Default_Bound_Spawner_Class;
	Parms.Cluster_Filtered_Creature_Data_Array = Cluster_Filtered_Creature_Data_Array;
	Parms.Wave_Max_Challenge_Rating = Wave_Max_Challenge_Rating;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Calculate_Wave_Max_Challenge_Rating_Wave_Max_Challenge_Rating = CallFunc_Calculate_Wave_Max_Challenge_Rating_Wave_Max_Challenge_Rating;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_MakeStruct_CurveTableRowHandle = K2Node_MakeStruct_CurveTableRowHandle;
	Parms.K2Node_MakeStruct_ScalableFloat = K2Node_MakeStruct_ScalableFloat;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Filter_Creature_Spawner_By_Cluster_Cluster_Filtered_Creature_Data_Array = CallFunc_Filter_Creature_Spawner_By_Cluster_Cluster_Filtered_Creature_Data_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Map_IsEmpty_ReturnValue = CallFunc_Map_IsEmpty_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Initialize Creature Spawner Data
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterSpawnerWaveData   CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Initialize_Creature_Spawner_Data(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FEncounterSpawnerWaveData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Initialize Creature Spawner Data");

	Params::UBP_EncounterComponent_Spawners_C_Initialize_Creature_Spawner_Data_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Override Bound Creature Data For Arrival Realm
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CreatureTag                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              CreatureChallengeRating                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Bound_Override_Data_Table                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CreatureName                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterCreatureDataArray BoundCreatureDataOverride                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpawnerCreatureType    Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpawnerCreatureType    Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterCreatureData      K2Node_MakeStruct_EncounterCreatureData                          (NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterSpawnerData     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentRealmTags_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetCurrentRealmTags_RealmTags                           (None)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Override_Bound_Creature_Data_For_Arrival_Realm(const struct FGameplayTag& CreatureTag, int32 CreatureChallengeRating, class UDataTable* Bound_Override_Data_Table, class FName CreatureName, const struct FEncounterCreatureDataArray& BoundCreatureDataOverride, int32 Temp_int_Array_Index_Variable, enum class ESpawnerCreatureType Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, enum class ESpawnerCreatureType Temp_byte_Variable_1, const struct FEncounterCreatureData& K2Node_MakeStruct_EncounterCreatureData, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FS_EncounterSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_GetCurrentRealmTags_Success, const struct FGameplayTagContainer& CallFunc_GetCurrentRealmTags_RealmTags, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_HasTag_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Override Bound Creature Data For Arrival Realm");

	Params::UBP_EncounterComponent_Spawners_C_Override_Bound_Creature_Data_For_Arrival_Realm_Params Parms{};

	Parms.CreatureTag = CreatureTag;
	Parms.CreatureChallengeRating = CreatureChallengeRating;
	Parms.Bound_Override_Data_Table = Bound_Override_Data_Table;
	Parms.CreatureName = CreatureName;
	Parms.BoundCreatureDataOverride = BoundCreatureDataOverride;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_EncounterCreatureData = K2Node_MakeStruct_EncounterCreatureData;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating = CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_GetCurrentRealmTags_Success = CallFunc_GetCurrentRealmTags_Success;
	Parms.CallFunc_GetCurrentRealmTags_RealmTags = CallFunc_GetCurrentRealmTags_RealmTags;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Challenge Rating from Row Handle
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Creature_Row_Handle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Challenge_Rating                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BPSpawnerData            CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class ABP_CreatureBase_C>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FSoftClassPath              CallFunc_Conv_SoftObjRefToSoftClassPath_ReturnValue              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Get_Challenge_Rating_from_Row_Handle(const struct FDataTableRowHandle& Creature_Row_Handle, int32* Challenge_Rating, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TSoftClassPtr<class ABP_CreatureBase_C> CallFunc_Array_Get_Item, const struct FSoftClassPath& CallFunc_Conv_SoftObjRefToSoftClassPath_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Get Challenge Rating from Row Handle");

	Params::UBP_EncounterComponent_Spawners_C_Get_Challenge_Rating_from_Row_Handle_Params Parms{};

	Parms.Creature_Row_Handle = Creature_Row_Handle;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_SoftObjRefToSoftClassPath_ReturnValue = CallFunc_Conv_SoftObjRefToSoftClassPath_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Challenge_Rating != nullptr)
		*Challenge_Rating = Parms.Challenge_Rating;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Convert Creature String to Enum
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CreatureString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESpawnerCreatureType    CreatureEnum                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Convert_Creature_String_to_Enum(const class FString& CreatureString, enum class ESpawnerCreatureType* CreatureEnum, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Convert Creature String to Enum");

	Params::UBP_EncounterComponent_Spawners_C_Convert_Creature_String_to_Enum_Params Parms{};

	Parms.CreatureString = CreatureString;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatureEnum != nullptr)
		*CreatureEnum = Parms.CreatureEnum;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Initialize Creature Type Map
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FEncounterCreatureData>Creature_Data_Array                                              (Edit, BlueprintVisible)
// enum class ESpawnerCreatureType    Creature_Enum                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Creature_Tag                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Creature_Challenge_Rating                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Creature_Name                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterCreatureData      K2Node_MakeStruct_EncounterCreatureData                          (NoDestructor)
// struct FEncounterCreatureDataArray K2Node_MakeStruct_EncounterCreatureDataArray                     (None)
// TArray<struct FEncounterCreatureData>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FEncounterCreatureDataArray K2Node_MakeStruct_EncounterCreatureDataArray_1                   (None)
// struct FEncounterCreatureData      K2Node_MakeStruct_EncounterCreatureData_1                        (NoDestructor)
// struct FEncounterCreatureDataArray CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterSpawnerData     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESpawnerCreatureType    CallFunc_Convert_Creature_String_to_Enum_CreatureEnum            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Initialize_Creature_Type_Map(const TArray<struct FEncounterCreatureData>& Creature_Data_Array, enum class ESpawnerCreatureType Creature_Enum, const struct FGameplayTag& Creature_Tag, int32 Creature_Challenge_Rating, class FName Creature_Name, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FEncounterCreatureData& K2Node_MakeStruct_EncounterCreatureData, const struct FEncounterCreatureDataArray& K2Node_MakeStruct_EncounterCreatureDataArray, TArray<struct FEncounterCreatureData>& K2Node_MakeArray_Array, const struct FEncounterCreatureDataArray& K2Node_MakeStruct_EncounterCreatureDataArray_1, const struct FEncounterCreatureData& K2Node_MakeStruct_EncounterCreatureData_1, const struct FEncounterCreatureDataArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FS_EncounterSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item_1, class FName CallFunc_GetTagName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_2, enum class ESpawnerCreatureType CallFunc_Convert_Creature_String_to_Enum_CreatureEnum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Initialize Creature Type Map");

	Params::UBP_EncounterComponent_Spawners_C_Initialize_Creature_Type_Map_Params Parms{};

	Parms.Creature_Data_Array = Creature_Data_Array;
	Parms.Creature_Enum = Creature_Enum;
	Parms.Creature_Tag = Creature_Tag;
	Parms.Creature_Challenge_Rating = Creature_Challenge_Rating;
	Parms.Creature_Name = Creature_Name;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeStruct_EncounterCreatureData = K2Node_MakeStruct_EncounterCreatureData;
	Parms.K2Node_MakeStruct_EncounterCreatureDataArray = K2Node_MakeStruct_EncounterCreatureDataArray;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_EncounterCreatureDataArray_1 = K2Node_MakeStruct_EncounterCreatureDataArray_1;
	Parms.K2Node_MakeStruct_EncounterCreatureData_1 = K2Node_MakeStruct_EncounterCreatureData_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating = CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Convert_Creature_String_to_Enum_CreatureEnum = CallFunc_Convert_Creature_String_to_Enum_CreatureEnum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creature Has Targeted Player
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ExitGate                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_2                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_3                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterSpawnerWaveData   CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterGateInterface>K2Node_DynamicCast_AsEncounter_Gate_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              CallFunc_Get_or_Cache_Encounter_Base_EncounterBase               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetExitGateActor_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::On_Creature_Has_Targeted_Player(class ABP_CreatureBase_C* Creature, class AActor* ExitGate, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_GetFunctionName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, const struct FEncounterSpawnerWaveData& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IEncounterGateInterface> K2Node_DynamicCast_AsEncounter_Gate_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, bool CallFunc_IsValid_ReturnValue_2, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class AActor* CallFunc_GetExitGateActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "On Creature Has Targeted Player");

	Params::UBP_EncounterComponent_Spawners_C_On_Creature_Has_Targeted_Player_Params Parms{};

	Parms.Creature = Creature;
	Parms.ExitGate = ExitGate;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_GetFunctionName_ReturnValue_2 = CallFunc_GetFunctionName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetFunctionName_ReturnValue_3 = CallFunc_GetFunctionName_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Gate_Interface = K2Node_DynamicCast_AsEncounter_Gate_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Get_or_Cache_Encounter_Base_EncounterBase = CallFunc_Get_or_Cache_Encounter_Base_EncounterBase;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_GetExitGateActor_ReturnValue = CallFunc_GetExitGateActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get or Cache Encounter Base
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              EncounterBase                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              K2Node_DynamicCast_AsEncounter_Base                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Get_or_Cache_Encounter_Base(class AEncounterBase** EncounterBase, class AActor* CallFunc_GetOwner_ReturnValue, class AEncounterBase* K2Node_DynamicCast_AsEncounter_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Get or Cache Encounter Base");

	Params::UBP_EncounterComponent_Spawners_C_Get_or_Cache_Encounter_Base_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Base = K2Node_DynamicCast_AsEncounter_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EncounterBase != nullptr)
		*EncounterBase = Parms.EncounterBase;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Final Preferred Leader Death
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             New_Leader                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::On_Final_Preferred_Leader_Death(class ANWXAICharacter* New_Leader, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "On Final Preferred Leader Death");

	Params::UBP_EncounterComponent_Spawners_C_On_Final_Preferred_Leader_Death_Params Parms{};

	Parms.New_Leader = New_Leader;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base = K2Node_DynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creature Possessed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyAIActions_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::On_Creature_Possessed(class ABP_CreatureBase_C* Creature, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_ApplyAIActions_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "On Creature Possessed");

	Params::UBP_EncounterComponent_Spawners_C_On_Creature_Possessed_Params Parms{};

	Parms.Creature = Creature;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_ApplyAIActions_Success = CallFunc_ApplyAIActions_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Destroy All Creatures Immediately
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Destroy_All_Creatures_Immediately(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Destroy All Creatures Immediately");

	Params::UBP_EncounterComponent_Spawners_C_Destroy_All_Creatures_Immediately_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Evaluate if Spawners Remain
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               No_Spawners_Remain                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Evaluate_if_Spawners_Remain(bool* No_Spawners_Remain, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Evaluate if Spawners Remain");

	Params::UBP_EncounterComponent_Spawners_C_Evaluate_if_Spawners_Remain_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (No_Spawners_Remain != nullptr)
		*No_Spawners_Remain = Parms.No_Spawners_Remain;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Spawner Waves
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Current_Wave                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Total_Waves                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Get_Spawner_Waves(int32* Current_Wave, int32* Total_Waves, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Get Spawner Waves");

	Params::UBP_EncounterComponent_Spawners_C_Get_Spawner_Waves_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Wave != nullptr)
		*Current_Wave = Parms.Current_Wave;

	if (Total_Waves != nullptr)
		*Total_Waves = Parms.Total_Waves;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Spawner Finished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AEncounterBase*              CallFunc_Get_or_Cache_Encounter_Base_EncounterBase               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::On_Spawner_Finished(class ABP_CreatureSpawnerBase_C* Spawner, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "On Spawner Finished");

	Params::UBP_EncounterComponent_Spawners_C_On_Spawner_Finished_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Get_or_Cache_Encounter_Base_EncounterBase = CallFunc_Get_or_Cache_Encounter_Base_EncounterBase;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Current Creature Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Current_Creatures                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Total_Creature_Count                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Get_Current_Creature_Count(int32* Current_Creatures, int32 Total_Creature_Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Get Current Creature Count");

	Params::UBP_EncounterComponent_Spawners_C_Get_Current_Creature_Count_Params Parms{};

	Parms.Total_Creature_Count = Total_Creature_Count;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Creatures != nullptr)
		*Current_Creatures = Parms.Current_Creatures;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Destroy All Creatures
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Destroy_All_Creatures(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Destroy All Creatures");

	Params::UBP_EncounterComponent_Spawners_C_Destroy_All_Creatures_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Set Spawning Inactive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Spawning_Deactivated                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Set_Spawning_Inactive(bool* Spawning_Deactivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Set Spawning Inactive");

	Params::UBP_EncounterComponent_Spawners_C_Set_Spawning_Inactive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Spawning_Deactivated != nullptr)
		*Spawning_Deactivated = Parms.Spawning_Deactivated;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Set Spawning Active
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Spawning_Activated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Set_Spawning_Active(bool* Spawning_Activated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Set Spawning Active");

	Params::UBP_EncounterComponent_Spawners_C_Set_Spawning_Active_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Spawning_Activated != nullptr)
		*Spawning_Activated = Parms.Spawning_Activated;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Current Spawner Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Current_Spawner_Count                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Total_Creature_Count                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalCreatures_CreatureCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Get_Current_Spawner_Count(int32* Current_Spawner_Count, int32 Total_Creature_Count, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetTotalCreatures_CreatureCount, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Get Current Spawner Count");

	Params::UBP_EncounterComponent_Spawners_C_Get_Current_Spawner_Count_Params Parms{};

	Parms.Total_Creature_Count = Total_Creature_Count;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTotalCreatures_CreatureCount = CallFunc_GetTotalCreatures_CreatureCount;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Spawner_Count != nullptr)
		*Current_Spawner_Count = Parms.Current_Spawner_Count;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creatures None Remain
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class AEncounterBase*              CallFunc_Get_or_Cache_Encounter_Base_EncounterBase               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::On_Creatures_None_Remain(class ABP_CreatureSpawnerBase_C* Spawner, const class FString& CallFunc_GetFunctionName_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "On Creatures None Remain");

	Params::UBP_EncounterComponent_Spawners_C_On_Creatures_None_Remain_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Get_or_Cache_Encounter_Base_EncounterBase = CallFunc_Get_or_Cache_Encounter_Base_EncounterBase;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creature Death
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FEncounterSpawnerWaveData   CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Evaluate_if_Spawners_Remain_No_Spawners_Remain          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::On_Creature_Death(class ABP_CreatureBase_C* Creature, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FEncounterSpawnerWaveData& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Evaluate_if_Spawners_Remain_No_Spawners_Remain, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "On Creature Death");

	Params::UBP_EncounterComponent_Spawners_C_On_Creature_Death_Params Parms{};

	Parms.Creature = Creature;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Evaluate_if_Spawners_Remain_No_Spawners_Remain = CallFunc_Evaluate_if_Spawners_Remain_No_Spawners_Remain;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creature Destroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Current_Creature_Count                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::On_Creature_Destroyed(class ABP_CreatureBase_C* Creature, int32 Current_Creature_Count, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "On Creature Destroyed");

	Params::UBP_EncounterComponent_Spawners_C_On_Creature_Destroyed_Params Parms{};

	Parms.Creature = Creature;
	Parms.Current_Creature_Count = Current_Creature_Count;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Total Creature Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Creature_Count                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Get_Total_Creature_Count(int32* Creature_Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Get Total Creature Count");

	Params::UBP_EncounterComponent_Spawners_C_Get_Total_Creature_Count_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Creature_Count != nullptr)
		*Creature_Count = Parms.Creature_Count;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creature Spawned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::On_Creature_Spawned(class ABP_CreatureBase_C* Creature, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "On Creature Spawned");

	Params::UBP_EncounterComponent_Spawners_C_On_Creature_Spawned_Params Parms{};

	Parms.Creature = Creature;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Evaluate Current Creature Count
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Current_Creature_Count                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Evaluate_Current_Creature_Count(int32 Current_Creature_Count, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Evaluate Current Creature Count");

	Params::UBP_EncounterComponent_Spawners_C_Evaluate_Current_Creature_Count_Params Parms{};

	Parms.Current_Creature_Count = Current_Creature_Count;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Increment Current Wave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewPosition                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Increment_Current_Wave(int32 NewPosition, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Increment Current Wave");

	Params::UBP_EncounterComponent_Spawners_C_Increment_Current_Wave_Params Parms{};

	Parms.NewPosition = NewPosition;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Create NPC Spawner
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_of_NPCs                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   Spawner_Actor                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Spawner_Was_Spawned                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              EncounterReference                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FEncounterSpawnerWaveData   NPC_Creature_Wave_Data_Template                                  (Edit, BlueprintVisible)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              CallFunc_Get_or_Cache_Encounter_Base_EncounterBase               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawner_NPCGroup_Realm_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Create_NPC_Spawner(int32 Number_of_NPCs, class ABP_CreatureSpawnerBase_C** Spawner_Actor, bool* Spawner_Was_Spawned, class AEncounterBase* EncounterReference, const struct FEncounterSpawnerWaveData& NPC_Creature_Wave_Data_Template, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawner_NPCGroup_Realm_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Create NPC Spawner");

	Params::UBP_EncounterComponent_Spawners_C_Create_NPC_Spawner_Params Parms{};

	Parms.Number_of_NPCs = Number_of_NPCs;
	Parms.EncounterReference = EncounterReference;
	Parms.NPC_Creature_Wave_Data_Template = NPC_Creature_Wave_Data_Template;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Get_or_Cache_Encounter_Base_EncounterBase = CallFunc_Get_or_Cache_Encounter_Base_EncounterBase;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawner_Actor != nullptr)
		*Spawner_Actor = Parms.Spawner_Actor;

	if (Spawner_Was_Spawned != nullptr)
		*Spawner_Was_Spawned = Parms.Spawner_Was_Spawned;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Create Creature Spawner
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEncounterSpawnerWaveData   Spawner_Wave_Data                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_CreatureSpawnerBase_C*   Spawner_Actor                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Spawner_Was_Spawned                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          Markup_Spawners                                                  (Edit, BlueprintVisible)
// bool                               bSkipTwoStepSpawning                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BPSpawnerData            BP_Spawner_Override                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSubclassOf<class ANWXAISpawner>   Creature_Spawner_Base                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FTransform                  Spawner_Transform                                                (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              Encounter                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Maximum_Creature_Override                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Creature_Spawner                                                 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          Cached_Spawn_Points                                              (Edit, BlueprintVisible)
// bool                               Boss_Wave                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Found_Spawn_Location                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Get_Spawner_Location_from_Encounter_Config_Spawner_Transform(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Spawner_Location_from_Encounter_Config_bGotLocationFromConfig(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AEncounterBase*              CallFunc_Get_or_Cache_Encounter_Base_EncounterBase               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Bound_Miasma       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawner_BoundMiasma_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Create_Creature_Spawner(struct FEncounterSpawnerWaveData& Spawner_Wave_Data, class ABP_CreatureSpawnerBase_C** Spawner_Actor, bool* Spawner_Was_Spawned, const TArray<struct FTransform>& Markup_Spawners, bool bSkipTwoStepSpawning, const struct FS_BPSpawnerData& BP_Spawner_Override, TSubclassOf<class ANWXAISpawner> Creature_Spawner_Base, const struct FTransform& Spawner_Transform, class AEncounterBase* Encounter, int32 Maximum_Creature_Override, const struct FDataTableRowHandle& Creature_Spawner, const TArray<struct FTransform>& Cached_Spawn_Points, bool Boss_Wave, const struct FVector& Found_Spawn_Location, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_Get_Spawner_Location_from_Encounter_Config_Spawner_Transform, bool CallFunc_Get_Spawner_Location_from_Encounter_Config_bGotLocationFromConfig, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, class UClass* K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Bound_Miasma, bool K2Node_ClassDynamicCast_bSuccess_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_CreatureSpawner_BoundMiasma_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Create Creature Spawner");

	Params::UBP_EncounterComponent_Spawners_C_Create_Creature_Spawner_Params Parms{};

	Parms.Spawner_Wave_Data = Spawner_Wave_Data;
	Parms.Markup_Spawners = Markup_Spawners;
	Parms.bSkipTwoStepSpawning = bSkipTwoStepSpawning;
	Parms.BP_Spawner_Override = BP_Spawner_Override;
	Parms.Creature_Spawner_Base = Creature_Spawner_Base;
	Parms.Spawner_Transform = Spawner_Transform;
	Parms.Encounter = Encounter;
	Parms.Maximum_Creature_Override = Maximum_Creature_Override;
	Parms.Creature_Spawner = Creature_Spawner;
	Parms.Cached_Spawn_Points = Cached_Spawn_Points;
	Parms.Boss_Wave = Boss_Wave;
	Parms.Found_Spawn_Location = Found_Spawn_Location;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Spawner_Location_from_Encounter_Config_Spawner_Transform = CallFunc_Get_Spawner_Location_from_Encounter_Config_Spawner_Transform;
	Parms.CallFunc_Get_Spawner_Location_from_Encounter_Config_bGotLocationFromConfig = CallFunc_Get_Spawner_Location_from_Encounter_Config_bGotLocationFromConfig;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Get_or_Cache_Encounter_Base_EncounterBase = CallFunc_Get_or_Cache_Encounter_Base_EncounterBase;
	Parms.K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base = K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Bound_Miasma = K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Bound_Miasma;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawner_Actor != nullptr)
		*Spawner_Actor = Parms.Spawner_Actor;

	if (Spawner_Was_Spawned != nullptr)
		*Spawner_Was_Spawned = Parms.Spawner_Was_Spawned;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Manually Spawn Wave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Wave_Number                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   Spawner_Actor                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Spawner_Was_Spawned                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Create_Creature_Spawner_Spawner_Actor                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Create_Creature_Spawner_Spawner_Was_Spawned             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::Manually_Spawn_Wave(int32 Wave_Number, class ABP_CreatureSpawnerBase_C** Spawner_Actor, bool* Spawner_Was_Spawned, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Create_Creature_Spawner_Spawner_Actor, bool CallFunc_Create_Creature_Spawner_Spawner_Was_Spawned, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "Manually Spawn Wave");

	Params::UBP_EncounterComponent_Spawners_C_Manually_Spawn_Wave_Params Parms{};

	Parms.Wave_Number = Wave_Number;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Create_Creature_Spawner_Spawner_Actor = CallFunc_Create_Creature_Spawner_Spawner_Actor;
	Parms.CallFunc_Create_Creature_Spawner_Spawner_Was_Spawned = CallFunc_Create_Creature_Spawner_Spawner_Was_Spawned;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawner_Actor != nullptr)
		*Spawner_Actor = Parms.Spawner_Actor;

	if (Spawner_Was_Spawned != nullptr)
		*Spawner_Was_Spawned = Parms.Spawner_Was_Spawned;

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.InitializeEncounterComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_EncounterComponent_Spawners_C::InitializeEncounterComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "InitializeEncounterComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.ExecuteUbergraph_BP_EncounterComponent_Spawners
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              CallFunc_Get_or_Cache_Encounter_Base_EncounterBase               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterLevelData         CallFunc_GetEncounterLevelData_ReturnValue                       (ConstParm, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetEncounterCreatureData_DataTable                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentRealmDifficulty_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterComponentDataAsset*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterComponentSpawnerAutomaticDataAsset*K2Node_DynamicCast_AsEncounter_Component_Spawner_Automatic_Data_Asset(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNextRealmPower_NextRealmPower                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::ExecuteUbergraph_BP_EncounterComponent_Spawners(int32 EntryPoint, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class AEncounterBase* CallFunc_Get_or_Cache_Encounter_Base_EncounterBase, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FEncounterLevelData& CallFunc_GetEncounterLevelData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UDataTable* CallFunc_GetEncounterCreatureData_DataTable, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetCurrentRealmDifficulty_Success, enum class ERealmDifficulty CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty, int32 Temp_int_Array_Index_Variable, class UEncounterComponentDataAsset* CallFunc_Array_Get_Item, class UEncounterComponentSpawnerAutomaticDataAsset* K2Node_DynamicCast_AsEncounter_Component_Spawner_Automatic_Data_Asset, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetNextRealmPower_NextRealmPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "ExecuteUbergraph_BP_EncounterComponent_Spawners");

	Params::UBP_EncounterComponent_Spawners_C_ExecuteUbergraph_BP_EncounterComponent_Spawners_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_Get_or_Cache_Encounter_Base_EncounterBase = CallFunc_Get_or_Cache_Encounter_Base_EncounterBase;
	Parms.CallFunc_GetCreatureManager_CreatureManager = CallFunc_GetCreatureManager_CreatureManager;
	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetEncounterLevelData_ReturnValue = CallFunc_GetEncounterLevelData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEncounterCreatureData_DataTable = CallFunc_GetEncounterCreatureData_DataTable;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager = K2Node_DynamicCast_AsBP_Creature_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentRealmDifficulty_Success = CallFunc_GetCurrentRealmDifficulty_Success;
	Parms.CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty = CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsEncounter_Component_Spawner_Automatic_Data_Asset = K2Node_DynamicCast_AsEncounter_Component_Spawner_Automatic_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetNextRealmPower_NextRealmPower = CallFunc_GetNextRealmPower_NextRealmPower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnNPCSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::OnNPCSpawned__DelegateSignature(class ABP_CreatureBase_C* NPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "OnNPCSpawned__DelegateSignature");

	Params::UBP_EncounterComponent_Spawners_C_OnNPCSpawned__DelegateSignature_Params Parms{};

	Parms.NPC = NPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnPlayerTargeted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::OnPlayerTargeted__DelegateSignature(class ABP_CreatureBase_C* Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "OnPlayerTargeted__DelegateSignature");

	Params::UBP_EncounterComponent_Spawners_C_OnPlayerTargeted__DelegateSignature_Params Parms{};

	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnCreatureKilled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::OnCreatureKilled__DelegateSignature(class ABP_CreatureBase_C* Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "OnCreatureKilled__DelegateSignature");

	Params::UBP_EncounterComponent_Spawners_C_OnCreatureKilled__DelegateSignature_Params Parms{};

	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnWaveComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_EncounterComponent_Spawners_C::OnWaveComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "OnWaveComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnCreatureSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::OnCreatureSpawned__DelegateSignature(class ABP_CreatureBase_C* Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "OnCreatureSpawned__DelegateSignature");

	Params::UBP_EncounterComponent_Spawners_C_OnCreatureSpawned__DelegateSignature_Params Parms{};

	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnCreatureBehaviourOverridden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterComponent_Spawners_C::OnCreatureBehaviourOverridden__DelegateSignature(class ABP_CreatureBase_C* Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "OnCreatureBehaviourOverridden__DelegateSignature");

	Params::UBP_EncounterComponent_Spawners_C_OnCreatureBehaviourOverridden__DelegateSignature_Params Parms{};

	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnCreatureNoneRemain__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_EncounterComponent_Spawners_C::OnCreatureNoneRemain__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "OnCreatureNoneRemain__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnCreatureSquadDead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_EncounterComponent_Spawners_C::OnCreatureSquadDead__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "OnCreatureSquadDead__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnSpawnerSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_EncounterComponent_Spawners_C::OnSpawnerSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterComponent_Spawners_C", "OnSpawnerSpawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


