#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C
// (Actor)

class UClass* ABP_Encounter_ArchetypeReachpoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_ArchetypeReachpoint_C");

	return Clss;
}


// BP_Encounter_ArchetypeReachpoint_C BP_Encounter_ArchetypeReachpoint.Default__BP_Encounter_ArchetypeReachpoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_ArchetypeReachpoint_C* ABP_Encounter_ArchetypeReachpoint_C::GetDefaultObj()
{
	static class ABP_Encounter_ArchetypeReachpoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_ArchetypeReachpoint_C*>(ABP_Encounter_ArchetypeReachpoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.CollectDebuggerShapes
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FEncounterDebugLine> OutDebugLines                                                    (Parm, OutParm)
// TArray<struct FEncounterDebugPoint>OutDebugPoints                                                   (Parm, OutParm)
// TArray<struct FEncounterDebugPoint>DebugPoints                                                      (Edit, BlueprintVisible)
// TArray<struct FEncounterDebugLine> DebugLines                                                       (Edit, BlueprintVisible)
// struct FEncounterDebugPoint        K2Node_MakeStruct_EncounterDebugPoint                            (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterDebugLine> CallFunc_CollectDebuggerShapes_OutDebugLines                     (ReferenceParm)
// TArray<struct FEncounterDebugPoint>CallFunc_CollectDebuggerShapes_OutDebugPoints                    (ReferenceParm)
// float                              K2Node_MakeStruct_Radius_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeReachpoint_C::CollectDebuggerShapes(TArray<struct FEncounterDebugLine>* OutDebugLines, TArray<struct FEncounterDebugPoint>* OutDebugPoints, const TArray<struct FEncounterDebugPoint>& DebugPoints, const TArray<struct FEncounterDebugLine>& DebugLines, const struct FEncounterDebugPoint& K2Node_MakeStruct_EncounterDebugPoint, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FEncounterDebugLine>& CallFunc_CollectDebuggerShapes_OutDebugLines, TArray<struct FEncounterDebugPoint>& CallFunc_CollectDebuggerShapes_OutDebugPoints, float K2Node_MakeStruct_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "CollectDebuggerShapes");

	Params::ABP_Encounter_ArchetypeReachpoint_C_CollectDebuggerShapes_Params Parms{};

	Parms.DebugPoints = DebugPoints;
	Parms.DebugLines = DebugLines;
	Parms.K2Node_MakeStruct_EncounterDebugPoint = K2Node_MakeStruct_EncounterDebugPoint;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_CollectDebuggerShapes_OutDebugLines = CallFunc_CollectDebuggerShapes_OutDebugLines;
	Parms.CallFunc_CollectDebuggerShapes_OutDebugPoints = CallFunc_CollectDebuggerShapes_OutDebugPoints;
	Parms.K2Node_MakeStruct_Radius_ImplicitCast = K2Node_MakeStruct_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDebugLines != nullptr)
		*OutDebugLines = std::move(Parms.OutDebugLines);

	if (OutDebugPoints != nullptr)
		*OutDebugPoints = std::move(Parms.OutDebugPoints);

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.GetReachPointLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReachPointLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeReachpoint_C::GetReachPointLocation(struct FVector* ReachPointLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "GetReachPointLocation");

	Params::ABP_Encounter_ArchetypeReachpoint_C_GetReachPointLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReachPointLocation != nullptr)
		*ReachPointLocation = std::move(Parms.ReachPointLocation);

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.SpawnRewardPylonAtRandomReachPoint
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATargetPoint*>        ReachPoints                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_Structure_EncounterTrigger_HopeEchoContainer_C*SpawnedRewardPylon                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    Reward_Pylon_SDA                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// class ATargetPoint*                RandomReachPoint                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATargetPoint*                CallFunc_Array_Random_OutItem                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext                          (NoDestructor)
// struct FGameplayTag                CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag                   (NoDestructor, HasGetValueTypeHash)
// struct FStructureEncounterSpawnContextK2Node_MakeStruct_StructureEncounterSpawnContext                 (NoDestructor)
// class UObject*                     CallFunc_SpawnEncounterStructure_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_HopeEchoContainer_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeReachpoint_C::SpawnRewardPylonAtRandomReachPoint(TArray<class ATargetPoint*>& ReachPoints, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C** SpawnedRewardPylon, const struct FStructureAssetReference& Reward_Pylon_SDA, class ATargetPoint* RandomReachPoint, bool CallFunc_Array_IsNotEmpty_ReturnValue, class ATargetPoint* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, const struct FStructureEncounterSpawnContext& K2Node_MakeStruct_StructureEncounterSpawnContext, class UObject* CallFunc_SpawnEncounterStructure_ReturnValue, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "SpawnRewardPylonAtRandomReachPoint");

	Params::ABP_Encounter_ArchetypeReachpoint_C_SpawnRewardPylonAtRandomReachPoint_Params Parms{};

	Parms.ReachPoints = ReachPoints;
	Parms.Reward_Pylon_SDA = Reward_Pylon_SDA;
	Parms.RandomReachPoint = RandomReachPoint;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_MakeStruct_StructureSpawnContext = K2Node_MakeStruct_StructureSpawnContext;
	Parms.CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag = CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;
	Parms.K2Node_MakeStruct_StructureEncounterSpawnContext = K2Node_MakeStruct_StructureEncounterSpawnContext;
	Parms.CallFunc_SpawnEncounterStructure_ReturnValue = CallFunc_SpawnEncounterStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedRewardPylon != nullptr)
		*SpawnedRewardPylon = Parms.SpawnedRewardPylon;

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.CheckReachPointsForExistingRewardPylon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATargetPoint*>        ReachPoints                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_Structure_EncounterTrigger_HopeEchoContainer_C*FoundRewardPylon                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ATargetPoint*                CurrentRewardPoint                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATargetPoint*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDynamicActorAtLocation_Actor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDynamicActorAtLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_HopeEchoContainer_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeReachpoint_C::CheckReachPointsForExistingRewardPylon(TArray<class ATargetPoint*>& ReachPoints, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C** FoundRewardPylon, class ATargetPoint* CurrentRewardPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class ATargetPoint* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "CheckReachPointsForExistingRewardPylon");

	Params::ABP_Encounter_ArchetypeReachpoint_C_CheckReachPointsForExistingRewardPylon_Params Parms{};

	Parms.ReachPoints = ReachPoints;
	Parms.CurrentRewardPoint = CurrentRewardPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetDynamicActorAtLocation_Actor = CallFunc_GetDynamicActorAtLocation_Actor;
	Parms.CallFunc_GetDynamicActorAtLocation_ReturnValue = CallFunc_GetDynamicActorAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundRewardPylon != nullptr)
		*FoundRewardPylon = Parms.FoundRewardPylon;

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.SpawnAndInitializeVFXActor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Extent                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Origin                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                AVFXActorAffinityTableRow                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_AddZHeightToPlacementTransform_ReturnValue              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag                   (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Encounter_Reachpoint_AVFX_Actor_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeReachpoint_C::SpawnAndInitializeVFXActor(const struct FVector& Extent, const struct FVector& Origin, const struct FGameplayTag& AVFXActorAffinityTableRow, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_AddZHeightToPlacementTransform_ReturnValue, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Encounter_Reachpoint_AVFX_Actor_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "SpawnAndInitializeVFXActor");

	Params::ABP_Encounter_ArchetypeReachpoint_C_SpawnAndInitializeVFXActor_Params Parms{};

	Parms.Extent = Extent;
	Parms.Origin = Origin;
	Parms.AVFXActorAffinityTableRow = AVFXActorAffinityTableRow;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddZHeightToPlacementTransform_ReturnValue = CallFunc_AddZHeightToPlacementTransform_ReturnValue;
	Parms.CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag = CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.GetVFXActorHeightOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             VFXActorHeightOffset                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_VFXActorHeightOffset_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeReachpoint_C::GetVFXActorHeightOffset(double* VFXActorHeightOffset, double K2Node_FunctionResult_VFXActorHeightOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "GetVFXActorHeightOffset");

	Params::ABP_Encounter_ArchetypeReachpoint_C_GetVFXActorHeightOffset_Params Parms{};

	Parms.K2Node_FunctionResult_VFXActorHeightOffset_ImplicitCast = K2Node_FunctionResult_VFXActorHeightOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (VFXActorHeightOffset != nullptr)
		*VFXActorHeightOffset = Parms.VFXActorHeightOffset;

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.Initialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeReachpoint_C::Initialize(bool CallFunc_Vector_IsNearlyZero_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "Initialize");

	Params::ABP_Encounter_ArchetypeReachpoint_C_Initialize_Params Parms{};

	Parms.CallFunc_Vector_IsNearlyZero_ReturnValue = CallFunc_Vector_IsNearlyZero_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.SpawnRewardStructure
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATargetPoint*                RandomReachPoint                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_HopeEchoContainer_C*Reward_Pylon                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class ATargetPoint*>        Reach_Points                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_HopeEchoContainer_C*CallFunc_CheckReachPointsForExistingRewardPylon_FoundRewardPylon (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Reachpoint*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Reachpoint      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_HopeEchoContainer_C*CallFunc_SpawnRewardPylonAtRandomReachPoint_SpawnedRewardPylon   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeReachpoint_C::SpawnRewardStructure(class ATargetPoint* RandomReachPoint, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* Reward_Pylon, const TArray<class ATargetPoint*>& Reach_Points, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* CallFunc_CheckReachPointsForExistingRewardPylon_FoundRewardPylon, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Reachpoint* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Reachpoint, bool K2Node_DynamicCast_bSuccess_1, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* CallFunc_SpawnRewardPylonAtRandomReachPoint_SpawnedRewardPylon, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "SpawnRewardStructure");

	Params::ABP_Encounter_ArchetypeReachpoint_C_SpawnRewardStructure_Params Parms{};

	Parms.RandomReachPoint = RandomReachPoint;
	Parms.Reward_Pylon = Reward_Pylon;
	Parms.Reach_Points = Reach_Points;
	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;
	Parms.CallFunc_CheckReachPointsForExistingRewardPylon_FoundRewardPylon = CallFunc_CheckReachPointsForExistingRewardPylon_FoundRewardPylon;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Reachpoint = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Reachpoint;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SpawnRewardPylonAtRandomReachPoint_SpawnedRewardPylon = CallFunc_SpawnRewardPylonAtRandomReachPoint_SpawnedRewardPylon;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.CollectDebuggerInformation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

class FString ABP_Encounter_ArchetypeReachpoint_C::CollectDebuggerInformation(const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "CollectDebuggerInformation");

	Params::ABP_Encounter_ArchetypeReachpoint_C_CollectDebuggerInformation_Params Parms{};

	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.RefreshEncounter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyPlayerInRadius_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsAnyPlayerInRadius_Radius_ImplicitCast                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeReachpoint_C::RefreshEncounter(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAnyPlayerInRadius_ReturnValue, float CallFunc_IsAnyPlayerInRadius_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "RefreshEncounter");

	Params::ABP_Encounter_ArchetypeReachpoint_C_RefreshEncounter_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsAnyPlayerInRadius_ReturnValue = CallFunc_IsAnyPlayerInRadius_ReturnValue;
	Parms.CallFunc_IsAnyPlayerInRadius_Radius_ImplicitCast = CallFunc_IsAnyPlayerInRadius_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.BeginEncounter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypeReachpoint_C::BeginEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "BeginEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypeReachpoint_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.CompleteReachPointEncounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypeReachpoint_C::CompleteReachPointEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "CompleteReachPointEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.ExecuteUbergraph_BP_Encounter_ArchetypeReachpoint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypeReachpoint_C::ExecuteUbergraph_BP_Encounter_ArchetypeReachpoint(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypeReachpoint_C", "ExecuteUbergraph_BP_Encounter_ArchetypeReachpoint");

	Params::ABP_Encounter_ArchetypeReachpoint_C_ExecuteUbergraph_BP_Encounter_ArchetypeReachpoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


