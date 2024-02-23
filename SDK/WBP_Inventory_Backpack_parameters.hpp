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

// 0x301 (0x301 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.CREATEDELEGATE_PROXYFUNCTION_3
struct UWBP_Inventory_Backpack_C_CREATEDELEGATE_PROXYFUNCTION_3_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60EE[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ETooltipSource                    TooltipSource;                                     // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x301 (0x301 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.CREATEDELEGATE_PROXYFUNCTION_2
struct UWBP_Inventory_Backpack_C_CREATEDELEGATE_PROXYFUNCTION_2_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60EF[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ETooltipSource                    TooltipSource;                                     // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x301 (0x301 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.CREATEDELEGATE_PROXYFUNCTION_1
struct UWBP_Inventory_Backpack_C_CREATEDELEGATE_PROXYFUNCTION_1_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60F1[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ETooltipSource                    TooltipSource;                                     // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x301 (0x301 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.CREATEDELEGATE_PROXYFUNCTION_0
struct UWBP_Inventory_Backpack_C_CREATEDELEGATE_PROXYFUNCTION_0_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60F2[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ETooltipSource                    TooltipSource;                                     // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.HandleGamepadMoveItem
struct UWBP_Inventory_Backpack_C_HandleGamepadMoveItem_Params
{
public:
	class UDragOperation_Item_C*                 NewDragOperation;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         TargetCanReceive;                                  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SourceCanReceive;                                  // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60FA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 SourceInstanceId;                                  // 0xC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 TargetInstanceId;                                  // 0x1C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SourceSlotIndex;                                   // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetSlotIndex;                                   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SourceToolbar;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               TargetToolbar;                                     // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EToolbarArrangement               SourceToolbarArrangement;                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EToolbarArrangement               TargetToolbarArrangement;                          // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60FC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarSlotEntryObjectInterface> Temp_interface_Variable;                           // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item; // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_Guid_ReturnValue;                 // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_Guid_ReturnValue_1;               // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60FD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface; // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_1; // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_2; // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6100[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_3; // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_Guid_ReturnValue_2;               // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_Guid_ReturnValue_3;               // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6101[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_4; // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanAssignInventoryEntry_ReturnValue;      // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6102[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_5; // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanAssignInventoryEntry_ReturnValue_1;    // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6103[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput; // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue;    // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_6; // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6104[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_7; // 0x148(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6105[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_8; // 0x160(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6106[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObjectAtIndex_ReturnValue;    // 0x178(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue_1;  // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput_1; // 0x190(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue_1;  // 0x1A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue_1;     // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnGamepadToolbarMove
struct UWBP_Inventory_Backpack_C_OnGamepadToolbarMove_Params
{
public:
	class UDragOperation_Item_C*                 DragOperation;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDragOperation_Item_C*                 NewDragOperation;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue;    // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObjectAtIndex_ReturnValue;    // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6107[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item; // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.SetToolbarsInGridVisible
struct UWBP_Inventory_Backpack_C_SetToolbarsInGridVisible_Params
{
public:
	bool                                         bShowToolbars;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.UpdateSortOrderText
struct UWBP_Inventory_Backpack_C_UpdateSortOrderText_Params
{
public:
	enum class EEntrySortOrder                   SortOrder;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6108[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetSortOrderName_ReturnValue;             // 0x8(0x18)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.GetRepairAllTooltipText
struct UWBP_Inventory_Backpack_C_GetRepairAllTooltipText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponentBase*               CallFunc_GetComponentByClass_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRequiredEssencesToRepairAllItems_ReturnValue; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6109[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x88(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.GetRepairAllTooltipWidget
struct UWBP_Inventory_Backpack_C_GetRepairAllTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetRepairAllTooltipText_Text;             // 0x10(0x18)(None)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnToolbarDragCancelled
struct UWBP_Inventory_Backpack_C_OnToolbarDragCancelled_Params
{
public:
	class UDragDropOperation*                    DragDropOperation;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDragOperation_Item_C*                 K2Node_DynamicCast_AsDrag_Operation_Item;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoadoutSlotType                  CallFunc_GetLoadoutSlotType_SlotType;              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnToolbarDragStarted
struct UWBP_Inventory_Backpack_C_OnToolbarDragStarted_Params
{
public:
	class UDragDropOperation*                    DragDropOperation;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDragOperation_Item_C*                 K2Node_DynamicCast_AsDrag_Operation_Item;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoadoutSlotType                  CallFunc_GetLoadoutSlotType_SlotType;              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnConsumableToolbarEntrySelected
struct UWBP_Inventory_Backpack_C_OnConsumableToolbarEntrySelected_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_610A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_sw_GridEntryItem_C*>       CallFunc_GetGridEntryWidgets_GridEntries;          // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_610B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_GridEntryItem_C*               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnOffhandToolbarEntrySelected
struct UWBP_Inventory_Backpack_C_OnOffhandToolbarEntrySelected_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_610C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_sw_GridEntryItem_C*>       CallFunc_GetGridEntryWidgets_GridEntries;          // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_610D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_GridEntryItem_C*               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnMainhandToolbarEntrySelected
struct UWBP_Inventory_Backpack_C_OnMainhandToolbarEntrySelected_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_610E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_sw_GridEntryItem_C*>       CallFunc_GetGridEntryWidgets_GridEntries;          // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_610F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_GridEntryItem_C*               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.SetupBindingsMainHandToolbar
struct UWBP_Inventory_Backpack_C_SetupBindingsMainHandToolbar_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x50(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x90(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0xA0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0xB0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0xC0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0xD0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0xE0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0xF0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x100(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x110(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x120(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x130(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x140(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnToolbarEntrySelected
struct UWBP_Inventory_Backpack_C_OnToolbarEntrySelected_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6110[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_sw_GridEntryItem_C*>       CallFunc_GetGridEntryWidgets_GridEntries;          // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6111[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_GridEntryItem_C*               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.SetupBindingsLoadout
struct UWBP_Inventory_Backpack_C_SetupBindingsLoadout_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue_1;  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue;    // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                CallFunc_GetComponentByClass_ReturnValue;          // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x78(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2F9 (0x2F9 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.EquipItem
struct UWBP_Inventory_Backpack_C_EquipItem_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckForValidItem_ItemValid;              // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x300 (0x300 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnLoadoutDragDropped
struct UWBP_Inventory_Backpack_C_OnLoadoutDragDropped_Params
{
public:
	enum class ELoadoutSlotType                  Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6112[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2F1 (0x2F1 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnLoadoutSlotDragStarted
struct UWBP_Inventory_Backpack_C_OnLoadoutSlotDragStarted_Params
{
public:
	struct FInventoryEntry                       Item;                                              // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ELoadoutSlotType                  Slot;                                              // 0x2F0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.RefreshInventoryBackpack
struct UWBP_Inventory_Backpack_C_RefreshInventoryBackpack_Params
{
public:
	class UObject*                               LToolbarArrangementInterface;                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2F8 (0x2F8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnMainHandToolbarContextMenuOpened
struct UWBP_Inventory_Backpack_C_OnMainHandToolbarContextMenuOpened_Params
{
public:
	struct FInventoryEntry                       Item;                                              // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                               Widget;                                            // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x320 (0x320 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.TryHighlightLoadoutSlot
struct UWBP_Inventory_Backpack_C_TryHighlightLoadoutSlot_Params
{
public:
	struct FInventoryEntry                       NewParam;                                          // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_ui_Get_ItemDetails_byItemID_ItemFound;    // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoadoutSlotType                  CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType; // 0x2F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemQuality                      CallFunc_ui_Get_ItemDetails_byItemID_Quality;      // 0x2F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6114[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount; // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_ui_Get_ItemDetails_byItemID_ItemActor;    // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag;  // 0x300(0x20)(None)
};

// 0x72 (0x72 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.UnequipViaDragAndDrop
struct UWBP_Inventory_Backpack_C_UnequipViaDragAndDrop_Params
{
public:
	class UObject*                               Paylod;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDragOperation_Item_C*                 DragDrop;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 ItemInstanceId;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EToolbarArrangement               LToolbarType;                                      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6116[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDragOperation_Item_C*                 K2Node_DynamicCast_AsDrag_Operation_Item;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6117[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput; // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue;    // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_AnimCharacter_C*                   K2Node_DynamicCast_AsBP_Anim_Character;            // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInventoryEntryInToolbar_ReturnValue;    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F0 (0x2F0 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntryFocused
struct UWBP_Inventory_Backpack_C_OnEntryFocused_Params
{
public:
	struct FInventoryEntry                       InventoryEntry;                                    // 0x0(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.GetInventoryItems
struct UWBP_Inventory_Backpack_C_GetInventoryItems_Params
{
public:
	TArray<class UWBP_sw_GridEntryItem_C*>       Items;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UWBP_sw_GridEntryItem_C*>       CallFunc_GetGridEntryWidgets_GridEntries;          // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x5 (0x5 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.MaxWeightUpdated
struct UWBP_Inventory_Backpack_C_MaxWeightUpdated_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.UpdateWeightCounter
struct UWBP_Inventory_Backpack_C_UpdateWeightCounter_Params
{
public:
	float                                        CurrentWeight;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LTiredIndex;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseWeight;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxWeight;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6120[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_1;                // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6121[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue_1;        // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_bSuccessfullyFoundAttribute; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6123[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_ReturnValue; // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6124[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue; // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UpdateCount_MaxValue_ImplicitCast;        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UpdateCount_CurrentValue_ImplicitCast;    // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UpdateCount_CurrentValue_ImplicitCast_1;  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.ShowContextTooltip
struct UWBP_Inventory_Backpack_C_ShowContextTooltip_Params
{
public:
	class FText                                  LBonusText;                                        // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  LPenaltyText;                                      // 0x18(0x18)(Edit, BlueprintVisible)
};

// 0x119 (0x119 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnInventoryReady
struct UWBP_Inventory_Backpack_C_OnInventoryReady_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6125[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponentBase*               Inventory;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EEntrySortOrder                   CallFunc_GetCurrentSortOrder_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6126[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6127[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponentBase*               CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_UI_PersistenceComponent_C*         CallFunc_GetLocalPlayerUIPersistenceComponent_ReturnValue; // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue_1;  // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                CallFunc_GetComponentByClass_ReturnValue_1;        // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       CallFunc_GetEssencePouch_Container;                // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetEssencePouch_ReturnValue;              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6128[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGenericContainerCosmeticSettings     K2Node_MakeStruct_GenericContainerCosmeticSettings; // 0x60(0x18)(NoDestructor)
	TScriptInterface<class IItemContainer>       CallFunc_GetRealmCardDeck_Container;               // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetRealmCardDeck_ReturnValue;             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6129[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetBackpack_Container;                    // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackpack_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_612A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGenericContainerCosmeticSettings     K2Node_MakeStruct_GenericContainerCosmeticSettings_1; // 0xA8(0x18)(NoDestructor)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FGenericContainerCosmeticSettings     K2Node_MakeStruct_GenericContainerCosmeticSettings_2; // 0x100(0x18)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnContainerSortOrderUpdated
struct UWBP_Inventory_Backpack_C_OnContainerSortOrderUpdated_Params
{
public:
	enum class EEntrySortOrder                   SortOrder;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntrySubContextMenuOpened
struct UWBP_Inventory_Backpack_C_OnEntrySubContextMenuOpened_Params
{
public:
	struct FItemDataReference                    ItemId;                                            // 0x0(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         IsEquipped;                                        // 0x80(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntryMouseButtonUp
struct UWBP_Inventory_Backpack_C_OnEntryMouseButtonUp_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x300 (0x300 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntryDragged
struct UWBP_Inventory_Backpack_C_OnEntryDragged_Params
{
public:
	enum class ELoadoutSlotType                  Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Display;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_612B[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       Item;                                              // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2F9 (0x2F9 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntryDoubleClicked
struct UWBP_Inventory_Backpack_C_OnEntryDoubleClicked_Params
{
public:
	struct FInventoryEntry                       InventoryEntry;                                    // 0x0(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckForValidItem_ItemValid;              // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x301 (0x301 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntryHovered
struct UWBP_Inventory_Backpack_C_OnEntryHovered_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_612C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InventoryEntry;                                    // 0x10(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETooltipSource                    TooltipSource;                                     // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F0 (0x2F0 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntrySelected
struct UWBP_Inventory_Backpack_C_OnEntrySelected_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC4 (0xC4 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.RemoveBindings
struct UWBP_Inventory_Backpack_C_RemoveBindings_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x50(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       CallFunc_GetLocalCharacter_PlayerCharacter;        // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_613A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAttributeSet*                         CallFunc_GetAttributeSet_ReturnValue;              // 0xA0(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXAttributeSet*                      K2Node_DynamicCast_AsNWXAttribute_Set;             // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_613B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0xB4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xE4 (0xE4 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.SetupBindings
struct UWBP_Inventory_Backpack_C_SetupBindings_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x50(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       CallFunc_GetLocalCharacter_PlayerCharacter;        // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x98(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_613C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAttributeSet*                         CallFunc_GetAttributeSet_ReturnValue;              // 0xB0(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0xB8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXAttributeSet*                      K2Node_DynamicCast_AsNWXAttribute_Set;             // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_613D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0xD4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.GetVolumeToolTip
struct UWBP_Inventory_Backpack_C_GetVolumeToolTip_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(ConstParm)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.GetCarryWeightToolTip
struct UWBP_Inventory_Backpack_C_GetCarryWeightToolTip_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(ConstParm)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xF1 (0xF1 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.UpdateStatCounters
struct UWBP_Inventory_Backpack_C_UpdateStatCounters_Params
{
public:
	class UInventoryComponentBase*               InventoryComponent;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider;      // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_613E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider_1;    // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_613F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetDefaultContainer_ReturnValue;          // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       CallFunc_GetDefaultContainer_ReturnValue_1;        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentWeightOfContainer_ReturnValue;  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContainerCapacityData                CallFunc_GetContainerCapacityData_ReturnValue;     // 0x5C(0x8)(NoDestructor)
	int32                                        CallFunc_GetNumberItemEntries_ReturnValue;         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetRepairAllTooltipText_Text;             // 0x78(0x18)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6140[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6141[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponentBase*               CallFunc_GetComponentByClass_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_BackPackGrid_DropTarget_Unequip_List_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature
struct UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_BackPackGrid_DropTarget_Unequip_List_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature_Params
{
public:
	class UDragDropOperation*                    Payload;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2F1 (0x2F1 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_2_LoadoutSlotDrag_Cancelled__DelegateSignature
struct UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_2_LoadoutSlotDrag_Cancelled__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       Item;                                              // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ELoadoutSlotType                  Slot;                                              // 0x2F0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x300 (0x300 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_3_LoadoutSlotDragDropped__DelegateSignature
struct UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_3_LoadoutSlotDragDropped__DelegateSignature_Params
{
public:
	enum class ELoadoutSlotType                  Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_614D[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnInputMethodChanged
struct UWBP_Inventory_Backpack_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_CBU_Backpack_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_CBU_Backpack_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_CBU_RealmCards_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_CBU_RealmCards_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_CBUEssences_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_CBUEssences_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_CBU_SortingOrder_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_CBU_SortingOrder_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x699 (0x699 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.ExecuteUbergraph_WBP_Inventory_Backpack
struct UWBP_Inventory_Backpack_C_ExecuteUbergraph_WBP_Inventory_Backpack_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6150[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDragDropOperation*                    K2Node_ComponentBoundEvent_Payload;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBasicAwaiter*                         CallFunc_GetInventoryAwaiter_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IAwaitable>           CallFunc_AwaitBP_Awaitable_CastInput;              // 0x30(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDelegateHandleBPWrapper              CallFunc_AwaitBP_Handle;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6152[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       K2Node_ComponentBoundEvent_Item;                   // 0x50(0x2F0)(None)
	enum class ELoadoutSlotType                  K2Node_ComponentBoundEvent_Slot_1;                 // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoadoutSlotType                  K2Node_ComponentBoundEvent_Slot;                   // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6153[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       K2Node_ComponentBoundEvent_ItemEntry;              // 0x350(0x2F0)(None)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_4;               // 0x640(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_Event_CurrentInputType;                     // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6154[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue_1;  // 0x650(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6155[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponentBase*               CallFunc_GetComponentByClass_ReturnValue;          // 0x660(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_InventoryComponent_C*              K2Node_DynamicCast_AsBP_Inventory_Component;       // 0x668(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6156[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_3;               // 0x678(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x680(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x688(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x690(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EEntrySortOrder                   CallFunc_GetCurrentSortOrder_ReturnValue;          // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F8 (0x2F8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnMainHandToolbarContextOpened__DelegateSignature
struct UWBP_Inventory_Backpack_C_OnMainHandToolbarContextOpened__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       Item;                                              // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                               Widget;                                            // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x2F0 (0x2F0 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntryFocused__DelegateSignature
struct UWBP_Inventory_Backpack_C_OnBackpackEntryFocused__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       InventoryEntry;                                    // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackSortOrderUpdated__DelegateSignature
struct UWBP_Inventory_Backpack_C_OnBackpackSortOrderUpdated__DelegateSignature_Params
{
public:
	enum class EEntrySortOrder                   SortOrder;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackDragDroppedItem__DelegateSignature
struct UWBP_Inventory_Backpack_C_OnBackpackDragDroppedItem__DelegateSignature_Params
{
public:
	class UDragDropOperation*                    Payload;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntrySubContextMenuOpened__DelegateSignature
struct UWBP_Inventory_Backpack_C_OnBackpackEntrySubContextMenuOpened__DelegateSignature_Params
{
public:
	struct FItemDataReference                    ItemId;                                            // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsEquipped;                                        // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntryMouseButtonUp__DelegateSignature
struct UWBP_Inventory_Backpack_C_OnBackpackEntryMouseButtonUp__DelegateSignature_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x300 (0x300 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntryDragged__DelegateSignature
struct UWBP_Inventory_Backpack_C_OnBackpackEntryDragged__DelegateSignature_Params
{
public:
	enum class ELoadoutSlotType                  Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Display;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6157[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       Item;                                              // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2F0 (0x2F0 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntryDoubleClicked__DelegateSignature
struct UWBP_Inventory_Backpack_C_OnBackpackEntryDoubleClicked__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       InventoryEntry;                                    // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x301 (0x301 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntryHovered__DelegateSignature
struct UWBP_Inventory_Backpack_C_OnBackpackEntryHovered__DelegateSignature_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6158[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InventoryEntry;                                    // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ETooltipSource                    TooltipSource;                                     // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F0 (0x2F0 - 0x0)
// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntrySelected__DelegateSignature
struct UWBP_Inventory_Backpack_C_OnBackpackEntrySelected__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       InventoryEntry;                                    // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


