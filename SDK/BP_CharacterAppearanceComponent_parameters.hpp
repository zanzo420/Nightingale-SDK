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

// 0x90 (0x90 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeLimbusOpacityOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeLimbusOpacityOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9328[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9329[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x560 (0x560 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeLimbusOpacity
struct UBP_CharacterAppearanceComponent_C_GetEyeLimbusOpacity_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_932D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OutValue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeLimbusOpacityOverriden_bOverriden;   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_932E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x18(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4D8(0x78)(NoDestructor)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast;       // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast_1;     // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeLimbusOpacityOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeLimbusOpacityOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x194 (0x194 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeLimbusOpacityOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeLimbusOpacityOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9331[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Override;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeLimbusOpacity_OutValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9332[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x28(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xA0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x118(0x78)(NoDestructor)
	float                                        K2Node_SetFieldsInStruct_LimbusOpacity_ImplicitCast; // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeIrisDetailOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeIrisDetailOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9333[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9334[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x560 (0x560 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeIrisDetail
struct UBP_CharacterAppearanceComponent_C_GetEyeIrisDetail_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9335[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OutValue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeIrisDetailOverriden_bOverriden;      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9336[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x18(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4D8(0x78)(NoDestructor)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast;       // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast_1;     // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeIrisDetailOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeIrisDetailOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x194 (0x194 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeIrisDetailOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeIrisDetailOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9338[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Override;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeIrisDetail_OutValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_933E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x28(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xA0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x118(0x78)(NoDestructor)
	float                                        K2Node_SetFieldsInStruct_IrisDetail_ImplicitCast;  // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMakeupAppearance
struct UBP_CharacterAppearanceComponent_C_GetMakeupAppearance_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9351[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     MakeupData;                                        // 0x8(0x58)(Parm, OutParm, NoDestructor)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0x60(0x10)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupRoughness_Roughness;             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupRoughness_Roughness_1;           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha_1;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_1;                     // 0x90(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_2;                     // 0xA0(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_3;                     // 0xB0(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FMakeupAppearance                     K2Node_MakeStruct_MakeupAppearance;                // 0xC0(0x58)(NoDestructor)
	float                                        K2Node_MakeStruct_Color2Roughness_ImplicitCast;    // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_Color1Roughness_ImplicitCast;    // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_GlitterColorAlpha_ImplicitCast;  // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_ColorAlpha_ImplicitCast;         // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetFoundationData
struct UBP_CharacterAppearanceComponent_C_GetFoundationData_Params
{
public:
	struct FFoundationAppearance                 OutFoundationData;                                 // 0x0(0xC)(Parm, OutParm, NoDestructor)
	uint8                                        Pad_9359[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetFoundationRoughness_OutFoundationRoughness; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetFoundationBias_OutFoundationBias;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetFoundationOpacity_OutFoundationOpacity; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFoundationAppearance                 K2Node_MakeStruct_FoundationAppearance;            // 0x28(0xC)(NoDestructor)
	float                                        K2Node_MakeStruct_Roughness_ImplicitCast;          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_Bias_ImplicitCast;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_Opacity_ImplicitCast;            // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsFoundationRoughnessOverriden
struct UBP_CharacterAppearanceComponent_C_IsFoundationRoughnessOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4E0 (0x4E0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetFoundationRoughness
struct UBP_CharacterAppearanceComponent_C_GetFoundationRoughness_Params
{
public:
	double                                       OutFoundationRoughness;                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x8(0x4C0)(None)
	bool                                         CallFunc_IsFoundationRoughnessOverriden_bOverriden; // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_OutFoundationRoughness_ImplicitCast; // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutFoundationRoughness_ImplicitCast_1; // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetFoundationRoughnessOverride
struct UBP_CharacterAppearanceComponent_C_SetFoundationRoughnessOverride_Params
{
public:
	double                                       NewFoundationRoughness;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFoundationAppearance                 CallFunc_GetFoundationData_OutFoundationData;      // 0x10(0xC)(NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetFoundationRoughness_OutFoundationRoughness; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_SetFieldsInStruct_Roughness_ImplicitCast;   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsFoundationBiasOverriden
struct UBP_CharacterAppearanceComponent_C_IsFoundationBiasOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4E0 (0x4E0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetFoundationBias
struct UBP_CharacterAppearanceComponent_C_GetFoundationBias_Params
{
public:
	double                                       OutFoundationBias;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x8(0x4C0)(None)
	bool                                         CallFunc_IsFoundationBiasOverriden_bOverriden;     // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9362[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_OutFoundationBias_ImplicitCast; // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutFoundationBias_ImplicitCast_1; // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetFoundationBiasOverride
struct UBP_CharacterAppearanceComponent_C_SetFoundationBiasOverride_Params
{
public:
	double                                       NewFoundationBias;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFoundationAppearance                 CallFunc_GetFoundationData_OutFoundationData;      // 0x10(0xC)(NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9363[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetFoundationBias_OutFoundationBias;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9364[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_SetFieldsInStruct_Bias_ImplicitCast;        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsFoundationOpacityOverriden
struct UBP_CharacterAppearanceComponent_C_IsFoundationOpacityOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9375[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4E0 (0x4E0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetFoundationOpacity
struct UBP_CharacterAppearanceComponent_C_GetFoundationOpacity_Params
{
public:
	double                                       OutFoundationOpacity;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x8(0x4C0)(None)
	bool                                         CallFunc_IsFoundationOpacityOverriden_bOverriden;  // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9376[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_OutFoundationOpacity_ImplicitCast; // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutFoundationOpacity_ImplicitCast_1; // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetFoundationOpacityOverride
struct UBP_CharacterAppearanceComponent_C_SetFoundationOpacityOverride_Params
{
public:
	double                                       NewFoundationOpacity;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFoundationAppearance                 CallFunc_GetFoundationData_OutFoundationData;      // 0x10(0xC)(NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9377[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetFoundationOpacity_OutFoundationOpacity; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9378[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_SetFieldsInStruct_Opacity_ImplicitCast;     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsLipGlossOverriden
struct UBP_CharacterAppearanceComponent_C_IsLipGlossOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D8 (0x4D8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetLipGloss
struct UBP_CharacterAppearanceComponent_C_GetLipGloss_Params
{
public:
	double                                       OutLipGloss;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x8(0x4C0)(None)
	bool                                         CallFunc_IsLipGlossOverriden_bOverriden;           // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_937A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_OutLipGloss_ImplicitCast;    // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetLipGlossOverride
struct UBP_CharacterAppearanceComponent_C_SetLipGlossOverride_Params
{
public:
	double                                       NewLipGloss;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetLipGloss_OutLipGloss;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_937C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetLipGloss_OutLipGloss_1;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsRednessOverriden
struct UBP_CharacterAppearanceComponent_C_IsRednessOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D8 (0x4D8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetRedness
struct UBP_CharacterAppearanceComponent_C_GetRedness_Params
{
public:
	double                                       OutRedness;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x8(0x4C0)(None)
	bool                                         CallFunc_IsRednessOverriden_bOverriden;            // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_937D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_OutRedness_ImplicitCast;     // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetRednessOverride
struct UBP_CharacterAppearanceComponent_C_SetRednessOverride_Params
{
public:
	double                                       NewRedness;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetRedness_OutRedness;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9383[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetRedness_OutRedness_1;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetDefaultRealmDifficulty
struct UBP_CharacterAppearanceComponent_C_GetDefaultRealmDifficulty_Params
{
public:
	enum class ERealmDifficulty                  RealmDifficulty;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFeatureFlagEnabled_ReturnValue;         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsMottlingOverriden
struct UBP_CharacterAppearanceComponent_C_IsMottlingOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMottling
struct UBP_CharacterAppearanceComponent_C_GetMottling_Params
{
public:
	double                                       OutMottling;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMottlingOverriden_bOverriden;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetMottlingOverride
struct UBP_CharacterAppearanceComponent_C_SetMottlingOverride_Params
{
public:
	double                                       NewMottling;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMottling_OutMottling;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_938E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetMottling_OutMottling_1;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeScaleOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeScaleOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D8 (0x4D8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeScale
struct UBP_CharacterAppearanceComponent_C_GetEyeScale_Params
{
public:
	double                                       OutEyeScale;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeScaleOverriden_bOverriden;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9391[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x10(0x4C0)(None)
	double                                       K2Node_FunctionResult_OutEyeScale_ImplicitCast;    // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeScaleOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeScaleOverride_Params
{
public:
	double                                       NewEyeScale;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeScale_OutEyeScale;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9392[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetEyeScale_OutEyeScale_1;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetMakeupRoughness
struct UBP_CharacterAppearanceComponent_C_ResetMakeupRoughness_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsMakeupRoughnessOverriden
struct UBP_CharacterAppearanceComponent_C_IsMakeupRoughnessOverriden_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsOverriden;                                      // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_1;                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_1;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9396[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     K2Node_Select_Default;                             // 0x10(0x58)(NoDestructor)
	float                                        K2Node_Select_Default_1;                           // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9397[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C0 (0x5C0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMakeupRoughness
struct UBP_CharacterAppearanceComponent_C_GetMakeupRoughness_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93A2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Roughness;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMakeupRoughnessOverriden_bIsOverriden;  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93A3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_real_Variable;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_1;                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_1;                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Temp_byte_Variable_2;                              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_real_Variable_2;                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_3;                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_3;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x30(0x4C0)(None)
	struct FMakeupAppearance                     K2Node_Select_Default;                             // 0x4F0(0x58)(NoDestructor)
	float                                        K2Node_Select_Default_1;                           // 0x548(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     K2Node_Select_Default_2;                           // 0x550(0x58)(NoDestructor)
	float                                        K2Node_Select_Default_3;                           // 0x5A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_Roughness_ImplicitCast;      // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_Roughness_ImplicitCast_1;    // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetMakeupRoughnessOverride
struct UBP_CharacterAppearanceComponent_C_SetMakeupRoughnessOverride_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NewRoughness;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetMakeupRoughness_Roughness;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_1;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetMakeupRoughness_Roughness_1;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     K2Node_Select_Default;                             // 0x40(0x58)(NoDestructor)
	struct FMakeupAppearance                     K2Node_SetFieldsInStruct_StructOut;                // 0x98(0x58)(NoDestructor)
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0xF8(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     K2Node_Select_Default_1;                           // 0x110(0x58)(NoDestructor)
	struct FMakeupAppearance                     K2Node_SetFieldsInStruct_StructOut_1;              // 0x168(0x58)(NoDestructor)
	float                                        K2Node_SetFieldsInStruct_Color2Roughness_ImplicitCast; // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_Color1Roughness_ImplicitCast; // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SendAllMakeupEvents
struct UBP_CharacterAppearanceComponent_C_SendAllMakeupEvents_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93B5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93B7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0x30(0x10)(NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1; // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetMakeupRoughness_Roughness;             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFoundationAppearance                 CallFunc_GetFoundationData_OutFoundationData;      // 0x6C(0xC)(NoDestructor)
	double                                       CallFunc_GetLipGloss_OutLipGloss;                  // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetMakeupType
struct UBP_CharacterAppearanceComponent_C_ResetMakeupType_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93C0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllMakeupData
struct UBP_CharacterAppearanceComponent_C_ResetAllMakeupData_Params
{
public:
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetMakeupAlpha
struct UBP_CharacterAppearanceComponent_C_ResetMakeupAlpha_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetMakeupData
struct UBP_CharacterAppearanceComponent_C_ResetMakeupData_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsMakeupAlphaOverriden
struct UBP_CharacterAppearanceComponent_C_IsMakeupAlphaOverriden_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsOverriden;                                      // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_1;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     K2Node_Select_Default;                             // 0x10(0x58)(NoDestructor)
	float                                        K2Node_Select_Default_1;                           // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsMakeupDataOverriden
struct UBP_CharacterAppearanceComponent_C_IsMakeupDataOverriden_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsOverriden;                                      // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     K2Node_Select_Default;                             // 0x8(0x58)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_Select_Default_1;                           // 0x60(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidRowHandle_IsValid;                 // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5B8 (0x5B8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMakeupAlpha
struct UBP_CharacterAppearanceComponent_C_GetMakeupAlpha_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93E0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ALPHA;                                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMakeupAlphaOverriden_bIsOverriden;      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93E1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_real_Variable;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Temp_byte_Variable_2;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_real_Variable_1;                              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_3;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x28(0x4C0)(None)
	struct FMakeupAppearance                     K2Node_Select_Default;                             // 0x4E8(0x58)(NoDestructor)
	float                                        K2Node_Select_Default_1;                           // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     K2Node_Select_Default_2;                           // 0x548(0x58)(NoDestructor)
	float                                        K2Node_Select_Default_3;                           // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_Alpha_ImplicitCast;          // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_Alpha_ImplicitCast_1;        // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x678 (0x678 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMakeupData
struct UBP_CharacterAppearanceComponent_C_GetMakeupData_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Data;                                              // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DataToReturn;                                      // 0x18(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EMakeupType, struct FDataTableRowHandle> DefaultMasks;                                      // 0x28(0x50)(Edit, BlueprintVisible)
	TMap<enum class EMakeupType, struct FDataTableRowHandle> K2Node_MakeVariable_MakeVariableOutput;            // 0x78(0x50)(None)
	bool                                         CallFunc_IsMakeupDataOverriden_bIsOverriden;       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable;                                // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Temp_byte_Variable_1;                              // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_2;                              // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Temp_byte_Variable_3;                              // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Map_Find_Value;                           // 0xD0(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93F5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0xE8(0x4C0)(None)
	struct FMakeupAppearance                     K2Node_Select_Default;                             // 0x5A8(0x58)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_Select_Default_1;                           // 0x600(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FMakeupAppearance                     K2Node_Select_Default_2;                           // 0x610(0x58)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_Select_Default_3;                           // 0x668(0x10)(NoDestructor, HasGetValueTypeHash)
};

// 0x1C0 (0x1C0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetMakeupAlphaOverride
struct UBP_CharacterAppearanceComponent_C_SetMakeupAlphaOverride_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93FB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NewAlpha;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable;                                // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_1;                              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93FC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     K2Node_Select_Default;                             // 0x28(0x58)(NoDestructor)
	struct FMakeupAppearance                     K2Node_SetFieldsInStruct_StructOut;                // 0x80(0x58)(NoDestructor)
	double                                       CallFunc_GetMakeupRoughness_Roughness;             // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93FD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetMakeupAlpha_Alpha_1;                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0xF0(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     K2Node_Select_Default_1;                           // 0x108(0x58)(NoDestructor)
	struct FMakeupAppearance                     K2Node_SetFieldsInStruct_StructOut_1;              // 0x160(0x58)(NoDestructor)
	float                                        K2Node_SetFieldsInStruct_GlitterColorAlpha_ImplicitCast; // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_ColorAlpha_ImplicitCast;  // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetMakeupDataOverride
struct UBP_CharacterAppearanceComponent_C_SetMakeupDataOverride_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9403[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   NewData;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9404[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	enum class EMakeupType                       Temp_byte_Variable_1;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9405[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9406[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetMakeupRoughness_Roughness;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_1;                     // 0x58(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9407[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     K2Node_Select_Default;                             // 0x70(0x58)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_Select_Default_1;                           // 0xC8(0x10)(NoDestructor, HasGetValueTypeHash)
};

// 0x17 (0x17 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.UpdateAncestry
struct UBP_CharacterAppearanceComponent_C_UpdateAncestry_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetFamilyTree
struct UBP_CharacterAppearanceComponent_C_GetFamilyTree_Params
{
public:
	TArray<struct FDataTableRowHandle>           FullFamilyTree;                                    // 0x0(0x10)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetActiveAncestorIndex
struct UBP_CharacterAppearanceComponent_C_SetActiveAncestorIndex_Params
{
public:
	int32                                        InheritanceIndex;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FamilyTreeIndex;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetFamilyTreeAppearance
struct UBP_CharacterAppearanceComponent_C_SetFamilyTreeAppearance_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_941E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Appearance;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsVoiceSetDataOverriden
struct UBP_CharacterAppearanceComponent_C_IsVoiceSetDataOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x660 (0x660 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetVoiceSetData
struct UBP_CharacterAppearanceComponent_C_GetVoiceSetData_Params
{
public:
	struct FVoiceSetDataReference                Data;                                              // 0x0(0x60)(Parm, OutParm, HasGetValueTypeHash)
	TMap<enum class EBodyType, TSoftObjectPtr<class UVoiceSetDataAsset>> DefaultVoiceSets;                                  // 0x60(0x50)(Edit, BlueprintVisible)
	TMap<enum class EBodyType, TSoftObjectPtr<class UVoiceSetDataAsset>> K2Node_MakeVariable_MakeVariableOutput;            // 0xB0(0x50)(None)
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x100(0x4C0)(None)
	bool                                         CallFunc_IsVoiceSetDataOverriden_bOverriden;       // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9421[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UVoiceSetDataAsset>     CallFunc_Map_Find_Value;                           // 0x5C8(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9423[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetDataReference                CallFunc_MakeFromDataAsset_ReturnValue;            // 0x600(0x60)(HasGetValueTypeHash)
};

// 0x141 (0x141 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetVoiceSetOverride
struct UBP_CharacterAppearanceComponent_C_SetVoiceSetOverride_Params
{
public:
	struct FVoiceSetDataReference                NewData;                                           // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9428[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetDataReference                CallFunc_GetVoiceSetData_Data;                     // 0x70(0x60)(HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942A[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetDataReference                CallFunc_GetVoiceSetData_Data_1;                   // 0xE0(0x60)(HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FVoiceSetDataReference_ReturnValue; // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetHairData
struct UBP_CharacterAppearanceComponent_C_ResetHairData_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetHairData
struct UBP_CharacterAppearanceComponent_C_SetHairData_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942D[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    NewData;                                           // 0x10(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    CallFunc_GetHairData_OutData;                      // 0x90(0x70)(HasGetValueTypeHash)
	struct FHairDataReference                    CallFunc_GetHairData_OutData_1;                    // 0x100(0x70)(HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FHairDataReference_ReturnValue;  // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHairAssetType                    Temp_byte_Variable;                                // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942F[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    K2Node_Select_Default;                             // 0x180(0x70)(HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsHairDataOverriden
struct UBP_CharacterAppearanceComponent_C_IsHairDataOverriden_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHairAssetType                    Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9431[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    K2Node_Select_Default;                             // 0x10(0x70)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x670 (0x670 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetHairData
struct UBP_CharacterAppearanceComponent_C_GetHairData_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9434[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    OutData;                                           // 0x10(0x70)(Parm, OutParm, HasGetValueTypeHash)
	enum class EHairAssetType                    Temp_byte_Variable;                                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHairDataOverriden_bOverriden;           // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHairAssetType                    Temp_byte_Variable_1;                              // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9436[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x88(0x4C0)(None)
	uint8                                        Pad_9437[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    K2Node_Select_Default;                             // 0x550(0x70)(HasGetValueTypeHash)
	struct FHairAppearance                       K2Node_Select_Default_1;                           // 0x5C0(0x38)(None)
	uint8                                        Pad_9438[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    CallFunc_MakeFromDataAsset_ReturnValue;            // 0x600(0x70)(HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetPlayerBackground
struct UBP_CharacterAppearanceComponent_C_GetPlayerBackground_Params
{
public:
	enum class EPlayerBackground                 OutBackground;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetPlayerBackground
struct UBP_CharacterAppearanceComponent_C_SetPlayerBackground_Params
{
public:
	enum class EPlayerBackground                 InputPin;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetAllEyeData
struct UBP_CharacterAppearanceComponent_C_SetAllEyeData_Params
{
public:
	enum class EEyeSide                          EyeSide;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        EyeData;                                           // 0x8(0x78)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetEyeBloodshotAmountOverride_Override_ImplicitCast; // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetEyeVeinsOpacityOverride_Override_ImplicitCast; // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetEyePupilScaleOverride_Override_ImplicitCast; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetEyeIrisScaleOverride_Override_ImplicitCast; // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetEyeIrisDetailOverride_Override_ImplicitCast; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetEyeLimbusOpacityOverride_Override_ImplicitCast; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeLashTipColorOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeLashTipColorOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9443[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    K2Node_Select_Default;                             // 0x8(0x50)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_1;                           // 0x58(0x28)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x580 (0x580 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeLashTipColor
struct UBP_CharacterAppearanceComponent_C_GetEyeLashTipColor_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9448[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   OutValue;                                          // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeLashTipColorOverriden_bOverriden;    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      Temp_byte_Variable_1;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_2;                              // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9449[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x20(0x4C0)(None)
	struct FEyeLashAppearance                    K2Node_Select_Default;                             // 0x4E0(0x50)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_1;                           // 0x530(0x28)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_2;                           // 0x558(0x28)(NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeLashTipColorOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeLashTipColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x278 (0x278 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeLashTipColorOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeLashTipColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9454[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Override;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FEyeLashSettings                      CurrentLashSettings;                               // 0x18(0x28)(Edit, BlueprintVisible, NoDestructor)
	enum class EEyeLashType                      Temp_byte_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9455[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetEyeLashRootColor_OutValue;             // 0x48(0x10)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_1;                              // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_2;                              // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_3;                              // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9456[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    K2Node_Select_Default;                             // 0x68(0x50)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_SetFieldsInStruct_StructOut;                // 0xB8(0x50)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_Select_Default_1;                           // 0x108(0x50)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_Select_Default_2;                           // 0x158(0x50)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_3;                           // 0x1A8(0x28)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_SetFieldsInStruct_StructOut_1;              // 0x1D0(0x50)(NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    CallFunc_GetEyeLashData_OutValue;                  // 0x228(0x50)(NoDestructor)
};

// 0x82 (0x82 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeLashRootColorOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeLashRootColorOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_946E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    K2Node_Select_Default;                             // 0x8(0x50)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_1;                           // 0x58(0x28)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x580 (0x580 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeLashRootColor
struct UBP_CharacterAppearanceComponent_C_GetEyeLashRootColor_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   OutValue;                                          // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeLashRootColorOverriden_bOverriden;   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      Temp_byte_Variable_1;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_2;                              // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x20(0x4C0)(None)
	struct FEyeLashAppearance                    K2Node_Select_Default;                             // 0x4E0(0x50)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_1;                           // 0x530(0x28)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_2;                           // 0x558(0x28)(NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeLashRootColorOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeLashRootColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x278 (0x278 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeLashRootColorOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeLashRootColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Override;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FEyeLashSettings                      CurrentLashSettings;                               // 0x18(0x28)(Edit, BlueprintVisible, NoDestructor)
	enum class EEyeLashType                      Temp_byte_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetEyeLashRootColor_OutValue;             // 0x48(0x10)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_1;                              // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_2;                              // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_3;                              // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    K2Node_Select_Default;                             // 0x68(0x50)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_SetFieldsInStruct_StructOut;                // 0xB8(0x50)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_Select_Default_1;                           // 0x108(0x50)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_Select_Default_2;                           // 0x158(0x50)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_3;                           // 0x1A8(0x28)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_SetFieldsInStruct_StructOut_1;              // 0x1D0(0x50)(NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    CallFunc_GetEyeLashData_OutValue;                  // 0x228(0x50)(NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeLashLengthOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeLashLengthOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    K2Node_Select_Default;                             // 0x8(0x50)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_1;                           // 0x58(0x28)(NoDestructor)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x588 (0x588 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeLashLength
struct UBP_CharacterAppearanceComponent_C_GetEyeLashLength_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OutValue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeLashLengthOverriden_bOverriden;      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      Temp_byte_Variable_1;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_2;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x18(0x4C0)(None)
	struct FEyeLashAppearance                    K2Node_Select_Default;                             // 0x4D8(0x50)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_1;                           // 0x528(0x28)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_2;                           // 0x550(0x28)(NoDestructor)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast;       // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast_1;     // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeLashLengthOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeLashLengthOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x26C (0x26C - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeLashLengthOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeLashLengthOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeLashType                      LashType;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Override;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEyeLashSettings                      CurrentLashSettings;                               // 0x10(0x28)(Edit, BlueprintVisible, NoDestructor)
	enum class EEyeLashType                      Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetEyeLashLength_OutValue;                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_1;                              // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_2;                              // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_3;                              // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    K2Node_Select_Default;                             // 0x58(0x50)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_SetFieldsInStruct_StructOut;                // 0xA8(0x50)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_Select_Default_1;                           // 0xF8(0x50)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_Select_Default_2;                           // 0x148(0x50)(NoDestructor)
	struct FEyeLashSettings                      K2Node_Select_Default_3;                           // 0x198(0x28)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_SetFieldsInStruct_StructOut_1;              // 0x1C0(0x50)(NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    CallFunc_GetEyeLashData_OutValue;                  // 0x218(0x50)(NoDestructor)
	float                                        K2Node_SetFieldsInStruct_Length_ImplicitCast;      // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllEyeLashOverrides
struct UBP_CharacterAppearanceComponent_C_ResetAllEyeLashOverrides_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94CB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1; // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeLashData
struct UBP_CharacterAppearanceComponent_C_GetEyeLashData_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    OutValue;                                          // 0x8(0x50)(Parm, OutParm, NoDestructor)
	struct FDataTableRowHandle                   CallFunc_GetEyeLashTipColor_OutValue;              // 0x58(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeLashTipColor_OutValue_1;            // 0x68(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeLashRootColor_OutValue;             // 0x78(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeLashRootColor_OutValue_1;           // 0x88(0x10)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeLashLength_OutValue;                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeLashLength_OutValue_1;              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEyeLashSettings                      K2Node_MakeStruct_EyeLashSettings;                 // 0xA8(0x28)(NoDestructor)
	struct FEyeLashSettings                      K2Node_MakeStruct_EyeLashSettings_1;               // 0xD0(0x28)(NoDestructor)
	struct FEyeLashAppearance                    K2Node_MakeStruct_EyeLashAppearance;               // 0xF8(0x50)(NoDestructor)
	float                                        K2Node_MakeStruct_Length_ImplicitCast;             // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_Length_ImplicitCast_1;           // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeVeinsOpacityOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeVeinsOpacityOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94D3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x560 (0x560 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeVeinOpacity
struct UBP_CharacterAppearanceComponent_C_GetEyeVeinOpacity_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OutValue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeVeinsOpacityOverriden_bOverriden;    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x18(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4D8(0x78)(NoDestructor)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast;       // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast_1;     // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeVeinsOpacityOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeVeinsOpacityOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x194 (0x194 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeVeinsOpacityOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeVeinsOpacityOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Override;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeVeinOpacity_OutValue;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x28(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xA0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x118(0x78)(NoDestructor)
	float                                        K2Node_SetFieldsInStruct_VeinOpacity_ImplicitCast; // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsAgeValueOverriden
struct UBP_CharacterAppearanceComponent_C_IsAgeValueOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D8 (0x4D8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetAgeValue
struct UBP_CharacterAppearanceComponent_C_GetAgeValue_Params
{
public:
	double                                       OutAgeValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x8(0x4C0)(None)
	bool                                         CallFunc_IsAgeValueOverriden_bOverriden;           // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_OutAgeValue_ImplicitCast;    // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetAgeValueOverride
struct UBP_CharacterAppearanceComponent_C_SetAgeValueOverride_Params
{
public:
	double                                       NewAgeValue;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetAgeValue_OutAgeValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeScleraCornerColorOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeScleraCornerColorOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94E5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeScleraCornerColor
struct UBP_CharacterAppearanceComponent_C_GetEyeScleraCornerColor_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   OutValue;                                          // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeScleraCornerColorOverriden_bOverriden; // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94E7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x20(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4E0(0x78)(NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeScleraCornerColorOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeScleraCornerColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeScleraCornerColorOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeScleraCornerColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Override;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeScleraCornerColor_OutValue;         // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x38(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xB0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x128(0x78)(NoDestructor)
};

// 0x82 (0x82 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeScleraColorOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeScleraColorOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94EB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeScleraColor
struct UBP_CharacterAppearanceComponent_C_GetEyeScleraColor_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   OutValue;                                          // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeScleraColorOverriden_bOverriden;     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x20(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4E0(0x78)(NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeScleraColorOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeScleraColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeScleraColorOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeScleraColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Override;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeScleraColor_OutValue;               // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x38(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xB0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x128(0x78)(NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ClearAncestorData
struct UBP_CharacterAppearanceComponent_C_ClearAncestorData_Params
{
public:
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetAncestorData
struct UBP_CharacterAppearanceComponent_C_GetAncestorData_Params
{
public:
	TArray<struct FAppearanceAncestorData>       OutAncestorData;                                   // 0x0(0x10)(Parm, OutParm)
};

// 0x40 (0x40 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetAncestorData
struct UBP_CharacterAppearanceComponent_C_SetAncestorData_Params
{
public:
	TArray<double>                               AncestorWeights;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_Contribution_ImplicitCast; // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeIrisScaleOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeIrisScaleOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9505[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9506[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x560 (0x560 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeIrisScale
struct UBP_CharacterAppearanceComponent_C_GetEyeIrisScale_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9508[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OutValue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeIrisScaleOverriden_bOverriden;       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_950A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x18(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4D8(0x78)(NoDestructor)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast;       // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast_1;     // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeIrisScaleOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeIrisScaleOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x194 (0x194 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeIrisScaleOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeIrisScaleOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9511[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Override;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeIrisScale_OutValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9514[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x28(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xA0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x118(0x78)(NoDestructor)
	float                                        K2Node_SetFieldsInStruct_IrisScale_ImplicitCast;   // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeOffsetOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeOffsetOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D9 (0x4D9 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeOffset
struct UBP_CharacterAppearanceComponent_C_GetEyeOffset_Params
{
public:
	struct FVector                               EyeOffset;                                         // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x18(0x4C0)(None)
	bool                                         CallFunc_IsEyeOffsetOverriden_bOverriden;          // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeOffsetOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeOffsetOverride_Params
{
public:
	struct FVector                               EyeOffsetOverride;                                 // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetEyeOffset_EyeOffset;                   // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1124 (0x1124 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.CaptureAppearanceData
struct UBP_CharacterAppearanceComponent_C_CaptureAppearanceData_Params
{
public:
	TSoftObjectPtr<class UHairDataAsset>         EyeBrowAsset;                                      // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UHairDataAsset>         FacialHairAsset;                                   // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UHairDataAsset>         HairAsset;                                         // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	TMap<class FName, float>                     BodyMorphs;                                        // 0x78(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9529[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetLipGloss_OutLipGloss;                  // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFoundationAppearance                 CallFunc_GetFoundationData_OutFoundationData;      // 0xE0(0xC)(NoDestructor)
	uint8                                        Pad_952A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMakeupAppearance                     CallFunc_GetMakeupAppearance_MakeupData;           // 0xF0(0x58)(NoDestructor)
	struct FMakeupAppearance                     CallFunc_GetMakeupAppearance_MakeupData_1;         // 0x148(0x58)(NoDestructor)
	struct FMakeupAppearance                     CallFunc_GetMakeupAppearance_MakeupData_2;         // 0x1A0(0x58)(NoDestructor)
	struct FMakeupAppearance                     CallFunc_GetMakeupAppearance_MakeupData_3;         // 0x1F8(0x58)(NoDestructor)
	double                                       CallFunc_GetRedness_OutRedness;                    // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_952B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    CallFunc_GetHairData_OutData;                      // 0x260(0x70)(HasGetValueTypeHash)
	struct FHairDataReference                    CallFunc_GetHairData_OutData_1;                    // 0x2D0(0x70)(HasGetValueTypeHash)
	TSoftObjectPtr<class UHairDataAsset>         CallFunc_GetSoftObjectFromReference_ReturnValue;   // 0x340(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UHairDataAsset>         CallFunc_GetSoftObjectFromReference_ReturnValue_1; // 0x368(0x28)(UObjectWrapper, HasGetValueTypeHash)
	struct FHairDataReference                    CallFunc_GetHairData_OutData_2;                    // 0x390(0x70)(HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x400(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UHairDataAsset>         CallFunc_GetSoftObjectFromReference_ReturnValue_2; // 0x408(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_ObjectIsA_ReturnValue;                    // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_952C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetHairColor_OutHairColor;                // 0x438(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetHairColor_OutHairColor_1;              // 0x448(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FHairAppearance                       K2Node_MakeStruct_HairAppearance;                  // 0x458(0x38)(None)
	struct FHairAppearance                       K2Node_MakeStruct_HairAppearance_1;                // 0x490(0x38)(None)
	TArray<struct FAppearanceMorphTarget>        CallFunc_GetBodyMorphTargets_OutCurrentMorphs;     // 0x4C8(0x10)(ReferenceParm)
	double                                       CallFunc_GetAgeValue_OutAgeValue;                  // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAppearanceMorphTarget                CallFunc_Array_Get_Item;                           // 0x4E0(0xC)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_952D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    CallFunc_GetEyeLashData_OutValue;                  // 0x4F8(0x50)(NoDestructor)
	struct FGuid                                 CallFunc_NewGuid_ReturnValue;                      // 0x548(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEditor_ReturnValue;                     // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_952E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_GuidToString_ReturnValue;            // 0x560(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTeethAppearance                      CallFunc_GetTeethData_OutValue;                    // 0x578(0xC)(NoDestructor)
	uint8                                        Pad_9530[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetHairColor_OutHairColor_2;              // 0x588(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0x598(0x78)(NoDestructor)
	struct FHairAppearance                       K2Node_MakeStruct_HairAppearance_2;                // 0x610(0x38)(None)
	struct FDataTableRowHandle                   CallFunc_GetSkinColor_OutSkinColor;                // 0x648(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x658(0x4C0)(None)
	struct FBodyAppearance                       K2Node_MakeStruct_BodyAppearance;                  // 0xB18(0x138)(None)
	struct FCharacterAppearance_Preset           K2Node_MakeStruct_CharacterAppearance_Preset;      // 0xC50(0x4C0)(None)
	bool                                         CallFunc_DataTable_AddDataRow_ReturnValue;         // 0x1110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9532[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_MakeStruct_DefaultLipGloss_ImplicitCast;    // 0x1114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DefaultRedness_ImplicitCast;     // 0x1118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DefaultEyeScale_ImplicitCast;    // 0x111C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_DefaultAge_ImplicitCast;         // 0x1120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x599 (0x599 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetBodyMorphTargets
struct UBP_CharacterAppearanceComponent_C_GetBodyMorphTargets_Params
{
public:
	TArray<struct FAppearanceMorphTarget>        OutCurrentMorphs;                                  // 0x0(0x10)(Parm, OutParm)
	TMap<class FName, float>                     CombinedMorphTargets;                              // 0x10(0x50)(Edit, BlueprintVisible)
	TArray<struct FAppearanceMorphTarget>        AllMorphs;                                         // 0x60(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9538[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x88(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x9C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value;                           // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9539[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAppearanceMorphTarget                K2Node_MakeStruct_AppearanceMorphTarget;           // 0xB0(0xC)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_953A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_953B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0xC8(0x4C0)(None)
	struct FAppearanceMorphTarget                CallFunc_Array_Get_Item_1;                         // 0x588(0xC)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x594(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ClearAllBodyMorphTargets
struct UBP_CharacterAppearanceComponent_C_ClearAllBodyMorphTargets_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAppearanceMorphTarget>        CallFunc_GetBodyMorphTargets_OutCurrentMorphs;     // 0x8(0x10)(ReferenceParm)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.RemoveBodyMorphTarget_Internal
struct UBP_CharacterAppearanceComponent_C_RemoveBodyMorphTarget_Internal_Params
{
public:
	class FName                                  MorphName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_953F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAppearanceMorphTarget                CallFunc_Array_Get_Item;                           // 0x1C(0xC)(NoDestructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.RemoveBodyMorphTarget
struct UBP_CharacterAppearanceComponent_C_RemoveBodyMorphTarget_Params
{
public:
	class FName                                  MorphName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9542[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAppearanceMorphTarget>        CallFunc_GetBodyMorphTargets_OutCurrentMorphs;     // 0x18(0x10)(ReferenceParm)
};

// 0x4C (0x4C - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetBodyMorphTarget
struct UBP_CharacterAppearanceComponent_C_SetBodyMorphTarget_Params
{
public:
	class FName                                  MorphName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Value;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentIndex;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9545[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9546[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAppearanceMorphTarget>        CallFunc_GetBodyMorphTargets_OutCurrentMorphs;     // 0x28(0x10)(ReferenceParm)
	struct FAppearanceMorphTarget                K2Node_MakeStruct_AppearanceMorphTarget;           // 0x38(0xC)(NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_Value_ImplicitCast;              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllEyeOverrides
struct UBP_CharacterAppearanceComponent_C_ResetAllEyeOverrides_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9549[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsToothMetalIndexOverriden
struct UBP_CharacterAppearanceComponent_C_IsToothMetalIndexOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C8 (0x4C8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetToothMetalIndex
struct UBP_CharacterAppearanceComponent_C_GetToothMetalIndex_Params
{
public:
	int32                                        OutValue;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsToothMetalIndexOverriden_bOverriden;    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x8(0x4C0)(None)
};

// 0x1E (0x1E - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetToothMetalIndexOverride
struct UBP_CharacterAppearanceComponent_C_SetToothMetalIndexOverride_Params
{
public:
	int32                                        Override;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTeethAppearance                      CallFunc_GetTeethData_OutValue;                    // 0x10(0xC)(NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsMetalToothIndexOverride
struct UBP_CharacterAppearanceComponent_C_IsMetalToothIndexOverride_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C8 (0x4C8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMetalToothIndex
struct UBP_CharacterAppearanceComponent_C_GetMetalToothIndex_Params
{
public:
	int32                                        OutValue;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMetalToothIndexOverride_bOverriden;     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9551[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x8(0x4C0)(None)
};

// 0x1E (0x1E - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetMetalToothIndexOverride
struct UBP_CharacterAppearanceComponent_C_SetMetalToothIndexOverride_Params
{
public:
	int32                                        Override;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9552[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTeethAppearance                      CallFunc_GetTeethData_OutValue;                    // 0x10(0xC)(NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetTeethData
struct UBP_CharacterAppearanceComponent_C_GetTeethData_Params
{
public:
	struct FTeethAppearance                      OutValue;                                          // 0x0(0xC)(Parm, OutParm, NoDestructor)
	int32                                        CallFunc_GetToothMetalIndex_OutValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMetalToothIndex_OutValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9559[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetToothDecay_OutValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTeethAppearance                      K2Node_MakeStruct_TeethAppearance;                 // 0x20(0xC)(NoDestructor)
	float                                        K2Node_MakeStruct_ToothDecay_ImplicitCast;         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsToothDecayOverriden
struct UBP_CharacterAppearanceComponent_C_IsToothDecayOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_955D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4E0 (0x4E0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetToothDecay
struct UBP_CharacterAppearanceComponent_C_GetToothDecay_Params
{
public:
	double                                       OutValue;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsToothDecayOverriden_bOverriden;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9560[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x10(0x4C0)(None)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast;       // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast_1;     // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetToothDecayOverride
struct UBP_CharacterAppearanceComponent_C_SetToothDecayOverride_Params
{
public:
	double                                       Override;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTeethAppearance                      CallFunc_GetTeethData_OutValue;                    // 0x10(0xC)(NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9563[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_SetFieldsInStruct_ToothDecay_ImplicitCast;  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9564[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeData
struct UBP_CharacterAppearanceComponent_C_GetEyeData_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_956C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        OutValue;                                          // 0x8(0x78)(Parm, OutParm, NoDestructor)
	struct FDataTableRowHandle                   CallFunc_GetEyeInnerColor_OutValue;                // 0x80(0x10)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeLimbusOpacity_OutValue;             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeIrisDetail_OutValue;                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeVeinOpacity_OutValue;               // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeScleraCornerColor_OutValue;         // 0xA8(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeScleraColor_OutValue;               // 0xB8(0x10)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeIrisScale_OutValue;                 // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyePupilScale_OutValue;                // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeBloodshotAmount_OutValue;           // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeEmissiveColor_OutValue;             // 0xE0(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeOuterColor_OutValue;                // 0xF0(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeMiddleColor_OutValue;               // 0x100(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FEyeAppearance                        K2Node_MakeStruct_EyeAppearance;                   // 0x110(0x78)(NoDestructor)
	float                                        K2Node_MakeStruct_LimbusOpacity_ImplicitCast;      // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_IrisDetail_ImplicitCast;         // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_VeinOpacity_ImplicitCast;        // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_IrisScale_ImplicitCast;          // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_PupilScale_ImplicitCast;         // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_BloodshotAmount_ImplicitCast;    // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyePupilScaleOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyePupilScaleOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9577[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_957A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x560 (0x560 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyePupilScale
struct UBP_CharacterAppearanceComponent_C_GetEyePupilScale_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9580[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OutValue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyePupilScaleOverriden_bOverriden;      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9584[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x18(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4D8(0x78)(NoDestructor)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast;       // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast_1;     // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyePupilScaleOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyePupilScaleOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x194 (0x194 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyePupilScaleOverride
struct UBP_CharacterAppearanceComponent_C_SetEyePupilScaleOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_959D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Override;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyePupilScale_OutValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x28(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xA0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x118(0x78)(NoDestructor)
	float                                        K2Node_SetFieldsInStruct_PupilScale_ImplicitCast;  // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeBloodshotAmountOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeBloodshotAmountOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95AD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x560 (0x560 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeBloodshotAmount
struct UBP_CharacterAppearanceComponent_C_GetEyeBloodshotAmount_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OutValue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeBloodshotAmountOverriden_bOverriden; // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95C2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x18(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4D8(0x78)(NoDestructor)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast;       // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_OutValue_ImplicitCast_1;     // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeBloodshotAmountOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeBloodshotAmountOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x194 (0x194 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeBloodshotAmountOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeBloodshotAmountOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9651[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Override;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeBloodshotAmount_OutValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9652[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x28(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xA0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x118(0x78)(NoDestructor)
	float                                        K2Node_SetFieldsInStruct_BloodshotAmount_ImplicitCast; // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeEmissiveColorOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeEmissiveColorOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9655[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeEmissiveColor
struct UBP_CharacterAppearanceComponent_C_GetEyeEmissiveColor_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9656[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   OutValue;                                          // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeEmissiveColorOverriden_bOverriden;   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9657[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x20(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4E0(0x78)(NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeEmissiveColorOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeEmissiveColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_965A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeEmissiveColorOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeEmissiveColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_965F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Override;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeEmissiveColor_OutValue;             // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9660[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x38(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xB0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x128(0x78)(NoDestructor)
};

// 0x82 (0x82 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeOuterColorOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeOuterColorOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_966A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeOuterColor
struct UBP_CharacterAppearanceComponent_C_GetEyeOuterColor_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_966C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   OutValue;                                          // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeOuterColorOverriden_bOverriden;      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_966D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x20(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4E0(0x78)(NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeOuterColorOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeOuterColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_966F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeOuterColorOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeOuterColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9674[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Override;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeOuterColor_OutValue;                // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9676[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x38(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xB0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x128(0x78)(NoDestructor)
};

// 0x82 (0x82 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeMiddleColorOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeMiddleColorOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_967C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeMiddleColor
struct UBP_CharacterAppearanceComponent_C_GetEyeMiddleColor_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_967D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   OutValue;                                          // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeMiddleColorOverriden_bOverriden;     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_967E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x20(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4E0(0x78)(NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeMiddleColorOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeMiddleColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_967F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeMiddleColorOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeMiddleColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9680[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Override;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeMiddleColor_OutValue;               // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9681[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x38(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xB0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x128(0x78)(NoDestructor)
};

// 0x82 (0x82 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeInnerColorOverriden
struct UBP_CharacterAppearanceComponent_C_IsEyeInnerColorOverriden_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9686[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x8(0x78)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeInnerColor
struct UBP_CharacterAppearanceComponent_C_GetEyeInnerColor_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_968A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   OutValue;                                          // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEyeInnerColorOverriden_bOverriden;      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_968B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x20(0x4C0)(None)
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x4E0(0x78)(NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeInnerColorOverride
struct UBP_CharacterAppearanceComponent_C_ResetEyeInnerColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_968E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeInnerColorOverride
struct UBP_CharacterAppearanceComponent_C_SetEyeInnerColorOverride_Params
{
public:
	enum class EEyeSide                          Side;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9690[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Override;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetEyeInnerColor_OutValue;                // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9692[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        K2Node_Select_Default;                             // 0x38(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0xB0(0x78)(NoDestructor)
	struct FEyeAppearance                        K2Node_SetFieldsInStruct_StructOut;                // 0x128(0x78)(NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetSelectedDifficulty
struct UBP_CharacterAppearanceComponent_C_GetSelectedDifficulty_Params
{
public:
	enum class ERealmDifficulty                  SelectedDifficulty;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetSelectedDifficulty
struct UBP_CharacterAppearanceComponent_C_SetSelectedDifficulty_Params
{
public:
	enum class ERealmDifficulty                  NewDifficulty;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  PreviousDifficulty;                                // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          K2Node_DynamicCast_AsPlayer_State;                 // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetSelectedInitialLoadout
struct UBP_CharacterAppearanceComponent_C_GetSelectedInitialLoadout_Params
{
public:
	struct FPlayerLoadoutDataReference           SelectedInitialLoadout;                            // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetSelectedInitialLoadout
struct UBP_CharacterAppearanceComponent_C_SetSelectedInitialLoadout_Params
{
public:
	struct FPlayerLoadoutDataReference           NewLoadoutHandle;                                  // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetHairColorOverride
struct UBP_CharacterAppearanceComponent_C_ResetHairColorOverride_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetHairColorOverride
struct UBP_CharacterAppearanceComponent_C_SetHairColorOverride_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   HairColorOverride;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetHairColor_OutHairColor;                // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHairAssetType                    Temp_byte_Variable;                                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_Select_Default;                             // 0x38(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetHairColor_OutHairColor_1;              // 0x48(0x10)(NoDestructor, HasGetValueTypeHash)
};

// 0x982 (0x982 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetSelectedArchetypeData
struct UBP_CharacterAppearanceComponent_C_GetSelectedArchetypeData_Params
{
public:
	struct FCharacterAppearance_Preset           OutArchetype;                                      // 0x0(0x4C0)(Parm, OutParm)
	struct FCharacterAppearance_Preset           CallFunc_GetDataTableRowFromName_OutRow;           // 0x4C0(0x4C0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x981(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsHairColorOverriden
struct UBP_CharacterAppearanceComponent_C_IsHairColorOverriden_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverriden;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHairAssetType                    Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96F9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_Select_Default;                             // 0x8(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x528 (0x528 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetHairColor
struct UBP_CharacterAppearanceComponent_C_GetHairColor_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   OutHairColor;                                      // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EHairAssetType                    Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHairColorOverriden_bOverriden;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHairAssetType                    Temp_byte_Variable_1;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96FF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x20(0x4C0)(None)
	struct FDataTableRowHandle                   K2Node_Select_Default;                             // 0x4E0(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FHairAppearance                       K2Node_Select_Default_1;                           // 0x4F0(0x38)(None)
};

// 0x19 (0x19 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetSkinColorOverride
struct UBP_CharacterAppearanceComponent_C_ResetSkinColorOverride_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetSkinColor_OutSkinColor;                // 0x8(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetSkinColorOverride
struct UBP_CharacterAppearanceComponent_C_SetSkinColorOverride_Params
{
public:
	struct FDataTableRowHandle                   SkinColorOverride;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9702[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetSkinColor_OutSkinColor;                // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowHandlesEqual_Equal;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllOverrides
struct UBP_CharacterAppearanceComponent_C_ResetAllOverrides_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  CallFunc_GetDefaultRealmDifficulty_RealmDifficulty; // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsSkinColorOverriden
struct UBP_CharacterAppearanceComponent_C_IsSkinColorOverriden_Params
{
public:
	bool                                         bOverriden;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D1 (0x4D1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetSkinColor
struct UBP_CharacterAppearanceComponent_C_GetSkinColor_Params
{
public:
	struct FDataTableRowHandle                   OutSkinColor;                                      // 0x0(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FCharacterAppearance_Preset           CallFunc_GetSelectedArchetypeData_OutArchetype;    // 0x10(0x4C0)(None)
	bool                                         CallFunc_IsSkinColorOverriden_bOverriden;          // 0x4D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetSelectedArchetype
struct UBP_CharacterAppearanceComponent_C_GetSelectedArchetype_Params
{
public:
	struct FDataTableRowHandle                   SelectedArchetype;                                 // 0x0(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetCharacterAppearance
struct UBP_CharacterAppearanceComponent_C_SetCharacterAppearance_Params
{
public:
	struct FDataTableRowHandle                   AppearancePresetRow;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.Server_SetRealmDifficulty
struct UBP_CharacterAppearanceComponent_C_Server_SetRealmDifficulty_Params
{
public:
	enum class ERealmDifficulty                  NewDifficulty;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3E0 (0x3E0 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ExecuteUbergraph_BP_CharacterAppearanceComponent
struct UBP_CharacterAppearanceComponent_C_ExecuteUbergraph_BP_CharacterAppearanceComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9714[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAppearanceMorphTarget>        CallFunc_GetBodyMorphTargets_OutCurrentMorphs;     // 0x8(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   CallFunc_GetSkinColor_OutSkinColor;                // 0x18(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetHairColor_OutHairColor;                // 0x28(0x10)(NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  K2Node_CustomEvent_NewDifficulty;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9715[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue;                      // 0x40(0x78)(NoDestructor)
	struct FEyeAppearance                        CallFunc_GetEyeData_OutValue_1;                    // 0xB8(0x78)(NoDestructor)
	struct FTeethAppearance                      CallFunc_GetTeethData_OutValue;                    // 0x130(0xC)(NoDestructor)
	uint8                                        Pad_9716[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetEyeOffset_EyeOffset;                   // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetAgeValue_OutAgeValue;                  // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEyeLashAppearance                    CallFunc_GetEyeLashData_OutValue;                  // 0x160(0x50)(NoDestructor)
	struct FEyeLashAppearance                    CallFunc_GetEyeLashData_OutValue_1;                // 0x1B0(0x50)(NoDestructor)
	struct FHairDataReference                    CallFunc_GetHairData_OutData;                      // 0x200(0x70)(HasGetValueTypeHash)
	struct FHairDataReference                    CallFunc_GetHairData_OutData_1;                    // 0x270(0x70)(HasGetValueTypeHash)
	struct FHairDataReference                    CallFunc_GetHairData_OutData_2;                    // 0x2E0(0x70)(HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetHairColor_OutHairColor_1;              // 0x350(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetHairColor_OutHairColor_2;              // 0x360(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FVoiceSetDataReference                CallFunc_GetVoiceSetData_Data;                     // 0x370(0x60)(HasGetValueTypeHash)
	double                                       CallFunc_GetEyeScale_OutEyeScale;                  // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetRedness_OutRedness;                    // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.FoundationChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_FoundationChanged__DelegateSignature_Params
{
public:
	struct FFoundationAppearance                 FoundationData;                                    // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.LipGlossChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_LipGlossChanged__DelegateSignature_Params
{
public:
	double                                       LipGloss;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.RednessChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_RednessChanged__DelegateSignature_Params
{
public:
	double                                       Redness;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.MottlingChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_MottlingChanged__DelegateSignature_Params
{
public:
	double                                       Mottling;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.EyeScaledChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_EyeScaledChanged__DelegateSignature_Params
{
public:
	double                                       EyeScale;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.FamilyTreeChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_FamilyTreeChanged__DelegateSignature_Params
{
public:
	TArray<struct FDataTableRowHandle>           FamilyTree;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.MakeupDataChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_MakeupDataChanged__DelegateSignature_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMakeupOption                     Option;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_971D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   NewData;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	double                                       NewAlpha;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewRoughness;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.VoiceSetDataChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_VoiceSetDataChanged__DelegateSignature_Params
{
public:
	struct FVoiceSetDataReference                Data;                                              // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.HairDataChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_HairDataChanged__DelegateSignature_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9722[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    NewData;                                           // 0x10(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.EyeLashChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_EyeLashChanged__DelegateSignature_Params
{
public:
	enum class EEyeSide                          EyeSide;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9725[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    EyeLashData;                                       // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.AgeValueChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_AgeValueChanged__DelegateSignature_Params
{
public:
	double                                       NewAgeValue;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.AncestorDataChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_AncestorDataChanged__DelegateSignature_Params
{
public:
	TArray<struct FAppearanceAncestorData>       AncestorData;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.EyeOffsetChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_EyeOffsetChanged__DelegateSignature_Params
{
public:
	struct FVector                               EyeOffset;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.BodyMorphTargetsChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_BodyMorphTargetsChanged__DelegateSignature_Params
{
public:
	TArray<struct FAppearanceMorphTarget>        MorphTargets;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC (0xC - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.TeethChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_TeethChanged__DelegateSignature_Params
{
public:
	struct FTeethAppearance                      TeethData;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.EyeChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_EyeChanged__DelegateSignature_Params
{
public:
	enum class EEyeSide                          EyeSide;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_972D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeAppearance                        EyeData;                                           // 0x8(0x78)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SelectedLoadoutChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_SelectedLoadoutChanged__DelegateSignature_Params
{
public:
	struct FPlayerLoadoutDataReference           NewLoadout;                                        // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EPlayerBackground                 PlayerBackground;                                  // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.HairColorChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_HairColorChanged__DelegateSignature_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9737[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   HairColor;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SkinColorChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_SkinColorChanged__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   SkinColor;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SelectedArchetypeChanged__DelegateSignature
struct UBP_CharacterAppearanceComponent_C_SelectedArchetypeChanged__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   NewData;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


