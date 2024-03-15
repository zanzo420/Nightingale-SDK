#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x373 - 0x348)
// WidgetBlueprintGeneratedClass WBP_DebugStats.WBP_DebugStats_C
class UWBP_DebugStats_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Txt_FPSNum;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_PingNum;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerState*                          Player_State;                                      // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FTimerHandle                          Update_Timer;                                      // 0x368(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasRendered;                                      // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Debug_Stats;                                  // 0x371(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Live_Debug_Screen;                            // 0x372(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DebugStats_C* GetDefaultObj();

	void Update_Texts(float CallFunc_GetAvgFPS_AvgFPS, float CallFunc_GetAvgFPS_AvgMS, bool CallFunc_IsValid_ReturnValue, float CallFunc_RoundFloatToSingleDecimal_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, float CallFunc_GetPingInMilliseconds_ReturnValue, float CallFunc_RoundFloatToSingleDecimal_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, double CallFunc_Conv_DoubleToText_Value_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_1);
	void Construct();
	void Debug_Stats();
	void Live_Debug_Screen(bool bShowLiveDebugScreen);
	void ExecuteUbergraph_WBP_DebugStats(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_bShowLiveDebugScreen, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsRendered_ReturnValue, bool CallFunc_IsRendered_ReturnValue_1, bool CallFunc_IsRendered_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue);
};

}


