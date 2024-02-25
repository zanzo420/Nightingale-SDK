#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C
// (Actor)

class UClass* ABP_Encounter_ArchetypePuzzleMemory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_ArchetypePuzzleMemory_C");

	return Clss;
}


// BP_Encounter_ArchetypePuzzleMemory_C BP_Encounter_ArchetypePuzzleMemory.Default__BP_Encounter_ArchetypePuzzleMemory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_ArchetypePuzzleMemory_C* ABP_Encounter_ArchetypePuzzleMemory_C::GetDefaultObj()
{
	static class ABP_Encounter_ArchetypePuzzleMemory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_ArchetypePuzzleMemory_C*>(ABP_Encounter_ArchetypePuzzleMemory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.CollectDebuggerShapes
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FEncounterDebugLine> OutDebugLines                                                    (Parm, OutParm)
// TArray<struct FEncounterDebugPoint>OutDebugPoints                                                   (Parm, OutParm)
// class FString                      MemoryPieceName                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FEncounterDebugLine         CurrentDebugLine                                                 (Edit, BlueprintVisible)
// struct FVector                     PuzzleCentreTopLocation                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PuzzleCentreHeightOffset                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PuzzlePieceTopLocation                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PuzzlePieceHeightOffset                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*CurrentPuzzlePiece                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterDebugPoint>DebugPoints                                                      (Edit, BlueprintVisible)
// TArray<struct FEncounterDebugLine> DebugLines                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterDebugPoint        K2Node_MakeStruct_EncounterDebugPoint                            (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FEncounterDebugLine> CallFunc_CollectDebuggerShapes_OutDebugLines                     (ReferenceParm)
// TArray<struct FEncounterDebugPoint>CallFunc_CollectDebuggerShapes_OutDebugPoints                    (ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterDebugLine         K2Node_MakeStruct_EncounterDebugLine                             (None)
// class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C*CallFunc_Get_Puzzle_Centre_PuzzleCentre                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>CallFunc_Get_Puzzle_Pieces_PuzzlePieces                          (None)
// TArray<class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::CollectDebuggerShapes(TArray<struct FEncounterDebugLine>* OutDebugLines, TArray<struct FEncounterDebugPoint>* OutDebugPoints, const class FString& MemoryPieceName, const struct FEncounterDebugLine& CurrentDebugLine, const struct FVector& PuzzleCentreTopLocation, const struct FVector& PuzzleCentreHeightOffset, const struct FVector& PuzzlePieceTopLocation, const struct FVector& PuzzlePieceHeightOffset, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* CurrentPuzzlePiece, const TArray<struct FEncounterDebugPoint>& DebugPoints, const TArray<struct FEncounterDebugLine>& DebugLines, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FEncounterDebugPoint& K2Node_MakeStruct_EncounterDebugPoint, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<struct FEncounterDebugLine>& CallFunc_CollectDebuggerShapes_OutDebugLines, TArray<struct FEncounterDebugPoint>& CallFunc_CollectDebuggerShapes_OutDebugPoints, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FEncounterDebugLine& K2Node_MakeStruct_EncounterDebugLine, class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C* CallFunc_Get_Puzzle_Centre_PuzzleCentre, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, TMap<int32, class ABP_Structure_EncounterTrigger_PuzzleMemory_C*> CallFunc_Get_Puzzle_Pieces_PuzzlePieces, TArray<class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "CollectDebuggerShapes");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_CollectDebuggerShapes_Params Parms{};

	Parms.MemoryPieceName = MemoryPieceName;
	Parms.CurrentDebugLine = CurrentDebugLine;
	Parms.PuzzleCentreTopLocation = PuzzleCentreTopLocation;
	Parms.PuzzleCentreHeightOffset = PuzzleCentreHeightOffset;
	Parms.PuzzlePieceTopLocation = PuzzlePieceTopLocation;
	Parms.PuzzlePieceHeightOffset = PuzzlePieceHeightOffset;
	Parms.CurrentPuzzlePiece = CurrentPuzzlePiece;
	Parms.DebugPoints = DebugPoints;
	Parms.DebugLines = DebugLines;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_MakeStruct_EncounterDebugPoint = K2Node_MakeStruct_EncounterDebugPoint;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_CollectDebuggerShapes_OutDebugLines = CallFunc_CollectDebuggerShapes_OutDebugLines;
	Parms.CallFunc_CollectDebuggerShapes_OutDebugPoints = CallFunc_CollectDebuggerShapes_OutDebugPoints;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_EncounterDebugLine = K2Node_MakeStruct_EncounterDebugLine;
	Parms.CallFunc_Get_Puzzle_Centre_PuzzleCentre = CallFunc_Get_Puzzle_Centre_PuzzleCentre;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Get_Puzzle_Pieces_PuzzlePieces = CallFunc_Get_Puzzle_Pieces_PuzzlePieces;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDebugLines != nullptr)
		*OutDebugLines = std::move(Parms.OutDebugLines);

	if (OutDebugPoints != nullptr)
		*OutDebugPoints = std::move(Parms.OutDebugPoints);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.CompletePuzzle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::CompletePuzzle(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "CompletePuzzle");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_CompletePuzzle_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.GetPuzzlePiece_SDA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStructureAssetReference    PuzzlePieces_SDA                                                 (Parm, OutParm, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::GetPuzzlePiece_SDA(struct FStructureAssetReference* PuzzlePieces_SDA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "GetPuzzlePiece_SDA");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_GetPuzzlePiece_SDA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PuzzlePieces_SDA != nullptr)
		*PuzzlePieces_SDA = std::move(Parms.PuzzlePieces_SDA);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.GetHECU_SDA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStructureAssetReference    HECU_SDA                                                         (Parm, OutParm, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::GetHECU_SDA(struct FStructureAssetReference* HECU_SDA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "GetHECU_SDA");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_GetHECU_SDA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HECU_SDA != nullptr)
		*HECU_SDA = std::move(Parms.HECU_SDA);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.SpawnRewardStructure
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStructureTypeData*          DELETEME_TEST                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  HECU_Transform                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext                          (NoDestructor)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Memory*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDynamicActorAtLocation_Actor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDynamicActorAtLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag                   (NoDestructor, HasGetValueTypeHash)
// struct FStructureEncounterSpawnContextK2Node_MakeStruct_StructureEncounterSpawnContext                 (NoDestructor)
// class UObject*                     CallFunc_SpawnEncounterStructure_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::SpawnRewardStructure(class UStructureTypeData* DELETEME_TEST, const struct FTransform& HECU_Transform, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset_Memory* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, const struct FStructureEncounterSpawnContext& K2Node_MakeStruct_StructureEncounterSpawnContext, class UObject* CallFunc_SpawnEncounterStructure_ReturnValue, class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre_1, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "SpawnRewardStructure");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_SpawnRewardStructure_Params Parms{};

	Parms.DELETEME_TEST = DELETEME_TEST;
	Parms.HECU_Transform = HECU_Transform;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_StructureSpawnContext = K2Node_MakeStruct_StructureSpawnContext;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;
	Parms.CallFunc_GetDynamicActorAtLocation_Actor = CallFunc_GetDynamicActorAtLocation_Actor;
	Parms.CallFunc_GetDynamicActorAtLocation_ReturnValue = CallFunc_GetDynamicActorAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag = CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;
	Parms.K2Node_MakeStruct_StructureEncounterSpawnContext = K2Node_MakeStruct_StructureEncounterSpawnContext;
	Parms.CallFunc_SpawnEncounterStructure_ReturnValue = CallFunc_SpawnEncounterStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre_1 = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.GetPuzzle Timeout Length
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_Encounter_ArchetypePuzzleMemory_C::GetPuzzle_Timeout_Length()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "GetPuzzle Timeout Length");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_GetPuzzle_Timeout_Length_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.SetPuzzle Timeout Length
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::SetPuzzle_Timeout_Length(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "SetPuzzle Timeout Length");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_SetPuzzle_Timeout_Length_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Get Puzzle Centre
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C*PuzzleCentre                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Get_Puzzle_Centre(class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C** PuzzleCentre)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Get Puzzle Centre");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Get_Puzzle_Centre_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PuzzleCentre != nullptr)
		*PuzzleCentre = Parms.PuzzleCentre;

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Get Puzzle Pieces
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<int32, class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>PuzzlePieces                                                     (Parm, OutParm)

