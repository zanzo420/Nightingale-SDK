#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x3C0 - 0x318)
// BlueprintGeneratedClass BP_POIConfigBiomeSelectionProxy.BP_POIConfigBiomeSelectionProxy_C
class ABP_POIConfigBiomeSelectionProxy_C : public ABP_POIConfig_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<enum class EBiomeID, struct FDataTableRowHandle> BiomeToML;                                         // 0x320(0x50)(Edit, BlueprintVisible)
	TMap<enum class EBiomeID, struct FS_ConfigBiomeSelection> BiomeToSelection;                                  // 0x370(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class ABP_POIConfigBiomeSelectionProxy_C* GetDefaultObj();

	void SelectSublevel(struct FDataTableRowHandle* Selection, enum class EBiomeID BiomeId, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_ConfigBiomeSelection& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Map_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue);
	void SpawnSublevelSelection(struct FDataTableRowHandle& RowHandle, bool CallFunc_DoesDataTableRowExist_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FPOIStreamingLevelDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_SpawnDependency_ReturnValue);
	void SpawnSubLevelFromBiome(const struct FDataTableRowHandle& RowHandle, bool CallFunc_IsValidRowHandle_IsValid, const struct FDataTableRowHandle& CallFunc_SelectSublevel_Selection, const class FString& CallFunc_FormatTableRowName_Name, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void ReceiveBeginPlay();
	void SpawnDependencies(class ULevelAwareComponent* LevelAware);
	void ExecuteUbergraph_BP_POIConfigBiomeSelectionProxy(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class ULevelAwareComponent* K2Node_Event_LevelAware);
};

}


