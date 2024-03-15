#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_UI_TextFormatting.BPFL_UI_TextFormatting_C
class UBPFL_UI_TextFormatting_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_UI_TextFormatting_C* GetDefaultObj();

	void UI_Text_Parse_CauseOfDeath(const struct FCachedActorData& DeathSource, class UObject* __WorldContext, class FText* CauseOfDeath, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Contains_ReturnValue, class FText CallFunc_GetCreatureName_CreatureName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Contains_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Format_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, class FText CallFunc_Format_ReturnValue_4, class FText CallFunc_Format_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_7, class FText CallFunc_Format_ReturnValue_6, class FText CallFunc_Format_ReturnValue_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_8, class FText CallFunc_Format_ReturnValue_8);
	class FText UI_Text_TruncationCheck(class FText& InText, int32 Total_Max_Length, class UObject* __WorldContext, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Left_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
};

}


