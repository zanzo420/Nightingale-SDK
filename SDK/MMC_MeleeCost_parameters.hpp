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

// 0x3D8 (0x3D8 - 0x0)
// Function MMC_MeleeCost.MMC_MeleeCost_C.BaseCost
struct UMMC_MeleeCost_C_BaseCost_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       Cost;                                              // 0x2B8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                InstigatorActor;                                   // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x2C8(0x18)(Edit, BlueprintVisible)
	struct FGameplayAttribute                    Temp_struct_Variable;                              // 0x2E0(0x38)(ConstParm, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_GetEffectContext_ReturnValue;             // 0x318(0x18)(None)
	class AEquippableItem*                       Temp_object_Variable;                              // 0x330(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                    Temp_struct_Variable_1;                            // 0x338(0x38)(ConstParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A743[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_CalculateItemAttributeValue_ReturnValue;  // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               K2Node_MakeArray_Array;                            // 0x378(0x10)(ReferenceParm)
	float                                        CallFunc_CalculateItemAttributeValue_ReturnValue_1; // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A744[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_StandardBonusFormulaInverted_Total;       // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_EffectContextGetInstigatorActor_ReturnValue; // 0x398(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A745[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface;       // 0x3A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A746[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetEquippedItem_ReturnValue;              // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_MakeArray__0__ImplicitCast;                 // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_StandardBonusFormulaInverted_Base_ImplicitCast; // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E4 (0x2E4 - 0x0)
// Function MMC_MeleeCost.MMC_MeleeCost_C.NWXCalculateBaseMagnitude
struct UMMC_MeleeCost_C_NWXCalculateBaseMagnitude_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FTagValueContainer                    MMCIntermediateOutputs;                            // 0x2B8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                        ReturnValue;                                       // 0x2C8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A747[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BaseCost_Cost;                            // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


