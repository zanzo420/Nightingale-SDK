#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x5C1 - 0x5B0)
// WidgetBlueprintGeneratedClass WBP_EncounterMapPin.WBP_EncounterMapPin_C
class UWBP_EncounterMapPin_C : public UWBP_PlayerMapPin_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDataTable*                            EncounterStateDataTable;                           // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterStatus                  EncounterStatusEnum;                               // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_EncounterMapPin_C* GetDefaultObj();

	void TryGet_Encounter_Status_Enum(enum class EEncounterStatus* EncountStatusEnum, bool* Success, class UEncounterProgressTracker* EncounterProgressTracker, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UEncounterProgressTracker* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_Parse_StringToGuid_OutGuid, bool CallFunc_Parse_StringToGuid_Success, const struct FEncounterDynamicData& CallFunc_TryGetEncounterDynamicData_OutData, bool CallFunc_TryGetEncounterDynamicData_ReturnValue);
	void Get_Encounter_State_Text(enum class EEncounterStatus Enumerator, class FText* StateString, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FEncounterStatusDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	class UWidget* GetTooltipWidget(class UWBP_Tooltip_EncounterMapMarker_C* CallFunc_Create_ReturnValue, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, class FText CallFunc_Get_Encounter_State_Text_StateString, class FText CallFunc_Conv_VectorToText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_EncounterMapPin(int32 EntryPoint, enum class EEncounterStatus CallFunc_TryGet_Encounter_Status_Enum_EncountStatusEnum, bool CallFunc_TryGet_Encounter_Status_Enum_Success);
};

}


