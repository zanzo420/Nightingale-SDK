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

// 0x378 (0x378 - 0x0)
// Function MMC_DodgeCost.MMC_DodgeCost_C.BaseCost
struct UMMC_DodgeCost_C_BaseCost_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       Cost;                                              // 0x2B8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       Temp_object_Variable;                              // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_GetEffectContext_ReturnValue;             // 0x2C8(0x18)(None)
	class AActor*                                CallFunc_EffectContextGetInstigatorActor_ReturnValue; // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface;       // 0x2E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A44C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x2FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       CallFunc_GetEquippedItem_ReturnValue;              // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A44E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAttribute                    Temp_struct_Variable;                              // 0x310(0x38)(ConstParm, HasGetValueTypeHash)
	float                                        CallFunc_CalculateItemAttributeValue_ReturnValue;  // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A44F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               K2Node_MakeArray_Array;                            // 0x350(0x10)(ReferenceParm)
	double                                       CallFunc_StandardBonusFormulaInverted_Total;       // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_MakeArray__1__ImplicitCast;                 // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_MakeArray__0__ImplicitCast;                 // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2DC (0x2DC - 0x0)
// Function MMC_DodgeCost.MMC_DodgeCost_C.NWXCalculateBaseMagnitude
struct UMMC_DodgeCost_C_NWXCalculateBaseMagnitude_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FTagValueContainer                    MMCIntermediateOutputs;                            // 0x2B8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                        ReturnValue;                                       // 0x2C8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A450[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BaseCost_Cost;                            // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


