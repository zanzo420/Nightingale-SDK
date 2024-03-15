#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26 (0x16B8 - 0x1692)
// WidgetBlueprintGeneratedClass WBP_Button_Tab.WBP_Button_Tab_C
class UWBP_Button_Tab_C : public UWBP_Common_Button_Base_C
{
public:
	uint8                                        Pad_55C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1698(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        TabIndex;                                          // 0x16A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_55C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            TabClicked;                                        // 0x16A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Button_Tab_C* GetDefaultObj();

	void OnButtonClicked(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_Button_Tab(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void TabClicked__DelegateSignature(class FText Name, int32 TabIndex);
};

}


