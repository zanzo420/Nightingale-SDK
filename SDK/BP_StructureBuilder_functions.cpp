#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureBuilder.BP_StructureBuilder_C
// (Actor)

class UClass* ABP_StructureBuilder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureBuilder_C");

	return Clss;
}


// BP_StructureBuilder_C BP_StructureBuilder.Default__BP_StructureBuilder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StructureBuilder_C* ABP_StructureBuilder_C::GetDefaultObj()
{
	static class ABP_StructureBuilder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StructureBuilder_C*>(ABP_StructureBuilder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureBuilder.BP_StructureBuilder_C.ProcessPartProxyActor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_StructurePartProxy_C*    PartProxy                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXStructurePartProxyComponent*>ConstructedStructureProxyComponents                              (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UNWXStructurePartProxyComponent*>TempStructureProxyComponents                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UNWXStructurePartProxyComponent*>CompositeStructureProxyComponents                                (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXStructurePartProxyComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXStructurePartProxyComponent*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureDataAsset*         K2Node_DynamicCast_AsStructure_Data_Asset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UStructureDataAsset>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureDataFromStructureAssetReference_IsValid     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureDataFromStructureAssetReference_OutData     (ContainsInstancedReference)
// bool                               CallFunc_IsCompositePiece_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::ProcessPartProxyActor(class ABP_StructurePartProxy_C* PartProxy, const TArray<class UNWXStructurePartProxyComponent*>& ConstructedStructureProxyComponents, const TArray<class UNWXStructurePartProxyComponent*>& TempStructureProxyComponents, const TArray<class UNWXStructurePartProxyComponent*>& CompositeStructureProxyComponents, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class UNWXStructurePartProxyComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UNWXStructurePartProxyComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStructureDataAsset* K2Node_DynamicCast_AsStructure_Data_Asset, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UStructureDataAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FStructureAssetReference& CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData, bool CallFunc_IsCompositePiece_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "ProcessPartProxyActor");

	Params::ABP_StructureBuilder_C_ProcessPartProxyActor_Params Parms{};

	Parms.PartProxy = PartProxy;
	Parms.ConstructedStructureProxyComponents = ConstructedStructureProxyComponents;
	Parms.TempStructureProxyComponents = TempStructureProxyComponents;
	Parms.CompositeStructureProxyComponents = CompositeStructureProxyComponents;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Data_Asset = K2Node_DynamicCast_AsStructure_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue = CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_IsValid = CallFunc_GetStructureDataFromStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_OutData = CallFunc_GetStructureDataFromStructureAssetReference_OutData;
	Parms.CallFunc_IsCompositePiece_ReturnValue = CallFunc_IsCompositePiece_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.BuildStructureFromProxyComponent
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UNWXStructurePartProxyComponent*>StructureProxyComponents                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ANWXStructurePartProxyActor* StructureProxy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureHealthMode    StructureHealthMode                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         DesiredStructureState                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Constructed_C* ConstructedStructure                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    LStructureRef                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FCompositePieceGameplay>LPieceDatas                                                      (Edit, BlueprintVisible)
// struct FStructureData              StructureData                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FTransform                  StructurePartTransform                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePartInitialData   InitialPartData                                                  (Edit, BlueprintVisible)
// struct FTransform                  StructureTransform                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Structure_Constructed_C*>ConstructedStructures                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AStructureComposite*         CompositeStructure                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetStructureSpawnState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXStructurePartProxyComponent*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureDataAsset*         K2Node_DynamicCast_AsStructure_Data_Asset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UStructureDataAsset>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Structure_Reference_C>K2Node_DynamicCast_AsBPI_Structure_Reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue        (HasGetValueTypeHash)
// TScriptInterface<class IBPI_Structure_Reference_C>K2Node_DynamicCast_AsBPI_Structure_Reference_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStreamingLevelProxyActor*   CallFunc_GetLevelProxy_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureDataFromStructureAssetReference_IsValid     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureDataFromStructureAssetReference_OutData     (ContainsInstancedReference)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext                          (NoDestructor)
// class AStructureComposite*         CallFunc_SpawnCompositeStructure_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompositePiece_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext_1                        (NoDestructor)
// bool                               CallFunc_IsStructureConstructed_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_SpawnStructure_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Constructed_C* CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureSupportObject*     CallFunc_GetSinglePieceSupportObject_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISupportInterface>K2Node_DynamicCast_AsSupport_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_CreatePieceData_OutPieceData                            (None)
// bool                               CallFunc_CreatePieceData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_SetInitialPartData_StructOut                            (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::BuildStructureFromProxyComponent(TArray<class UNWXStructurePartProxyComponent*>& StructureProxyComponents, class ANWXStructurePartProxyActor* StructureProxy, enum class EStructureHealthMode StructureHealthMode, enum class EStructureState DesiredStructureState, class ABP_Structure_Constructed_C* ConstructedStructure, const struct FStructureAssetReference& LStructureRef, const TArray<struct FCompositePieceGameplay>& LPieceDatas, const struct FStructureData& StructureData, const struct FTransform& StructurePartTransform, const struct FStructurePartInitialData& InitialPartData, const struct FTransform& StructureTransform, const TArray<class ABP_Structure_Constructed_C*>& ConstructedStructures, class AStructureComposite* CompositeStructure, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EStructureState CallFunc_GetStructureSpawnState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UNWXStructurePartProxyComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStructureDataAsset* K2Node_DynamicCast_AsStructure_Data_Asset, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UStructureDataAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, TScriptInterface<class IBPI_Structure_Reference_C> K2Node_DynamicCast_AsBPI_Structure_Reference, bool K2Node_DynamicCast_bSuccess_1, const struct FStructureAssetReference& CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue, TScriptInterface<class IBPI_Structure_Reference_C> K2Node_DynamicCast_AsBPI_Structure_Reference_1, bool K2Node_DynamicCast_bSuccess_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, class AStreamingLevelProxyActor* CallFunc_GetLevelProxy_ReturnValue, const class FString& CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_BreakSoftObjectPath_PathString, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData, const class FString& CallFunc_GetFunctionName_ReturnValue, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class AStructureComposite* CallFunc_SpawnCompositeStructure_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsCompositePiece_ReturnValue, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext_1, bool CallFunc_IsStructureConstructed_ReturnValue, class UObject* CallFunc_SpawnStructure_ReturnValue, class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed, bool K2Node_DynamicCast_bSuccess_3, class ABP_Structure_Constructed_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UStructureSupportObject* CallFunc_GetSinglePieceSupportObject_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, const struct FCompositePieceGameplay& CallFunc_CreatePieceData_OutPieceData, bool CallFunc_CreatePieceData_ReturnValue, const struct FCompositePieceGameplay& CallFunc_SetInitialPartData_StructOut, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "BuildStructureFromProxyComponent");

	Params::ABP_StructureBuilder_C_BuildStructureFromProxyComponent_Params Parms{};

	Parms.StructureProxyComponents = StructureProxyComponents;
	Parms.StructureProxy = StructureProxy;
	Parms.StructureHealthMode = StructureHealthMode;
	Parms.DesiredStructureState = DesiredStructureState;
	Parms.ConstructedStructure = ConstructedStructure;
	Parms.LStructureRef = LStructureRef;
	Parms.LPieceDatas = LPieceDatas;
	Parms.StructureData = StructureData;
	Parms.StructurePartTransform = StructurePartTransform;
	Parms.InitialPartData = InitialPartData;
	Parms.StructureTransform = StructureTransform;
	Parms.ConstructedStructures = ConstructedStructures;
	Parms.CompositeStructure = CompositeStructure;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetStructureSpawnState_ReturnValue = CallFunc_GetStructureSpawnState_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Data_Asset = K2Node_DynamicCast_AsStructure_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Reference = K2Node_DynamicCast_AsBPI_Structure_Reference;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue = CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Reference_1 = K2Node_DynamicCast_AsBPI_Structure_Reference_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLevelProxy_ReturnValue = CallFunc_GetLevelProxy_ReturnValue;
	Parms.CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue = CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_IsValid = CallFunc_GetStructureDataFromStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_OutData = CallFunc_GetStructureDataFromStructureAssetReference_OutData;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.K2Node_MakeStruct_StructureSpawnContext = K2Node_MakeStruct_StructureSpawnContext;
	Parms.CallFunc_SpawnCompositeStructure_ReturnValue = CallFunc_SpawnCompositeStructure_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsCompositePiece_ReturnValue = CallFunc_IsCompositePiece_ReturnValue;
	Parms.K2Node_MakeStruct_StructureSpawnContext_1 = K2Node_MakeStruct_StructureSpawnContext_1;
	Parms.CallFunc_IsStructureConstructed_ReturnValue = CallFunc_IsStructureConstructed_ReturnValue;
	Parms.CallFunc_SpawnStructure_ReturnValue = CallFunc_SpawnStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Constructed = K2Node_DynamicCast_AsBP_Structure_Constructed;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetSinglePieceSupportObject_ReturnValue = CallFunc_GetSinglePieceSupportObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSupport_Interface = K2Node_DynamicCast_AsSupport_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_CreatePieceData_OutPieceData = CallFunc_CreatePieceData_OutPieceData;
	Parms.CallFunc_CreatePieceData_ReturnValue = CallFunc_CreatePieceData_ReturnValue;
	Parms.CallFunc_SetInitialPartData_StructOut = CallFunc_SetInitialPartData_StructOut;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.DestroyStructures
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructure*               LocalStructure                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetLevelActors_OutLevelActors                           (ReferenceParm)
// bool                               CallFunc_GetLevelActors_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructurePartProxyActor* K2Node_DynamicCast_AsNWXStructure_Part_Proxy_Actor               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::DestroyStructures(class ANWXStructure* LocalStructure, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetLevelActors_OutLevelActors, bool CallFunc_GetLevelActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ANWXStructurePartProxyActor* K2Node_DynamicCast_AsNWXStructure_Part_Proxy_Actor, bool K2Node_DynamicCast_bSuccess, class ANWXStructure* CallFunc_GetStructure_Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "DestroyStructures");

	Params::ABP_StructureBuilder_C_DestroyStructures_Params Parms{};

	Parms.LocalStructure = LocalStructure;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLevelActors_OutLevelActors = CallFunc_GetLevelActors_OutLevelActors;
	Parms.CallFunc_GetLevelActors_ReturnValue = CallFunc_GetLevelActors_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXStructure_Part_Proxy_Actor = K2Node_DynamicCast_AsNWXStructure_Part_Proxy_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.ShouldBeResetUponDIrtyRealmReset
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetLevelActors_OutLevelActors                           (ReferenceParm)
// bool                               CallFunc_GetLevelActors_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            K2Node_DynamicCast_AsEncounter_Config                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::ShouldBeResetUponDIrtyRealmReset(bool* bSuccess, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetLevelActors_OutLevelActors, bool CallFunc_GetLevelActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AEncounterConfig* K2Node_DynamicCast_AsEncounter_Config, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "ShouldBeResetUponDIrtyRealmReset");

	Params::ABP_StructureBuilder_C_ShouldBeResetUponDIrtyRealmReset_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLevelActors_OutLevelActors = CallFunc_GetLevelActors_OutLevelActors;
	Parms.CallFunc_GetLevelActors_ReturnValue = CallFunc_GetLevelActors_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Config = K2Node_DynamicCast_AsEncounter_Config;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.GetStructureDataFromProxy
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXStructurePartProxyComponent*ArrayElement                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              OutData                                                          (Parm, OutParm, ContainsInstancedReference)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureDataAsset*         K2Node_DynamicCast_AsStructure_Data_Asset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UStructureDataAsset>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue        (HasGetValueTypeHash)
// bool                               CallFunc_GetStructureDataFromStructureAssetReference_IsValid     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureDataFromStructureAssetReference_OutData     (ContainsInstancedReference)

void ABP_StructureBuilder_C::GetStructureDataFromProxy(class UNWXStructurePartProxyComponent* ArrayElement, bool* IsValid, struct FStructureData* OutData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStructureDataAsset* K2Node_DynamicCast_AsStructure_Data_Asset, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UStructureDataAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FStructureAssetReference& CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "GetStructureDataFromProxy");

	Params::ABP_StructureBuilder_C_GetStructureDataFromProxy_Params Parms{};

	Parms.ArrayElement = ArrayElement;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Data_Asset = K2Node_DynamicCast_AsStructure_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue = CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_IsValid = CallFunc_GetStructureDataFromStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_OutData = CallFunc_GetStructureDataFromStructureAssetReference_OutData;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.ResolveConstructedStructure
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructure*               Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_StructurePartProxy_C*    Proxy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               SuccesfullyResolved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXStructurePartProxyComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UNWXStructurePartProxyComponent*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureDataFromProxy_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureDataFromProxy_OutData                       (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTypeData_Constructed*CallFunc_TryGetConstructedStructureData_OutData                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetConstructedStructureData_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::ResolveConstructedStructure(class ANWXStructure* Structure, class ABP_StructurePartProxy_C* Proxy, bool* SuccesfullyResolved, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UNWXStructurePartProxyComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UNWXStructurePartProxyComponent* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_GetStructureDataFromProxy_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromProxy_OutData, int32 CallFunc_Array_Length_ReturnValue, class UStructureTypeData_Constructed* CallFunc_TryGetConstructedStructureData_OutData, bool CallFunc_TryGetConstructedStructureData_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "ResolveConstructedStructure");

	Params::ABP_StructureBuilder_C_ResolveConstructedStructure_Params Parms{};

	Parms.Structure = Structure;
	Parms.Proxy = Proxy;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetStructureDataFromProxy_IsValid = CallFunc_GetStructureDataFromProxy_IsValid;
	Parms.CallFunc_GetStructureDataFromProxy_OutData = CallFunc_GetStructureDataFromProxy_OutData;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TryGetConstructedStructureData_OutData = CallFunc_TryGetConstructedStructureData_OutData;
	Parms.CallFunc_TryGetConstructedStructureData_ReturnValue = CallFunc_TryGetConstructedStructureData_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SuccesfullyResolved != nullptr)
		*SuccesfullyResolved = Parms.SuccesfullyResolved;

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.ResolveCompositeStructure
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructure*               Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_StructurePartProxy_C*    Proxy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               SuccesfullyResolved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXStructurePartProxyComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXStructurePartProxyComponent*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureDataFromProxy_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureDataFromProxy_OutData                       (ContainsInstancedReference)
// class UStructureTypeData_Composite*CallFunc_TryGetCompositePieceStructureData_OutData               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetCompositePieceStructureData_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::ResolveCompositeStructure(class ANWXStructure* Structure, class ABP_StructurePartProxy_C* Proxy, bool* SuccesfullyResolved, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UNWXStructurePartProxyComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UNWXStructurePartProxyComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetStructureDataFromProxy_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromProxy_OutData, class UStructureTypeData_Composite* CallFunc_TryGetCompositePieceStructureData_OutData, bool CallFunc_TryGetCompositePieceStructureData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "ResolveCompositeStructure");

	Params::ABP_StructureBuilder_C_ResolveCompositeStructure_Params Parms{};

	Parms.Structure = Structure;
	Parms.Proxy = Proxy;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetStructureDataFromProxy_IsValid = CallFunc_GetStructureDataFromProxy_IsValid;
	Parms.CallFunc_GetStructureDataFromProxy_OutData = CallFunc_GetStructureDataFromProxy_OutData;
	Parms.CallFunc_TryGetCompositePieceStructureData_OutData = CallFunc_TryGetCompositePieceStructureData_OutData;
	Parms.CallFunc_TryGetCompositePieceStructureData_ReturnValue = CallFunc_TryGetCompositePieceStructureData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SuccesfullyResolved != nullptr)
		*SuccesfullyResolved = Parms.SuccesfullyResolved;

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.ResolveStructureWithProxy
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructure*               Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_StructurePartProxy_C*    Proxy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               SuccessfullyResolved                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   K2Node_DynamicCast_AsBP_Structure_Composite                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ResolveCompositeStructure_SuccesfullyResolved           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ResolveConstructedStructure_SuccesfullyResolved         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::ResolveStructureWithProxy(class ANWXStructure* Structure, class ABP_StructurePartProxy_C* Proxy, bool* SuccessfullyResolved, class ABP_Structure_Composite_C* K2Node_DynamicCast_AsBP_Structure_Composite, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ResolveCompositeStructure_SuccesfullyResolved, class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ResolveConstructedStructure_SuccesfullyResolved, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "ResolveStructureWithProxy");

	Params::ABP_StructureBuilder_C_ResolveStructureWithProxy_Params Parms{};

	Parms.Structure = Structure;
	Parms.Proxy = Proxy;
	Parms.K2Node_DynamicCast_AsBP_Structure_Composite = K2Node_DynamicCast_AsBP_Structure_Composite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ResolveCompositeStructure_SuccesfullyResolved = CallFunc_ResolveCompositeStructure_SuccesfullyResolved;
	Parms.K2Node_DynamicCast_AsBP_Structure_Constructed = K2Node_DynamicCast_AsBP_Structure_Constructed;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ResolveConstructedStructure_SuccesfullyResolved = CallFunc_ResolveConstructedStructure_SuccesfullyResolved;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue = CallFunc_NearlyEqual_TransformTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SuccessfullyResolved != nullptr)
		*SuccessfullyResolved = Parms.SuccessfullyResolved;

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.ConnectStructures
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructure*               LocalStructure                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_StructurePartProxy_C*    LocalProxy                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FStructurePartInitialData   InitialPartData                                                  (Edit, BlueprintVisible)
// TArray<class ABP_Structure_Constructed_C*>ConstructedStructures                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// struct FTransform                  StructurePartTransform                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  StructureTransform                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CompositeStructure                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDataTableRowHandle         StructureHandle                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              StructureData                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ResolveStructureWithProxy_SuccessfullyResolved          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetLevelActors_OutLevelActors                           (ReferenceParm)
// bool                               CallFunc_GetLevelActors_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDynamicActorAtLocation_Actor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDynamicActorAtLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StructurePartProxy_C*    K2Node_DynamicCast_AsBP_Structure_Part_Proxy                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               K2Node_DynamicCast_AsNWXStructure                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::ConnectStructures(class ANWXStructure* LocalStructure, class ABP_StructurePartProxy_C* LocalProxy, const struct FStructurePartInitialData& InitialPartData, const TArray<class ABP_Structure_Constructed_C*>& ConstructedStructures, const struct FTransform& StructurePartTransform, const struct FTransform& StructureTransform, class ABP_Structure_Composite_C* CompositeStructure, const struct FDataTableRowHandle& StructureHandle, const struct FStructureData& StructureData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_ResolveStructureWithProxy_SuccessfullyResolved, const struct FTransform& CallFunc_GetTransform_ReturnValue, TArray<class AActor*>& CallFunc_GetLevelActors_OutLevelActors, bool CallFunc_GetLevelActors_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, class ABP_StructurePartProxy_C* K2Node_DynamicCast_AsBP_Structure_Part_Proxy, bool K2Node_DynamicCast_bSuccess, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "ConnectStructures");

	Params::ABP_StructureBuilder_C_ConnectStructures_Params Parms{};

	Parms.LocalStructure = LocalStructure;
	Parms.LocalProxy = LocalProxy;
	Parms.InitialPartData = InitialPartData;
	Parms.ConstructedStructures = ConstructedStructures;
	Parms.StructurePartTransform = StructurePartTransform;
	Parms.StructureTransform = StructureTransform;
	Parms.CompositeStructure = CompositeStructure;
	Parms.StructureHandle = StructureHandle;
	Parms.StructureData = StructureData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_ResolveStructureWithProxy_SuccessfullyResolved = CallFunc_ResolveStructureWithProxy_SuccessfullyResolved;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetLevelActors_OutLevelActors = CallFunc_GetLevelActors_OutLevelActors;
	Parms.CallFunc_GetLevelActors_ReturnValue = CallFunc_GetLevelActors_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDynamicActorAtLocation_Actor = CallFunc_GetDynamicActorAtLocation_Actor;
	Parms.CallFunc_GetDynamicActorAtLocation_ReturnValue = CallFunc_GetDynamicActorAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Part_Proxy = K2Node_DynamicCast_AsBP_Structure_Part_Proxy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNWXStructure = K2Node_DynamicCast_AsNWXStructure;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.BuildStructureFromProxy
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructurePartProxyActor* StructureProxy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         DesiredStructureState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Constructed_C* ConstructedStructure                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    LStructureRef                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FCompositePieceGameplay>LPieceDatas                                                      (Edit, BlueprintVisible)
// struct FStructureData              StructureData                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FTransform                  StructurePartTransform                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePartInitialData   InitialPartData                                                  (Edit, BlueprintVisible)
// struct FTransform                  StructureTransform                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Structure_Constructed_C*>ConstructedStructures                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AStructureComposite*         CompositeStructure                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Structure_Reference_C>K2Node_DynamicCast_AsBPI_Structure_Reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Structure_Reference_C>K2Node_DynamicCast_AsBPI_Structure_Reference_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXStructurePartProxyComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXStructurePartProxyComponent*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureDataAsset*         K2Node_DynamicCast_AsStructure_Data_Asset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UStructureDataAsset>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStreamingLevelProxyActor*   CallFunc_GetLevelProxy_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureDataFromStructureAssetReference_IsValid     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureDataFromStructureAssetReference_OutData     (ContainsInstancedReference)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext                          (NoDestructor)
// class AStructureComposite*         CallFunc_SpawnCompositeStructure_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext_1                        (NoDestructor)
// bool                               CallFunc_IsStructureConstructed_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_SpawnStructure_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompositePiece_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Constructed_C* CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureSupportObject*     CallFunc_GetSinglePieceSupportObject_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISupportInterface>K2Node_DynamicCast_AsSupport_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_CreatePieceData_OutPieceData                            (None)
// bool                               CallFunc_CreatePieceData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_SetInitialPartData_StructOut                            (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::BuildStructureFromProxy(class ANWXStructurePartProxyActor* StructureProxy, enum class EStructureState DesiredStructureState, class ABP_Structure_Constructed_C* ConstructedStructure, const struct FStructureAssetReference& LStructureRef, const TArray<struct FCompositePieceGameplay>& LPieceDatas, const struct FStructureData& StructureData, const struct FTransform& StructurePartTransform, const struct FStructurePartInitialData& InitialPartData, const struct FTransform& StructureTransform, const TArray<class ABP_Structure_Constructed_C*>& ConstructedStructures, class AStructureComposite* CompositeStructure, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Structure_Reference_C> K2Node_DynamicCast_AsBPI_Structure_Reference, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Structure_Reference_C> K2Node_DynamicCast_AsBPI_Structure_Reference_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class UNWXStructurePartProxyComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UNWXStructurePartProxyComponent* CallFunc_Array_Get_Item, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UStructureDataAsset* K2Node_DynamicCast_AsStructure_Data_Asset, bool K2Node_DynamicCast_bSuccess_2, TSoftObjectPtr<class UStructureDataAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FStructureAssetReference& CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AStreamingLevelProxyActor* CallFunc_GetLevelProxy_ReturnValue, const class FString& CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_BreakSoftObjectPath_PathString, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class AStructureComposite* CallFunc_SpawnCompositeStructure_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext_1, bool CallFunc_IsStructureConstructed_ReturnValue, class UObject* CallFunc_SpawnStructure_ReturnValue, class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsCompositePiece_ReturnValue, class ABP_Structure_Constructed_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UStructureSupportObject* CallFunc_GetSinglePieceSupportObject_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue, const struct FCompositePieceGameplay& CallFunc_CreatePieceData_OutPieceData, bool CallFunc_CreatePieceData_ReturnValue, const struct FCompositePieceGameplay& CallFunc_SetInitialPartData_StructOut, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "BuildStructureFromProxy");

	Params::ABP_StructureBuilder_C_BuildStructureFromProxy_Params Parms{};

	Parms.StructureProxy = StructureProxy;
	Parms.DesiredStructureState = DesiredStructureState;
	Parms.ConstructedStructure = ConstructedStructure;
	Parms.LStructureRef = LStructureRef;
	Parms.LPieceDatas = LPieceDatas;
	Parms.StructureData = StructureData;
	Parms.StructurePartTransform = StructurePartTransform;
	Parms.InitialPartData = InitialPartData;
	Parms.StructureTransform = StructureTransform;
	Parms.ConstructedStructures = ConstructedStructures;
	Parms.CompositeStructure = CompositeStructure;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Reference = K2Node_DynamicCast_AsBPI_Structure_Reference;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Reference_1 = K2Node_DynamicCast_AsBPI_Structure_Reference_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Data_Asset = K2Node_DynamicCast_AsStructure_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue = CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLevelProxy_ReturnValue = CallFunc_GetLevelProxy_ReturnValue;
	Parms.CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue = CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_IsValid = CallFunc_GetStructureDataFromStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_OutData = CallFunc_GetStructureDataFromStructureAssetReference_OutData;
	Parms.K2Node_MakeStruct_StructureSpawnContext = K2Node_MakeStruct_StructureSpawnContext;
	Parms.CallFunc_SpawnCompositeStructure_ReturnValue = CallFunc_SpawnCompositeStructure_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_MakeStruct_StructureSpawnContext_1 = K2Node_MakeStruct_StructureSpawnContext_1;
	Parms.CallFunc_IsStructureConstructed_ReturnValue = CallFunc_IsStructureConstructed_ReturnValue;
	Parms.CallFunc_SpawnStructure_ReturnValue = CallFunc_SpawnStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Constructed = K2Node_DynamicCast_AsBP_Structure_Constructed;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsCompositePiece_ReturnValue = CallFunc_IsCompositePiece_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetSinglePieceSupportObject_ReturnValue = CallFunc_GetSinglePieceSupportObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSupport_Interface = K2Node_DynamicCast_AsSupport_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_CreatePieceData_OutPieceData = CallFunc_CreatePieceData_OutPieceData;
	Parms.CallFunc_CreatePieceData_ReturnValue = CallFunc_CreatePieceData_ReturnValue;
	Parms.CallFunc_SetInitialPartData_StructOut = CallFunc_SetInitialPartData_StructOut;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.SetInitialPartDataConstructed
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Structure_Constructed_C* ConstructedStructure                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructurePartInitialData   InitialPartData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FInventoryEntry>     RewardedInventoryEntries                                         (Edit, BlueprintVisible)
// struct FTagValueContainer          Temp_struct_Variable                                             (ConstParm)
// struct FHitResult                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable_2                                           (ConstParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// class UItemReward*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GenerateItemRewardsFromRewardData_ReturnValue           (ReferenceParm)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IContainerRewardsInterface>K2Node_DynamicCast_AsContainer_Rewards_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureHealthInterface>CallFunc_GetMaxHealth_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageEventInterface>CallFunc_DamageActor_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_0_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Max_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DamageActor_BaseDamage_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::SetInitialPartDataConstructed(class ABP_Structure_Constructed_C* ConstructedStructure, const struct FStructurePartInitialData& InitialPartData, const TArray<struct FInventoryEntry>& RewardedInventoryEntries, const struct FTagValueContainer& Temp_struct_Variable, const struct FHitResult& Temp_struct_Variable_1, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable_2, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_3, class UItemReward* CallFunc_Array_Get_Item, bool CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem, TArray<struct FInventoryEntry>& CallFunc_GenerateItemRewardsFromRewardData_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, TScriptInterface<class IContainerRewardsInterface> K2Node_DynamicCast_AsContainer_Rewards_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IStructureHealthInterface> CallFunc_GetMaxHealth_self_CastInput, float CallFunc_GetMaxHealth_ReturnValue, double K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IDamageEventInterface> CallFunc_DamageActor_self_CastInput, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, double CallFunc_FClamp_Max_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_DamageActor_BaseDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "SetInitialPartDataConstructed");

	Params::ABP_StructureBuilder_C_SetInitialPartDataConstructed_Params Parms{};

	Parms.ConstructedStructure = ConstructedStructure;
	Parms.InitialPartData = InitialPartData;
	Parms.RewardedInventoryEntries = RewardedInventoryEntries;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem = CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem;
	Parms.CallFunc_GenerateItemRewardsFromRewardData_ReturnValue = CallFunc_GenerateItemRewardsFromRewardData_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsContainer_Rewards_Interface = K2Node_DynamicCast_AsContainer_Rewards_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetMaxHealth_self_CastInput = CallFunc_GetMaxHealth_self_CastInput;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_DamageActor_self_CastInput = CallFunc_DamageActor_self_CastInput;
	Parms.CallFunc_DamageActor_AggregatedDamageTags = CallFunc_DamageActor_AggregatedDamageTags;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;
	Parms.CallFunc_FClamp_Max_ImplicitCast = CallFunc_FClamp_Max_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_DamageActor_BaseDamage_ImplicitCast = CallFunc_DamageActor_BaseDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.SetInitialPartData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCompositePieceGameplay     StructRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStructurePartInitialData   InitialPartData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FCompositePieceGameplay     StructOut                                                        (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_0_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Max_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_CurrentHealth_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::SetInitialPartData(struct FCompositePieceGameplay& StructRef, const struct FStructurePartInitialData& InitialPartData, struct FCompositePieceGameplay* StructOut, bool Temp_bool_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default, double CallFunc_FClamp_ReturnValue, double K2Node_Select_Option_0_ImplicitCast, double CallFunc_FClamp_Max_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float K2Node_SetFieldsInStruct_CurrentHealth_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "SetInitialPartData");

	Params::ABP_StructureBuilder_C_SetInitialPartData_Params Parms{};

	Parms.StructRef = StructRef;
	Parms.InitialPartData = InitialPartData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;
	Parms.CallFunc_FClamp_Max_ImplicitCast = CallFunc_FClamp_Max_ImplicitCast;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_CurrentHealth_ImplicitCast = K2Node_SetFieldsInStruct_CurrentHealth_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (StructOut != nullptr)
		*StructOut = std::move(Parms.StructOut);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.BuildStructuresFromLevelActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetLevelActors_OutLevelActors                           (ReferenceParm)
// bool                               CallFunc_GetLevelActors_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StructurePartProxy_C*    K2Node_DynamicCast_AsBP_Structure_Part_Proxy                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::BuildStructuresFromLevelActors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetLevelActors_OutLevelActors, bool CallFunc_GetLevelActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_StructurePartProxy_C* K2Node_DynamicCast_AsBP_Structure_Part_Proxy, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "BuildStructuresFromLevelActors");

	Params::ABP_StructureBuilder_C_BuildStructuresFromLevelActors_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLevelActors_OutLevelActors = CallFunc_GetLevelActors_OutLevelActors;
	Parms.CallFunc_GetLevelActors_ReturnValue = CallFunc_GetLevelActors_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Part_Proxy = K2Node_DynamicCast_AsBP_Structure_Part_Proxy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.BndEvt__BP_StructureBuilder_LevelAware_K2Node_ComponentBoundEvent_0_OnLevelStreamingCompleteSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_StructureBuilder_C::BndEvt__BP_StructureBuilder_LevelAware_K2Node_ComponentBoundEvent_0_OnLevelStreamingCompleteSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "BndEvt__BP_StructureBuilder_LevelAware_K2Node_ComponentBoundEvent_0_OnLevelStreamingCompleteSignature__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.PerformDirtyRealmReset
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_StructureBuilder_C::PerformDirtyRealmReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "PerformDirtyRealmReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.RegisterAsDirtyRealmResetObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StructureBuilder_C::RegisterAsDirtyRealmResetObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "RegisterAsDirtyRealmResetObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.SSMReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AManagerBase*                Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsReady                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::SSMReady(class AManagerBase* Manager, bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "SSMReady");

	Params::ABP_StructureBuilder_C_SSMReady_Params Parms{};

	Parms.Manager = Manager;
	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.RefreshStructureFromProxy
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructurePartProxyActor* ProxyActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         DesiredStructureState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::RefreshStructureFromProxy(class ANWXStructurePartProxyActor* ProxyActor, enum class EStructureState DesiredStructureState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "RefreshStructureFromProxy");

	Params::ABP_StructureBuilder_C_RefreshStructureFromProxy_Params Parms{};

	Parms.ProxyActor = ProxyActor;
	Parms.DesiredStructureState = DesiredStructureState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.OnPersistenceLoadComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_WorldPersistenceLoadStateLoadState                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::OnPersistenceLoadComplete(enum class E_WorldPersistenceLoadState LoadState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "OnPersistenceLoadComplete");

	Params::ABP_StructureBuilder_C_OnPersistenceLoadComplete_Params Parms{};

	Parms.LoadState = LoadState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.DevOnly_ProcessAllLevelProxyActors
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StructureBuilder_C::DevOnly_ProcessAllLevelProxyActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "DevOnly_ProcessAllLevelProxyActors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureBuilder.BP_StructureBuilder_C.ExecuteUbergraph_BP_StructureBuilder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AManagerBase>    Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsDevEnvironment_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_StructurePartProxy_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StructurePartProxy_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldBeResetUponDIrtyRealmReset_bSuccess               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorldPersistenceSubsystem*  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AManagerBase*                K2Node_CustomEvent_Manager                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsReady                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterManagerInterface>K2Node_DynamicCast_AsEncounter_Manager_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterDirtyResetInterface>CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ANWXStructurePartProxyActor* K2Node_Event_ProxyActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         K2Node_Event_DesiredStructureState                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            CallFunc_GetNWXGameModeBase_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_WorldPersistenceLoadStateK2Node_CustomEvent_LoadState                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StructureBuilder_C::ExecuteUbergraph_BP_StructureBuilder(int32 EntryPoint, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_HasAuthority_ReturnValue, TSubclassOf<class AManagerBase> Temp_class_Variable_1, bool CallFunc_IsDevEnvironment_ReturnValue, TArray<class ABP_StructurePartProxy_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_StructurePartProxy_C* CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_ShouldBeResetUponDIrtyRealmReset_bSuccess, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IEncounterDirtyResetInterface> CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput, class ANWXStructurePartProxyActor* K2Node_Event_ProxyActor, enum class EStructureState K2Node_Event_DesiredStructureState, class ANWXGameModeBase* CallFunc_GetNWXGameModeBase_ReturnValue, enum class E_WorldPersistenceLoadState K2Node_CustomEvent_LoadState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureBuilder_C", "ExecuteUbergraph_BP_StructureBuilder");

	Params::ABP_StructureBuilder_C_ExecuteUbergraph_BP_StructureBuilder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_IsDevEnvironment_ReturnValue = CallFunc_IsDevEnvironment_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_ShouldBeResetUponDIrtyRealmReset_bSuccess = CallFunc_ShouldBeResetUponDIrtyRealmReset_bSuccess;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_Manager = K2Node_CustomEvent_Manager;
	Parms.K2Node_CustomEvent_bIsReady = K2Node_CustomEvent_bIsReady;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue = CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Manager_Interface = K2Node_DynamicCast_AsEncounter_Manager_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput = CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput;
	Parms.K2Node_Event_ProxyActor = K2Node_Event_ProxyActor;
	Parms.K2Node_Event_DesiredStructureState = K2Node_Event_DesiredStructureState;
	Parms.CallFunc_GetNWXGameModeBase_ReturnValue = CallFunc_GetNWXGameModeBase_ReturnValue;
	Parms.K2Node_CustomEvent_LoadState = K2Node_CustomEvent_LoadState;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


