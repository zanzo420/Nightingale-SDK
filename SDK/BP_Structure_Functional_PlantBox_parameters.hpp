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

// 0x9 (0x9 - 0x0)
// Function BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C.UpdateCraftingDisciplines
struct ABP_Structure_Functional_PlantBox_C_UpdateCraftingDisciplines_Params
{
public:
	class UEnvironmentalInfluenceDataDisciplines* EnvironmentalInfluenceData;                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         AddDisciplines;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C.UpdateCraftingModifiers
struct ABP_Structure_Functional_PlantBox_C_UpdateCraftingModifiers_Params
{
public:
	class UEnvironmentalInfluenceDataCraftingModifiers* EnvironmentalInfluenceData;                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         AddModifier;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C.UpdateGrowthTime
struct ABP_Structure_Functional_PlantBox_C_UpdateGrowthTime_Params
{
public:
	class UEnvironmentalInfluenceDataGrowthRate* EnvironmentalInfluenceData;                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         AddModifier;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C.ExecuteUbergraph_BP_Structure_Functional_PlantBox
struct ABP_Structure_Functional_PlantBox_C_ExecuteUbergraph_BP_Structure_Functional_PlantBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A73B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvironmentalInfluenceDataGrowthRate* K2Node_Event_EnvironmentalInfluenceData;           // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_AddModifier;                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A73D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvironmentalInfluenceDataDisciplines* K2Node_Event_EnvironmentalInfluenceData_2;         // 0x18(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_AddDisciplines;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A73F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvironmentalInfluenceDataCraftingModifiers* K2Node_Event_EnvironmentalInfluenceData_1;         // 0x28(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_AddModifier_1;                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


