#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x401 - 0x340)
// WidgetBlueprintGeneratedClass WBP_Tooltip_EncounterMapMarker.WBP_Tooltip_EncounterMapMarker_C
class UWBP_Tooltip_EncounterMapMarker_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG;                                            // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_description;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_state;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Title;                                         // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_worldPosition;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Tooltip_Text_Title;                                // 0x378(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Tooltip_Text_State;                                // 0x390(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Tooltip_Text_Coord;                                // 0x3A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Tooltip_Text_Description;                          // 0x3C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TSoftObjectPtr<class UTexture2D>             Soft_Texture_Icon;                                 // 0x3D8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	enum class EEncounterStatus                  EncounterStatus;                                   // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Tooltip_EncounterMapMarker_C* GetDefaultObj();

	void InitializeView();
	void Construct();
	void ExecuteUbergraph_WBP_Tooltip_EncounterMapMarker(int32 EntryPoint);
};

}


