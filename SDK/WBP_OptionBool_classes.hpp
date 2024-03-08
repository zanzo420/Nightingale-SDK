#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x3C9 - 0x390)
// WidgetBlueprintGeneratedClass WBP_OptionBool.WBP_OptionBool_C
class UWBP_OptionBool_C : public UNWXOptionsSettingBoolWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             BoolCheckbox;                                      // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Button;                                        // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  LabelText;                                         // 0x3B0(0x18)(Edit, BlueprintVisible)
	bool                                         bShowButton;                                       // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_OptionBool_C* GetDefaultObj();

	void InitializeCosmetics(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void OnBoolChanged(bool NewValue, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default);
	class UCheckBox* GetCheckBoxWidget();
	class UWidget* GetDefaultFocusWidget(bool Temp_bool_Variable, class UWidget* K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_OptionBool_BoolCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__WBP_OptionBool_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void Construct();
	void ExecuteUbergraph_WBP_OptionBool(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_bIsChecked, const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


