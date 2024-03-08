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

// 0xC1 (0xC1 - 0x0)
// Function BP_StructureTraitEffect_CreatureSuppression.BP_StructureTraitEffect_CreatureSuppression_C.OnTraitRemoved
struct UBP_StructureTraitEffect_CreatureSuppression_C_OnTraitRemoved_Params
{
public:
	class AActor*                                OwningActor;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStructureTrait                       Trait;                                             // 0x8(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class ANWXCreatureManagerBase*               LCreatureManager;                                  // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStructureActorInPlacement_ReturnValue;  // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_672D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface; // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureType_IsValid;                 // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_672E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureTypeData*                    CallFunc_GetStructureType_OutStructureType;        // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCreatureSuppressionRadius_ReturnValue; // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_672F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSuppressionTraitChangedProperties    CallFunc_MakeSuppressionTraitChangedProperties_ReturnValue; // 0xA8(0x10)(NoDestructor)
	class ANWXCreatureManagerBase*               CallFunc_GetCreatureManager_ReturnValue;           // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function BP_StructureTraitEffect_CreatureSuppression.BP_StructureTraitEffect_CreatureSuppression_C.OnTraitAdded
struct UBP_StructureTraitEffect_CreatureSuppression_C_OnTraitAdded_Params
{
public:
	class AActor*                                OwningActor;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStructureTrait                       Trait;                                             // 0x8(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class ANWXCreatureManagerBase*               LCreatureManager;                                  // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6731[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXCreatureManagerBase*               CallFunc_GetCreatureManager_ReturnValue;           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface; // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureType_IsValid;                 // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6732[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureTypeData*                    CallFunc_GetStructureType_OutStructureType;        // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStructureActorInPlacement_ReturnValue;  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6733[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCreatureSuppressionRadius_ReturnValue; // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSuppressionTraitChangedProperties    CallFunc_MakeSuppressionTraitChangedProperties_ReturnValue; // 0xB0(0x10)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


