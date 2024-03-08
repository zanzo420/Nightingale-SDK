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

// 0x110 (0x110 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetRevolverAmmoItemReference
struct UBPFL_Test_Helpers_C_GetRevolverAmmoItemReference_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_780E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(Parm, OutParm, HasGetValueTypeHash)
	struct FItemDataReference                    AmmoReference;                                     // 0x90(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.Get Revolver Item Reference
struct UBPFL_Test_Helpers_C_Get_Revolver_Item_Reference_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_780F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(Parm, OutParm, HasGetValueTypeHash)
	struct FItemDataReference                    Revolver_Reference;                                // 0x90(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetGliderItemReference
struct UBPFL_Test_Helpers_C_GetGliderItemReference_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7810[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(Parm, OutParm, HasGetValueTypeHash)
	struct FItemDataReference                    GliderReference;                                   // 0x90(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.RegrowAllResources
struct UBPFL_Test_Helpers_C_RegrowAllResources_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.Reset All Resources
struct UBPFL_Test_Helpers_C_Reset_All_Resources_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ResourceNode_IIM_C*>        CallFunc_GetAllActorsOfClass_OutActors;            // 0x8(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ResourceNode_IIM_C*                CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7811[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.SpawnDefaultPossessedCharacterInDefaultLocation
struct UBPFL_Test_Helpers_C_SpawnDefaultPossessedCharacterInDefaultLocation_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       SpawnedCharacter;                                  // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           SpawnedController;                                 // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7812[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorMessage;                                      // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Error;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetDefaultSpawnTransform_DefaultTransform; // 0x40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDefaultSpawnTransform_Success;         // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7813[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDefaultSpawnTransform_ErrorMessage;    // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_Character_C*                       CallFunc_SpawnDefaultPossessedCharacter_SpawnedCharacter; // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_SpawnDefaultPossessedCharacter_SpawnedController; // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnDefaultPossessedCharacter_bSuccess;  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7814[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SpawnDefaultPossessedCharacter_ErrorMessage; // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GrantRequirementsToPlayer
struct UBPFL_Test_Helpers_C_GrantRequirementsToPlayer_Params
{
public:
	class ABP_Character_C*                       Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStructureResourceRequirements> Requirements;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7815[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7816[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureResourceRequirements        CallFunc_Array_Get_Item;                           // 0x48(0x48)(ContainsInstancedReference)
	int32                                        CallFunc_GetQuantityRemaining_ReturnValue;         // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7817[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    CallFunc_SLOW_FindItemMeetingRequirements_ItemName; // 0xA0(0x80)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7818[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GrantItemToPlayer_Success;                // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7819[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GrantItemToPlayer_Message;                // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetWoodItemReference
struct UBPFL_Test_Helpers_C_GetWoodItemReference_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_781A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(Parm, OutParm, HasGetValueTypeHash)
	struct FItemDataReference                    WoodReference;                                     // 0x90(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetRifleAmmoItemReference
struct UBPFL_Test_Helpers_C_GetRifleAmmoItemReference_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_781B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(Parm, OutParm, HasGetValueTypeHash)
	struct FItemDataReference                    AmmoReference;                                     // 0x90(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetUnarmedItemReference
struct UBPFL_Test_Helpers_C_GetUnarmedItemReference_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_781C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(Parm, OutParm, HasGetValueTypeHash)
	struct FItemDataReference                    UnarmedReference;                                  // 0x90(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.Get Rifle Item Reference
struct UBPFL_Test_Helpers_C_Get_Rifle_Item_Reference_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_781D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(Parm, OutParm, HasGetValueTypeHash)
	struct FItemDataReference                    RifleReference;                                    // 0x90(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0xCD (0xCD - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.FindAllPiecesOfType
struct UBPFL_Test_Helpers_C_FindAllPiecesOfType_Params
{
public:
	class UClass*                                PieceClass;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       OutPieces;                                         // 0x10(0x10)(Parm, OutParm)
	TArray<class UBP_StructureCompositePiece_C*> Pieces;                                            // 0x20(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_781E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsActor;                   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_781F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAllActorsOfClass_OutActors;            // 0x50(0x10)(ReferenceParm)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7820[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Structure_Composite_C*>     CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x68(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7821[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Composite_C*             CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStructureCompositeComponent*          CallFunc_GetCompositeComponent_ReturnValue;        // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7822[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureCompositePiece*              CallFunc_GetCompositePiece_ReturnValue;            // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7823[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_StructureCompositePiece_C*         K2Node_DynamicCast_AsBP_Structure_Composite_Piece; // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7824[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPieceCount_ReturnValue;                // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_1;             // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7825[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x469 (0x469 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.EquipGear
struct UBPFL_Test_Helpers_C_EquipGear_Params
{
public:
	class ABP_Character_C*                       PlayerCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7826[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemToEquip;                                       // 0x10(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x98(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7827[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class ABP_EquippableItemBase_C*              EquippedItem;                                      // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                Error;                                             // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UInventoryComponentBase*               Inventory;                                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7828[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponentBase*               CallFunc_GetComponentByClass_ReturnValue;          // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GrantItemToPlayer_Success;                // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7829[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GrantItemToPlayer_Message;                // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       CallFunc_GetBackpack_Container;                    // 0x140(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackpack_ReturnValue;                  // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_782A[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_FindFirstItemByItemId_Entry;              // 0x160(0x2F0)(None)
	bool                                         CallFunc_FindFirstItemByItemId_ReturnValue;        // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EquipNonQuickbarItem_Success;             // 0x451(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_782B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_EquipNonQuickbarItem_EquippedItem;        // 0x458(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EquippableItemBase_C*              K2Node_DynamicCast_AsBP_Equippable_Item_Base;      // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.ReleaseBPControllerAbility
struct UBPFL_Test_Helpers_C_ReleaseBPControllerAbility_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionTypes                 ActionType;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_782C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_782D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorMessage;                                      // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                K2Node_DynamicCast_AsBP_Player_Controller;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.Force Add Default Containers
struct UBPFL_Test_Helpers_C_Force_Add_Default_Containers_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetAxePickItemReference
struct UBPFL_Test_Helpers_C_GetAxePickItemReference_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_782E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(Parm, OutParm, HasGetValueTypeHash)
	struct FItemDataReference                    AxepickReference;                                  // 0x90(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x46 (0x46 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.FindFirstTargetActorOfClass
struct UBPFL_Test_Helpers_C_FindFirstTargetActorOfClass_Params
{
public:
	class UClass*                                TargetActorClass;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABPTA_TargetingActorLogic_C*           TargetActor;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ABPTA_TargetingActorLogic_C*>   TargetActors;                                      // 0x18(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABPTA_TargetingActorLogic_C*>   CallFunc_GetAllActorsOfClass_OutActors;            // 0x28(0x10)(ReferenceParm)
	class ABPTA_TargetingActorLogic_C*           CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.Get Build Hammer Reference
struct UBPFL_Test_Helpers_C_Get_Build_Hammer_Reference_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_782F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(Parm, OutParm, HasGetValueTypeHash)
	struct FItemDataReference                    BuildHammerReference;                              // 0x90(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.MoveCharacterForward
struct UBPFL_Test_Helpers_C_MoveCharacterForward_Params
{
public:
	class ABP_Character_C*                       Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.ExecuteBPControllerAbility
struct UBPFL_Test_Helpers_C_ExecuteBPControllerAbility_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionTypes                 ActionType;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7830[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7831[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorMessage;                                      // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                K2Node_DynamicCast_AsBP_Player_Controller;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.IsValidUniqueId
struct UBPFL_Test_Helpers_C_IsValidUniqueId_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsValid;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.InitializeRandomPersistentUniqueId
struct UBPFL_Test_Helpers_C_InitializeRandomPersistentUniqueId_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7832[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7833[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerState*                       K2Node_DynamicCast_AsNWXPlayer_State;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7834[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPersistentUniqueId_ReturnValue;        // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_NewGuid_ReturnValue;                      // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidUniqueId_IsValid;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7835[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_GuidToString_ReturnValue;            // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.SetIsDaytime
struct UBPFL_Test_Helpers_C_SetIsDaytime_Params
{
public:
	class ABP_CreatureManager_C*                 CreatureManager;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDayTime;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7836[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x171 (0x171 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.IsItemEquipped
struct UBPFL_Test_Helpers_C_IsItemEquipped_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ItemId;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7837[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x20(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEquipped;                                        // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7838[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class AEquippableItem*                       Temp_object_Variable;                              // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface;       // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7839[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetEquippedItem_ReturnValue;              // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FItemDataReference                    CallFunc_GetItemID_OutItemReference;               // 0xF0(0x80)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FItemDataReference_ReturnValue; // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3E1 (0x3E1 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.RemoveAllItemsFromPlayer
struct UBPFL_Test_Helpers_C_RemoveAllItemsFromPlayer_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_783A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       Backpack;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_783B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_783C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GetAllItems_Entries;                      // 0x98(0x10)(ReferenceParm)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0xB0(0x2F0)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveItem_ReturnValue;                   // 0x3A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_783D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponentBase*               CallFunc_GetComponentByClass_ReturnValue;          // 0x3A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_783E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider;      // 0x3B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_783F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetDefaultContainer_ReturnValue;          // 0x3D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3F9 (0x3F9 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GrantItemToPlayer
struct UBPFL_Test_Helpers_C_GrantItemToPlayer_Params
{
public:
	class APawn*                                 Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ItemId;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7840[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x20(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        ItemCount;                                         // 0xA0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7841[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7842[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0xB8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7843[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UItemInstanceData*>             Temp_object_Variable;                              // 0xD0(0x10)(ConstParm, ReferenceParm)
	struct FInventoryEntry                       CallFunc_CreateNewItemEntry_NewEntry;              // 0xE0(0x2F0)(None)
	enum class EGetResult                        CallFunc_CreateNewItemEntry_OutBranch;             // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClaimItem_bSuccess;                       // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7844[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         CallFunc_ClaimItem_ClaimedInstances;               // 0x3D8(0x10)(ReferenceParm)
	TArray<struct FInventoryEntry>               CallFunc_ClaimItem_UnclaimedItems;                 // 0x3E8(0x10)(ReferenceParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetNewItemInstances
struct UBPFL_Test_Helpers_C_GetNewItemInstances_Params
{
public:
	int32                                        NumberOfInstances;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_784B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InstanceWithQuantity>       ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm)
	TArray<struct FS_InstanceWithQuantity>       NewInstances;                                      // 0x20(0x10)(Edit, BlueprintVisible)
	struct FGuid                                 CallFunc_NewUniqueInstanceId_InstanceId;           // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InstanceWithQuantity               K2Node_MakeStruct_S_InstanceWithQuantity;          // 0x40(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_784E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x762 (0x762 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.EquipItem
struct UBPFL_Test_Helpers_C_EquipItem_Params
{
public:
	class APawn*                                 Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7853[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemReference;                                     // 0x10(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EquippableItemBase_C*              EquippedItem;                                      // 0x98(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7854[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorMessage;                                      // 0xA8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class AController*                           Controller;                                        // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       ItemEntry;                                         // 0xC0(0x2F0)(Edit, BlueprintVisible)
	TScriptInterface<class IItemContainer>       Backpack;                                          // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_Character_C*                       BP_Character;                                      // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       Temp_object_Variable;                              // 0x3C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7855[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EquippableItemBase_C*              K2Node_DynamicCast_AsBP_Equippable_Item_Base;      // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7856[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UItemInstanceData*>             Temp_object_Variable_1;                            // 0x3E8(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_GetItemEquipmentSlotTag_bSuccess;         // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7857[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag; // 0x3FC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClaimItem_bSuccess;                       // 0x404(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7858[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         CallFunc_ClaimItem_ClaimedInstances;               // 0x408(0x10)(ReferenceParm)
	TArray<struct FInventoryEntry>               CallFunc_ClaimItem_UnclaimedItems;                 // 0x418(0x10)(ReferenceParm)
	TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface;       // 0x428(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7859[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetItemInLoadoutSlot_ReturnValue;         // 0x440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_785A[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_CreateNewItemEntry_NewEntry;              // 0x460(0x2F0)(None)
	enum class EGetResult                        CallFunc_CreateNewItemEntry_OutBranch;             // 0x750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_785B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       K2Node_DynamicCast_AsBP_Character;                 // 0x758(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x761(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.SpawnDefaultPossessedCharacter
struct UBPFL_Test_Helpers_C_SpawnDefaultPossessedCharacter_Params
{
public:
	struct FTransform                            Location;                                          // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       SpawnedCharacter;                                  // 0x68(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           SpawnedController;                                 // 0x70(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x78(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_785C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorMessage;                                      // 0x80(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class AController*                           L_Controller;                                      // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       L_Character;                                       // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_SpawnDefaultController_SpawnedController; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnDefaultController_Success;           // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_785D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SpawnDefaultController_ErrorMessage;      // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_Character_C*                       CallFunc_SpawnDefaultCharacter_SpawnedCharacter;   // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnDefaultCharacter_Success;            // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_785E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SpawnDefaultCharacter_ErrorMessage;       // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.SpawnDefaultController
struct UBPFL_Test_Helpers_C_SpawnDefaultController_Params
{
public:
	struct FTransform                            Location;                                          // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           SpawnedController;                                 // 0x68(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_785F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorMessage;                                      // 0x78(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_FinishSpawningActor_ReturnValue;          // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Force_Add_Default_Containers_Success;     // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InitializeRandomPersistentUniqueId_Success; // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7860[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_InitializeRandomPersistentUniqueId_Message; // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xC2 (0xC2 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.SpawnDefaultCharacter
struct UBPFL_Test_Helpers_C_SpawnDefaultCharacter_Params
{
public:
	struct FTransform                            Location;                                          // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       SpawnedCharacter;                                  // 0x68(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7861[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorMessage;                                      // 0x78(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Error;                                             // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Spawned;                                           // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7862[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       K2Node_DynamicCast_AsBP_Character;                 // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x121 (0x121 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetDefaultSpawnTransform
struct UBPFL_Test_Helpers_C_GetDefaultSpawnTransform_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7863[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DefaultTransform;                                  // 0x10(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7864[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorMessage;                                      // 0x78(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Error;                                             // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         ValidTransform;                                    // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7865[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATargetPoint*>                  CallFunc_GetAllActorsOfClass_OutActors;            // 0xA0(0x10)(ReferenceParm)
	class ATargetPoint*                          CallFunc_Array_Get_Item;                           // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7866[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xC0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.ControllerLookAtGround
struct UBPFL_Test_Helpers_C_ControllerLookAtGround_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


