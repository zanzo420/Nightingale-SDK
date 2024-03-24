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

// 0x14 (0x14 - 0x0)
// Function BP_EncounterMusic.BP_EncounterMusic_C.HandleDefenseBeamHPUpdated
struct ABP_EncounterMusic_C_HandleDefenseBeamHPUpdated_Params
{
public:
	double                                       NormalizedHealth;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast; // 0x10(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function BP_EncounterMusic.BP_EncounterMusic_C.SubscribeToDefenseBeamHPUpdates
struct ABP_EncounterMusic_C_SubscribeToDefenseBeamHPUpdates_Params
{
public:
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x0(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5600[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterMarkupDataAsset_Defense*     K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense; // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5601[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5602[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_StructurePartProxy_C*              K2Node_DynamicCast_AsBP_Structure_Part_Proxy;      // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5603[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXStructure*                         CallFunc_GetStructure_Structure;                   // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_EncounterTrigger_Defense_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BP_EncounterMusic.BP_EncounterMusic_C.ServerHandleEncounterCombatEnded
struct ABP_EncounterMusic_C_ServerHandleEncounterCombatEnded_Params
{
public:
	class AEncounterBase*                        Encounter;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCombatEncounter_ReturnValue;            // 0x8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCustomIntensityUpdateLogic_ReturnValue; // 0x9(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_EncounterMusic.BP_EncounterMusic_C.ServerHandleEncounterCombatStarted
struct ABP_EncounterMusic_C_ServerHandleEncounterCombatStarted_Params
{
public:
	class AEncounterBase*                        Encounter;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCombatEncounter_ReturnValue;            // 0x8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCustomIntensityUpdateLogic_ReturnValue; // 0x9(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function BP_EncounterMusic.BP_EncounterMusic_C.TrySetEncounterIntensityByWaveNumbers
struct ABP_EncounterMusic_C_TrySetEncounterIntensityByWaveNumbers_Params
{
public:
	bool                                         CallFunc_HasCustomIntensityUpdateLogic_ReturnValue; // 0x0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5604[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast; // 0x28(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_EncounterMusic.BP_EncounterMusic_C.HandleWaveCreatureKilled
struct ABP_EncounterMusic_C_HandleWaveCreatureKilled_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_EncounterMusic.BP_EncounterMusic_C.HandleWaveCreatureSpawned
struct ABP_EncounterMusic_C_HandleWaveCreatureSpawned_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_EncounterMusic.BP_EncounterMusic_C.PostInitialization
struct ABP_EncounterMusic_C_PostInitialization_Params
{
public:
	class UBP_EncounterComponent_Spawners_C*     Spawner;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5605[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5606[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_EncounterComponent_Spawners_C*     CallFunc_GetComponentByClass_ReturnValue;          // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


