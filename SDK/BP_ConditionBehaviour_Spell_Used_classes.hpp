#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0xBC - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_Spell_Used.BP_ConditionBehaviour_Spell_Used_C
class UBP_ConditionBehaviour_Spell_Used_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Current_Count;                                     // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3565[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTechniqueDataAsset>    SpellTechnique;                                    // 0x90(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Count_Threshold;                                   // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Spell_Used_C* GetDefaultObj();

	void GetDebugText(class FText* Description, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void OnSpellCasted(TSoftObjectPtr<class UTechniqueDataAsset> SpellCastedTechnique, class UFishDataAsset* FishAsset, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void OnConditionRemoved();
	void SetupCondition();
	void InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData);
	void ExecuteUbergraph_BP_ConditionBehaviour_Spell_Used(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, bool CallFunc_IsValid_ReturnValue_1);
};

}

