#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x310 - 0x2C8)
// WidgetBlueprintGeneratedClass WBP_AnnouncementBanner.WBP_AnnouncementBanner_C
class UWBP_AnnouncementBanner_C : public UAnnouncementWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Banner;                                            // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Banner;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          Announcement_Banner_Timer;                         // 0x2E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  Announcement_String_Table;                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Announcement_Message;                              // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataTable*                            DT_Announcement;                                   // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_AnnouncementBanner_C* GetDefaultObj();

	void Update_Announcement_Message_from_String_Table(const class FString& Announcement_String_ID, class FText CallFunc_Conv_StringToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_Announcement& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FString>& CallFunc_GetKeysFromStringTable_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void HideBanner();
	void ShowBanner(bool bIsTimerActive);
	void OnAnnouncementMessageReceived(const class FString& Message);
	void ExecuteUbergraph_WBP_AnnouncementBanner(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_Event_Message, float CallFunc_GetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


