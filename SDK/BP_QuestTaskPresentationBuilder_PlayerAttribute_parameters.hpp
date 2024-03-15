#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x158 - 0x0)
// Function BP_QuestTaskPresentationBuilder_PlayerAttribute.BP_QuestTaskPresentationBuilder_PlayerAttribute_C.GetConditionTextAndIcon
struct UBP_QuestTaskPresentationBuilder_PlayerAttribute_C_GetConditionTextAndIcon_Params
{
public:
	class UConditionPlayerAttribute*             PlayerAttributeCondition;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Result;                                            // 0x8(0x18)(Parm, OutParm)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x20(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
	class UAttributeUIDataRegistry*              DataRegistry;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttributeUIData              CallFunc_TryGetAttributeUIData_OutData;            // 0x50(0xC0)(None)
	enum class EGetResult                        CallFunc_TryGetAttributeUIData_OutBranches;        // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E21[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDebugStringFromGameplayAttribute_ReturnValue; // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_FormatTaskName_ReturnValue;               // 0x140(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function BP_QuestTaskPresentationBuilder_PlayerAttribute.BP_QuestTaskPresentationBuilder_PlayerAttribute_C.GetTargetValue
struct UBP_QuestTaskPresentationBuilder_PlayerAttribute_C_GetTargetValue_Params
{
public:
	class UConditionPlayerAttribute*             PlayerAttributeCondition;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAttributeThresholdType           ThresholdType;                                     // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E23[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue_1;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E24[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FFloor_A_ImplicitCast;                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x138 (0x138 - 0x0)
// Function BP_QuestTaskPresentationBuilder_PlayerAttribute.BP_QuestTaskPresentationBuilder_PlayerAttribute_C.MakePlayerAttributeConditionData
struct UBP_QuestTaskPresentationBuilder_PlayerAttribute_C_MakePlayerAttributeConditionData_Params
{
public:
	class UConditionPlayerAttribute*             PlayerAttributeCondition;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   QuestTaskConditionPresentationData;                // 0x10(0x68)(Parm, OutParm)
	int32                                        TargetValue;                                       // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAttributeUIDataRegistry*              DataRegistry;                                      // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTargetValue_TargetValue;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetConditionTextAndIcon_Result;           // 0x90(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetConditionTextAndIcon_Icon;             // 0xA8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	struct FQuestTaskConditionPresentationData   K2Node_MakeStruct_QuestTaskConditionPresentationData; // 0xD0(0x68)(None)
};

// 0xF8 (0xF8 - 0x0)
// Function BP_QuestTaskPresentationBuilder_PlayerAttribute.BP_QuestTaskPresentationBuilder_PlayerAttribute_C.MakeTaskConditionPresentationData
struct UBP_QuestTaskPresentationBuilder_PlayerAttribute_C_MakeTaskConditionPresentationData_Params
{
public:
	class UConditionBehaviour*                   Condition;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasCreated;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E28[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   ConditionPresentationData;                         // 0x10(0x68)(Parm, OutParm)
	class UAttributeUIDataRegistry*              DataRegistry;                                      // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UConditionPlayerAttribute*             K2Node_DynamicCast_AsCondition_Player_Attribute;   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakePlayerAttributeConditionData_Success; // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E29[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   CallFunc_MakePlayerAttributeConditionData_QuestTaskConditionPresentationData; // 0x90(0x68)(None)
};

}
}


