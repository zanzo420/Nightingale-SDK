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

// 0xE9 (0xE9 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.GetContainerFromProvider
struct UBP_InventoryComponent_C_GetContainerFromProvider_Params
{
public:
	struct FItemContainerHandle                  ContainerHandle;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	TScriptInterface<class IItemContainer>       ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       StorageBox;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       Backpack;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       CallFunc_GetRealmCardDeck_Container;               // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetRealmCardDeck_ReturnValue;             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetEssencePouch_Container;                // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetEssencePouch_ReturnValue;              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemContainerHandle                  CallFunc_GetContainerHandle_ReturnValue;           // 0x70(0x10)(NoDestructor)
	struct FItemContainerHandle                  CallFunc_GetContainerHandle_ReturnValue_1;         // 0x80(0x10)(NoDestructor)
	TScriptInterface<class IItemContainer>       CallFunc_GetStorageBox_Container;                  // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetStorageBox_ReturnValue;                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue; // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85E9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemContainerHandle                  CallFunc_GetContainerHandle_ReturnValue_2;         // 0xA8(0x10)(NoDestructor)
	bool                                         CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1; // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_2; // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetBackpack_Container;                    // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackpack_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemContainerHandle                  CallFunc_GetContainerHandle_ReturnValue_3;         // 0xD8(0x10)(NoDestructor)
	bool                                         CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_3; // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.GetDefaultContainer
struct UBP_InventoryComponent_C_GetDefaultContainer_Params
{
public:
	TScriptInterface<class IItemContainer>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       CallFunc_GetBackpack_Container;                    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackpack_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.HasContainer
struct UBP_InventoryComponent_C_HasContainer_Params
{
public:
	TScriptInterface<class IItemContainer>       Container;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemContainerHandle                  CallFunc_GetContainerHandle_ReturnValue;           // 0x18(0x10)(NoDestructor)
	bool                                         CallFunc_HasContainerFromHandle_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.HasContainerFromHandle
struct UBP_InventoryComponent_C_HasContainerFromHandle_Params
{
public:
	struct FItemContainerHandle                  ContainerHandle;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       StorageBox;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       Backpack;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FItemContainerHandle                  CallFunc_GetContainerHandle_ReturnValue;           // 0x38(0x10)(NoDestructor)
	struct FItemContainerHandle                  CallFunc_GetContainerHandle_ReturnValue_1;         // 0x48(0x10)(NoDestructor)
	bool                                         CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1; // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetStorageBox_Container;                  // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetStorageBox_ReturnValue;                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetBackpack_Container;                    // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackpack_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x351 (0x351 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.SendEssenceTelemetry
struct UBP_InventoryComponent_C_SendEssenceTelemetry_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       Item;                                              // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bIsSink;                                           // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerState*                       PlayerState;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  K2Node_DynamicCast_AsNWXPlayer_Controller;         // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerState*                       K2Node_DynamicCast_AsNWXPlayer_State;              // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               K2Node_MakeArray_Array;                            // 0x330(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_GetEssenceCountsFromEntries_T0Count;      // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetEssenceCountsFromEntries_T1Count;      // 0x344(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetEssenceCountsFromEntries_T2Count;      // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetEssenceCountsFromEntries_T3Count;      // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetEssenceCountsFromEntries_ReturnValue;  // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x312 (0x312 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.ConsumeItem
struct UBP_InventoryComponent_C_ConsumeItem_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class ANWXPlayerCharacter*                   Character;                                         // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGetResult                        CallFunc_GetCurrentContainerForItem_OutBranch;     // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8603[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetCurrentContainerForItem_ReturnValue;   // 0x300(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveItem_ReturnValue;                   // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.DoesOwnerHaveRestriction
struct UBP_InventoryComponent_C_DoesOwnerHaveRestriction_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8609[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStateActive_ReturnValue;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.CanCheat
struct UBP_InventoryComponent_C_CanCheat_Params
{
public:
	bool                                         CanCheat;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_860F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  K2Node_DynamicCast_AsNWXPlayer_Controller;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayerHasEntitlement_ReturnValue;         // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x85 (0x85 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.TransferItem
struct UBP_InventoryComponent_C_TransferItem_Params
{
public:
	struct FItemContainerHandle                  OldContainerHandle;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FItemContainerHandle                  NewContainerHandle;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FGuid                                 ItemToTransfer;                                    // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        QuantityToTransfer;                                // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8614[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SourceActor;                                       // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8615[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetContainerFromHandle_ReturnValue;       // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FInventoryEntryIdAndQuantity          K2Node_MakeStruct_InventoryEntryIdAndQuantity;     // 0x58(0x14)(NoDestructor)
	uint8                                        Pad_8616[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetContainerFromHandle_ReturnValue_1;     // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_TransferItemToContainer_AmountTransferred; // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TransferItemToContainer_ReturnValue;      // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F0 (0x2F0 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.DEBUG_AddInventoryEntryToBackpack
struct UBP_InventoryComponent_C_DEBUG_AddInventoryEntryToBackpack_Params
{
public:
	struct FInventoryEntry                       InventoryEntry;                                    // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x15 (0x15 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_RemoveItemByID
struct UBP_InventoryComponent_C_UI_RemoveItemByID_Params
{
public:
	struct FGuid                                 InstanceID;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Quantity;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerInventoryContainerType     ParentContainerType;                               // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_DropItem
struct UBP_InventoryComponent_C_UI_DropItem_Params
{
public:
	struct FTransform                            CameraTransform;                                   // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 InstanceID;                                        // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerInventoryContainerType     ContainerType;                                     // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_861D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DropQuantity;                                      // 0x74(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x321 (0x321 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_TransferItem
struct UBP_InventoryComponent_C_UI_TransferItem_Params
{
public:
	TScriptInterface<class IItemContainer>       OldContainerHandle;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       NewContainerHandle;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       ItemToTransfer;                                    // 0x20(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                SourceActor;                                       // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStoringItem;                                     // 0x320(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F8 (0x2F8 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_ConsumeItem
struct UBP_InventoryComponent_C_UI_ConsumeItem_Params
{
public:
	struct FInventoryEntry                       Item_Entry;                                        // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class ANWXPlayerCharacter*                   Character;                                         // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2F0 (0x2F0 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_RepairItem
struct UBP_InventoryComponent_C_UI_RepairItem_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_ExtractItem
struct UBP_InventoryComponent_C_UI_ExtractItem_Params
{
public:
	struct FGuid                                 InstanceID;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerInventoryContainerType     ContainerType;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8622[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Quantity;                                          // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD9B (0xD9B - 0x0)
// Function BP_InventoryComponent.BP_InventoryComponent_C.ExecuteUbergraph_BP_InventoryComponent
struct UBP_InventoryComponent_C_ExecuteUbergraph_BP_InventoryComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesOwnerHaveRestriction_Result;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesOwnerHaveRestriction_Result_1;        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_862B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 K2Node_CustomEvent_InstanceId;                     // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerInventoryContainerType     K2Node_CustomEvent_ContainerType;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_862C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Quantity;                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGetResult                        CallFunc_GetContainerForContainerType_OutBranch;   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_862E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetContainerForContainerType_ReturnValue; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_DoesOwnerHaveRestriction_Result_2;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_862F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       K2Node_CustomEvent_ItemEntry;                      // 0x40(0x2F0)(None)
	struct FInventoryEntry                       K2Node_CustomEvent_Item_Entry;                     // 0x330(0x2F0)(None)
	class ANWXPlayerCharacter*                   K2Node_CustomEvent_Character;                      // 0x620(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       K2Node_CustomEvent_OldContainerHandle;             // 0x628(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       K2Node_CustomEvent_NewContainerHandle;             // 0x638(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8630[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       K2Node_CustomEvent_ItemToTransfer;                 // 0x650(0x2F0)(None)
	class AActor*                                K2Node_CustomEvent_SourceActor;                    // 0x940(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_TargetActor;                    // 0x948(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsStoringItem;                  // 0x950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8631[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_CustomEvent_CameraTransform;                // 0x960(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 K2Node_CustomEvent_InstanceId_1;                   // 0x9C0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerInventoryContainerType     K2Node_CustomEvent_ContainerType_1;                // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8632[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_DropQuantity;                   // 0x9D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue; // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8633[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x9E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                 K2Node_CustomEvent_InstanceId_2;                   // 0x9F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Quantity_1;                     // 0xA00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerInventoryContainerType     K2Node_CustomEvent_ParentContainerType;            // 0xA04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8634[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntryIdAndQuantity          K2Node_MakeStruct_InventoryEntryIdAndQuantity;     // 0xA08(0x14)(NoDestructor)
	enum class EGetResult                        CallFunc_GetContainerForContainerType_OutBranch_1; // 0xA1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8635[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetContainerForContainerType_ReturnValue_1; // 0xA20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_TransferItemToContainer_AmountTransferred; // 0xA30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TransferItemToContainer_ReturnValue;      // 0xA34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveItem_ReturnValue;                   // 0xA35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xA36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8636[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xA38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0xA40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_DynamicCast_AsController;                   // 0xA48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8637[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          K2Node_DynamicCast_AsPlayer_State;                 // 0xA58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8638[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0xA68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanCheat_CanCheat;                        // 0xA70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8639[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       K2Node_CustomEvent_InventoryEntry;                 // 0xA80(0x2F0)(None)
	bool                                         CallFunc_ClaimItem_bSuccess;                       // 0xD70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_863A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         CallFunc_ClaimItem_ClaimedInstances;               // 0xD78(0x10)(ReferenceParm)
	TArray<struct FInventoryEntry>               CallFunc_ClaimItem_UnclaimedItems;                 // 0xD88(0x10)(ReferenceParm)
	bool                                         CallFunc_DoesOwnerHaveRestriction_Result_3;        // 0xD98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesOwnerHaveRestriction_Result_4;        // 0xD99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesOwnerHaveRestriction_Result_5;        // 0xD9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


