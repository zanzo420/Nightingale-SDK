#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x510 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_Generic_Text_Popup.WBP_Generic_Text_Popup_C
class UWBP_Generic_Text_Popup_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            Scrollbox_description;                             // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_body;                                          // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Title;                                         // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             WBP_Common_Button_Base;                            // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x4E0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x4F8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_Generic_Text_Popup_C* GetDefaultObj();

	void UpdateDetails();
	void Construct();
	void BndEvt__WBP_RecipeDetails_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Generic_Text_Popup(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
};

}


