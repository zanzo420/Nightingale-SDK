#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C
// (Actor)

class UClass* ABP_Encounter_ArchetypePuzzleGlyph_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_ArchetypePuzzleGlyph_C");

	return Clss;
}


// BP_Encounter_ArchetypePuzzleGlyph_C BP_Encounter_ArchetypePuzzleGlyph.Default__BP_Encounter_ArchetypePuzzleGlyph_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_ArchetypePuzzleGlyph_C* ABP_Encounter_ArchetypePuzzleGlyph_C::GetDefaultObj()
{
	static class ABP_Encounter_ArchetypePuzzleGlyph_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_ArchetypePuzzleGlyph_C*>(ABP_Encounter_ArchetypePuzzleGlyph_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.CollectDebuggerShapes
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FEncounterDebugLine> OutDebugLines                                                    (Parm, OutParm)
// TArray<struct FEncounterDebugPoint>OutDebugPoints                                                   (Parm, OutParm)
// struct FVector                     HECUHeightOffset                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GlyphHeightOffset                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GlyphBeaconOffset                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LineColour                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PieceLocation                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGlyphVolume*                CurrentGlyph                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HECULocation                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterDebugPoint>DebugPoints                                                      (Edit, BlueprintVisible)
// TArray<struct FEncounterDebugLine> DebugLines                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterDebugLine         K2Node_MakeStruct_EncounterDebugLine                             (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenInteractedWith_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterDebugLine         K2Node_MakeStruct_EncounterDebugLine_1                           (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGlyphVolume*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterDebugLine> CallFunc_CollectDebuggerShapes_OutDebugLines                     (ReferenceParm)
// TArray<struct FEncounterDebugPoint>CallFunc_CollectDebuggerShapes_OutDebugPoints                    (ReferenceParm)

void ABP_Encounter_ArchetypePuzzleGlyph_C::CollectDebuggerShapes(TArray<struct FEncounterDebugLine>* OutDebugLines, TArray<struct FEncounterDebugPoint>* OutDebugPoints, const struct FVector& HECUHeightOffset, const struct FVector& GlyphHeightOffset, const struct FVector& GlyphBeaconOffset, const struct FLinearColor& LineColour, const struct FVector& PieceLocation, class AGlyphVolume* CurrentGlyph, const struct FVector& HECULocation, const TArray<struct FEncounterDebugPoint>& DebugPoints, const TArray<struct FEncounterDebugLine>& DebugLines, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FEncounterDebugLine& K2Node_MakeStruct_EncounterDebugLine, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_HasBeenInteractedWith_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FEncounterDebugLine& K2Node_MakeStruct_EncounterDebugLine_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class AGlyphVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FEncounterDebugLine>& CallFunc_CollectDebuggerShapes_OutDebugLines, TArray<struct FEncounterDebugPoint>& CallFunc_CollectDebuggerShapes_OutDebugPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "CollectDebuggerShapes");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_CollectDebuggerShapes_Params Parms{};

	Parms.HECUHeightOffset = HECUHeightOffset;
	Parms.GlyphHeightOffset = GlyphHeightOffset;
	Parms.GlyphBeaconOffset = GlyphBeaconOffset;
	Parms.LineColour = LineColour;
	Parms.PieceLocation = PieceLocation;
	Parms.CurrentGlyph = CurrentGlyph;
	Parms.HECULocation = HECULocation;
	Parms.DebugPoints = DebugPoints;
	Parms.DebugLines = DebugLines;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_MakeStruct_EncounterDebugLine = K2Node_MakeStruct_EncounterDebugLine;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_HasBeenInteractedWith_ReturnValue = CallFunc_HasBeenInteractedWith_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_EncounterDebugLine_1 = K2Node_MakeStruct_EncounterDebugLine_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CollectDebuggerShapes_OutDebugLines = CallFunc_CollectDebuggerShapes_OutDebugLines;
	Parms.CallFunc_CollectDebuggerShapes_OutDebugPoints = CallFunc_CollectDebuggerShapes_OutDebugPoints;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDebugLines != nullptr)
		*OutDebugLines = std::move(Parms.OutDebugLines);

	if (OutDebugPoints != nullptr)
		*OutDebugPoints = std::move(Parms.OutDebugPoints);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.OnGlyphInteracted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlyphVolume*                InteractedVolume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGlyphVolume*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGlyphVolume*                CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleGlyph_C::OnGlyphInteracted(class AGlyphVolume* InteractedVolume, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class AGlyphVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AGlyphVolume* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "OnGlyphInteracted");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_OnGlyphInteracted_Params Parms{};

	Parms.InteractedVolume = InteractedVolume;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.GetGlyphs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AGlyphVolume*>        ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class AGlyphVolume*> ABP_Encounter_ArchetypePuzzleGlyph_C::GetGlyphs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "GetGlyphs");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_GetGlyphs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.SetupPuzzleGlyphs
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EncounterLocation                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*PersistedObject                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterManagerInterface>CallFunc_GetEncounterManager_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IEncounterManagerInterface>CallFunc_GetEncounterManager_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterPOIPersistedObject*CallFunc_GetEncounterPersistedObject_EncounterPersistedObject    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMemoryPuzzlePieces_NumPuzzlePieces                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleGlyph_C::SetupPuzzleGlyphs(const struct FVector& EncounterLocation, class UEncounterPOIPersistedObject* PersistedObject, TScriptInterface<class IEncounterManagerInterface> CallFunc_GetEncounterManager_ReturnValue, TScriptInterface<class IEncounterManagerInterface> CallFunc_GetEncounterManager_ReturnValue_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UEncounterPOIPersistedObject* CallFunc_GetEncounterPersistedObject_EncounterPersistedObject, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_GetNumMemoryPuzzlePieces_NumPuzzlePieces, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "SetupPuzzleGlyphs");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_SetupPuzzleGlyphs_Params Parms{};

	Parms.EncounterLocation = EncounterLocation;
	Parms.PersistedObject = PersistedObject;
	Parms.CallFunc_GetEncounterManager_ReturnValue = CallFunc_GetEncounterManager_ReturnValue;
	Parms.CallFunc_GetEncounterManager_ReturnValue_1 = CallFunc_GetEncounterManager_ReturnValue_1;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetEncounterPersistedObject_EncounterPersistedObject = CallFunc_GetEncounterPersistedObject_EncounterPersistedObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetNumMemoryPuzzlePieces_NumPuzzlePieces = CallFunc_GetNumMemoryPuzzlePieces_NumPuzzlePieces;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.InitializePuzzle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UEncounterArchetypeDataAssetPuzzleGlyph*K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Puzzle_Glyph (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Glyph*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleGlyph_C::InitializePuzzle(class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class UEncounterArchetypeDataAssetPuzzleGlyph* K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Puzzle_Glyph, bool K2Node_DynamicCast_bSuccess, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Glyph* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "InitializePuzzle");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_InitializePuzzle_Params Parms{};

	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Puzzle_Glyph = K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Puzzle_Glyph;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.SpawnPuzzleGlyphs
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GlyphAnchorsNum                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_RemoveInvalidEntriesFromArray_ReturnValue               (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGlyphVolume*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Volume_Glyph_HECU_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleGlyph_C::SpawnPuzzleGlyphs(int32 GlyphAnchorsNum, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_RemoveInvalidEntriesFromArray_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, class AGlyphVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Volume_Glyph_HECU_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "SpawnPuzzleGlyphs");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_SpawnPuzzleGlyphs_Params Parms{};

	Parms.GlyphAnchorsNum = GlyphAnchorsNum;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_RemoveInvalidEntriesFromArray_ReturnValue = CallFunc_RemoveInvalidEntriesFromArray_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.SpawnRewardStructure
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    HECU_SDA                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FTransform                  HECU_Transform                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Glyph*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureSpawnContext      K2Node_MakeStruct_StructureSpawnContext                          (NoDestructor)
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureEncounterArenaSpawnContextK2Node_MakeStruct_StructureEncounterArenaSpawnContext            (NoDestructor)
// class AActor*                      CallFunc_GetDynamicActorAtLocation_Actor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDynamicActorAtLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag                   (NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_ArenaContainer_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureEncounterSpawnContextK2Node_MakeStruct_StructureEncounterSpawnContext                 (NoDestructor)
// class UObject*                     CallFunc_SpawnEncounterStructure_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_ArenaContainer_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleGlyph_C::SpawnRewardStructure(const struct FStructureAssetReference& HECU_SDA, const struct FTransform& HECU_Transform, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Glyph* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FStructureEncounterArenaSpawnContext& K2Node_MakeStruct_StructureEncounterArenaSpawnContext, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, class ABP_Structure_EncounterTrigger_ArenaContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container, bool K2Node_DynamicCast_bSuccess_2, const struct FStructureEncounterSpawnContext& K2Node_MakeStruct_StructureEncounterSpawnContext, class UObject* CallFunc_SpawnEncounterStructure_ReturnValue, class ABP_Structure_EncounterTrigger_ArenaContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "SpawnRewardStructure");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_SpawnRewardStructure_Params Parms{};

	Parms.HECU_SDA = HECU_SDA;
	Parms.HECU_Transform = HECU_Transform;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_StructureSpawnContext = K2Node_MakeStruct_StructureSpawnContext;
	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_MakeStruct_StructureEncounterArenaSpawnContext = K2Node_MakeStruct_StructureEncounterArenaSpawnContext;
	Parms.CallFunc_GetDynamicActorAtLocation_Actor = CallFunc_GetDynamicActorAtLocation_Actor;
	Parms.CallFunc_GetDynamicActorAtLocation_ReturnValue = CallFunc_GetDynamicActorAtLocation_ReturnValue;
	Parms.CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag = CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_MakeStruct_StructureEncounterSpawnContext = K2Node_MakeStruct_StructureEncounterSpawnContext;
	Parms.CallFunc_SpawnEncounterStructure_ReturnValue = CallFunc_SpawnEncounterStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1 = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.CollectDebuggerInformation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// int32                              RevealedCount                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGlyphVolume*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenInteractedWith_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

class FString ABP_Encounter_ArchetypePuzzleGlyph_C::CollectDebuggerInformation(int32 RevealedCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, class AGlyphVolume* CallFunc_Array_Get_Item, bool CallFunc_HasBeenInteractedWith_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "CollectDebuggerInformation");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_CollectDebuggerInformation_Params Parms{};

	Parms.RevealedCount = RevealedCount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasBeenInteractedWith_ReturnValue = CallFunc_HasBeenInteractedWith_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.NoCreaturesRemain
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Manually_Spawn_Wave_Spawner_Actor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleGlyph_C::NoCreaturesRemain(bool CallFunc_IsValid_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "NoCreaturesRemain");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_NoCreaturesRemain_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Manually_Spawn_Wave_Spawner_Actor = CallFunc_Manually_Spawn_Wave_Spawner_Actor;
	Parms.CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned = CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.Initialize
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FTransform>          CallFunc_Get_Glyph_Anchors_Out_Anchor_Transforms                 (ReferenceParm)
// bool                               CallFunc_Get_Glyph_Anchors_GetTransformsSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Glyph*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleGlyph_C::Initialize(TSubclassOf<class IInterface> Temp_class_Variable, TArray<struct FTransform>& CallFunc_Get_Glyph_Anchors_Out_Anchor_Transforms, bool CallFunc_Get_Glyph_Anchors_GetTransformsSuccess, bool CallFunc_Array_IsNotEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Glyph* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "Initialize");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_Initialize_Params Parms{};

	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Get_Glyph_Anchors_Out_Anchor_Transforms = CallFunc_Get_Glyph_Anchors_Out_Anchor_Transforms;
	Parms.CallFunc_Get_Glyph_Anchors_GetTransformsSuccess = CallFunc_Get_Glyph_Anchors_GetTransformsSuccess;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Glyph;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.CompleteEncounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypePuzzleGlyph_C::CompleteEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "CompleteEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.BeginEncounter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypePuzzleGlyph_C::BeginEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "BeginEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.Start
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypePuzzleGlyph_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.CleanupEncounter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_ArchetypePuzzleGlyph_C::CleanupEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "CleanupEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_ArchetypePuzzleGlyph.BP_Encounter_ArchetypePuzzleGlyph_C.ExecuteUbergraph_BP_Encounter_ArchetypePuzzleGlyph
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Manually_Spawn_Wave_Spawner_Actor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGlyphVolume*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_ArchetypePuzzleGlyph_C::ExecuteUbergraph_BP_Encounter_ArchetypePuzzleGlyph(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_Manually_Spawn_Wave_Spawner_Actor, bool CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned, bool CallFunc_IsValid_ReturnValue_1, class AGlyphVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_ArchetypePuzzleGlyph_C", "ExecuteUbergraph_BP_Encounter_ArchetypePuzzleGlyph");

	Params::ABP_Encounter_ArchetypePuzzleGlyph_C_ExecuteUbergraph_BP_Encounter_ArchetypePuzzleGlyph_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Manually_Spawn_Wave_Spawner_Actor = CallFunc_Manually_Spawn_Wave_Spawner_Actor;
	Parms.CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned = CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


