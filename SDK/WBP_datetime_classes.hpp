#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x370 - 0x350)
// WidgetBlueprintGeneratedClass WBP_datetime.WBP_datetime_C
class UWBP_datetime_C : public UNWXDateTime
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Time;                                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_TimeOfDayManager_C*                Time_Of_Day_Manager;                               // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URealmTimerComponent*                  RealmTimerComponent;                               // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_datetime_C* GetDefaultObj();

	void GetLocalizedMeridiemString(bool bIsPM, class FText* OutMeridiem, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1);
	void Unbindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void UpdateClockFace(bool CallFunc_TryGetClockFaceTime_PM, int32 CallFunc_TryGetClockFaceTime_Hours, int32 CallFunc_TryGetClockFaceTime_Minutes, int32 CallFunc_TryGetClockFaceTime_Seconds, bool CallFunc_TryGetClockFaceTime_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, class FText CallFunc_FormatDateTime_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_datetime(int32 EntryPoint, class ABP_TimeOfDayManager_C* CallFunc_GetActorOfClass_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FTimerHandle& CallFunc_SetRealmTimerByFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