void ABP_Encounter_ArchetypePuzzleMemory_C::Get_Puzzle_Pieces(TMap<int32, class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>* PuzzlePieces)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Get Puzzle Pieces");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Get_Puzzle_Pieces_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PuzzlePieces != nullptr)
		*PuzzlePieces = Parms.PuzzlePieces;

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.CollectDebuggerInformation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString ABP_Encounter_ArchetypePuzzleMemory_C::CollectDebuggerInformation(int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "CollectDebuggerInformation");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_CollectDebuggerInformation_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Restore Puzzle Centre
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Actor_Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDynamicActorAtLocation_Actor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDynamicActorAtLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Restore_Puzzle_Centre(const struct FTransform& Actor_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Restore Puzzle Centre");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Restore_Puzzle_Centre_Params Parms{};

	Parms.Actor_Transform = Actor_Transform;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetDynamicActorAtLocation_Actor = CallFunc_GetDynamicActorAtLocation_Actor;
	Parms.CallFunc_GetDynamicActorAtLocation_ReturnValue = CallFunc_GetDynamicActorAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory_Centre;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Puzzle Timeout
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Puzzle_Timeout(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Puzzle Timeout");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Puzzle_Timeout_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Puzzle Complete
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>CallFunc_Map_Values_Values                                       (ReferenceParm)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Puzzle_Complete(int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>& CallFunc_Map_Values_Values, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Puzzle Complete");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Puzzle_Complete_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue = CallFunc_K2_InvalidateTimerHandle_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.InitializeDesignerPreferences
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterArchetypeDataAssetPuzzleMemory*K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Puzzle_Memory(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Advertisement_Length_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Puzzle_Timeout_Length_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::InitializeDesignerPreferences(class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, class UEncounterArchetypeDataAssetPuzzleMemory* K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Puzzle_Memory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, double K2Node_VariableSet_Advertisement_Length_ImplicitCast, double K2Node_VariableSet_Puzzle_Timeout_Length_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "InitializeDesignerPreferences");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_InitializeDesignerPreferences_Params Parms{};

	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Puzzle_Memory = K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Puzzle_Memory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_VariableSet_Advertisement_Length_ImplicitCast = K2Node_VariableSet_Advertisement_Length_ImplicitCast;
	Parms.K2Node_VariableSet_Puzzle_Timeout_Length_ImplicitCast = K2Node_VariableSet_Puzzle_Timeout_Length_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Puzzle Piece Interacted
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Structure_EncounterTrigger_C*Triggering_Structure                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Puzzle_Piece_Interacted(class ABP_Structure_EncounterTrigger_C* Triggering_Structure, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Puzzle Piece Interacted");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Puzzle_Piece_Interacted_Params Parms{};

	Parms.Triggering_Structure = Triggering_Structure;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Register Puzzle Pieces
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>CallFunc_Map_Values_Values                                       (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Register_Puzzle_Pieces(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>& CallFunc_Map_Values_Values, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Register Puzzle Pieces");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Register_Puzzle_Pieces_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Puzzle Piece Destroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Puzzle_Piece_Destroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Puzzle Piece Destroyed");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Puzzle_Piece_Destroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.ObtainPersistedData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEncounterPOIPersistedObject*CallFunc_GetEncounterPersistedObject_EncounterPersistedObject    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMemoryPuzzlePieces_NumPuzzlePieces                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::ObtainPersistedData(class UEncounterPOIPersistedObject* CallFunc_GetEncounterPersistedObject_EncounterPersistedObject, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_GetNumMemoryPuzzlePieces_NumPuzzlePieces)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "ObtainPersistedData");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_ObtainPersistedData_Params Parms{};

	Parms.CallFunc_GetEncounterPersistedObject_EncounterPersistedObject = CallFunc_GetEncounterPersistedObject_EncounterPersistedObject;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetNumMemoryPuzzlePieces_NumPuzzlePieces = CallFunc_GetNumMemoryPuzzlePieces_NumPuzzlePieces;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.StorePersistedData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::StorePersistedData(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "StorePersistedData");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_StorePersistedData_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.RestorePuzzlePieces
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_IsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Memory*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATargetPoint*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*CallFunc_TryReconnectPuzzlePiece_PuzzlePiece                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::RestorePuzzlePieces(int32 Temp_int_Array_Index_Variable, bool CallFunc_Map_IsEmpty_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Memory* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory, bool K2Node_DynamicCast_bSuccess_1, class ATargetPoint* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* CallFunc_TryReconnectPuzzlePiece_PuzzlePiece, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "RestorePuzzlePieces");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_RestorePuzzlePieces_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_IsEmpty_ReturnValue = CallFunc_Map_IsEmpty_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_TryReconnectPuzzlePiece_PuzzlePiece = CallFunc_TryReconnectPuzzlePiece_PuzzlePiece;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.TryReconnectPuzzlePiece
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*PuzzlePiece                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*ExistingPuzzlePiece                                              (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDynamicActorAtLocation_Actor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDynamicActorAtLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::TryReconnectPuzzlePiece(const struct FTransform& Transform, class ABP_Structure_EncounterTrigger_PuzzleMemory_C** PuzzlePiece, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* ExistingPuzzlePiece, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "TryReconnectPuzzlePiece");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_TryReconnectPuzzlePiece_Params Parms{};

	Parms.Transform = Transform;
	Parms.ExistingPuzzlePiece = ExistingPuzzlePiece;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetDynamicActorAtLocation_Actor = CallFunc_GetDynamicActorAtLocation_Actor;
	Parms.CallFunc_GetDynamicActorAtLocation_ReturnValue = CallFunc_GetDynamicActorAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PuzzlePiece != nullptr)
		*PuzzlePiece = Parms.PuzzlePiece;

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.SpawnPuzzlePieces
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoftObjectPath             CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Memory*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATargetPoint*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext                          (NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag                   (NoDestructor, HasGetValueTypeHash)
// struct FStructureEncounterSpawnContextK2Node_MakeStruct_StructureEncounterSpawnContext                 (NoDestructor)
// class UObject*                     CallFunc_SpawnEncounterStructure_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::SpawnPuzzlePieces(int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FSoftObjectPath& CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue, const class FString& CallFunc_BreakSoftObjectPath_PathString, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Memory* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ATargetPoint* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, const struct FStructureEncounterSpawnContext& K2Node_MakeStruct_StructureEncounterSpawnContext, class UObject* CallFunc_SpawnEncounterStructure_ReturnValue, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "SpawnPuzzlePieces");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_SpawnPuzzlePieces_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue = CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Memory;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_StructureSpawnContext = K2Node_MakeStruct_StructureSpawnContext;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag = CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;
	Parms.K2Node_MakeStruct_StructureEncounterSpawnContext = K2Node_MakeStruct_StructureEncounterSpawnContext;
	Parms.CallFunc_SpawnEncounterStructure_ReturnValue = CallFunc_SpawnEncounterStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Puzzle_Memory;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Incorrect Piece
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>CallFunc_Map_Values_Values                                       (ReferenceParm)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Incorrect_Piece(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>& CallFunc_Map_Values_Values, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Incorrect Piece");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Incorrect_Piece_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Reset Puzzle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ResetPuzzleTime                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>CallFunc_Map_Values_Values                                       (ReferenceParm)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Reset_Puzzle(float ResetPuzzleTime, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class ABP_Structure_EncounterTrigger_PuzzleMemory_C*>& CallFunc_Map_Values_Values, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Reset Puzzle");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Reset_Puzzle_Params Parms{};

	Parms.ResetPuzzleTime = ResetPuzzleTime;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Advertise Puzzle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_PuzzleMemory_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Advertise_Puzzle(int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_Structure_EncounterTrigger_PuzzleMemory_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Advertise Puzzle");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Advertise_Puzzle_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Start Puzzle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypePuzzleMemory_C::Start_Puzzle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Start Puzzle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Punishment
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypePuzzleMemory_C::Punishment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Punishment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Spawn Time Out
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TArray<class APawn*>               CallFunc_GetPlayersInRange_Players                               (ReferenceParm)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Spawn_Time_Out(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class APawn*>& CallFunc_GetPlayersInRange_Players, bool CallFunc_Array_IsNotEmpty_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Spawn Time Out");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Spawn_Time_Out_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetPlayersInRange_Players = CallFunc_GetPlayersInRange_Players;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Enemies Defeated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Enemies_Defeated(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Enemies Defeated");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Enemies_Defeated_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Spawn Enemies
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   CallFunc_Manually_Spawn_Wave_Spawner_Actor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Spawn_Enemies(class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Spawn Enemies");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Spawn_Enemies_Params Parms{};

	Parms.CallFunc_Manually_Spawn_Wave_Spawner_Actor = CallFunc_Manually_Spawn_Wave_Spawner_Actor;
	Parms.CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned = CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.CleanupEncounter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::CleanupEncounter(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "CleanupEncounter");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_CleanupEncounter_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Initialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::Initialize(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Initialize");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_Initialize_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.Fail Puzzle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypePuzzleMemory_C::Fail_Puzzle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "Fail Puzzle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.BeginEncounter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypePuzzleMemory_C::BeginEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "BeginEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypePuzzleMemory.BP_Encounter_ArchetypePuzzleMemory_C.ExecuteUbergraph_BP_Encounter_ArchetypePuzzleMemory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleMemory_C::ExecuteUbergraph_BP_Encounter_ArchetypePuzzleMemory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleMemory_C", "ExecuteUbergraph_BP_Encounter_ArchetypePuzzleMemory");

	Params::ABP_Encounter_ArchetypePuzzleMemory_C_ExecuteUbergraph_BP_Encounter_ArchetypePuzzleMemory_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


