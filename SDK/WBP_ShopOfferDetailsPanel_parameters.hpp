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

// 0x17C (0x17C - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.SetOfferPreviewImage
struct UWBP_ShopOfferDetailsPanel_C_SetOfferPreviewImage_Params
{
public:
	class UNWXShopOfferListItem*                 Offer;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             LRecipeSchematicImageSize;                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             LItemOfferImageSize;                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETransactableType                 Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETransactableType                 Temp_byte_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETransactableType                 CallFunc_GetTransactableType_ReturnValue;          // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetIcon_ReturnValue;                      // 0x30(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D               K2Node_Select_Default;                             // 0x60(0x8)(NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBD[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x80(0xD0)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDeprecateSlateVector2D               K2Node_Select_Schematic_ImplicitCast;              // 0x154(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D               K2Node_Select_CraftingRecipe_ImplicitCast;         // 0x15C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D               K2Node_Select_Unknown_ImplicitCast;                // 0x164(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D               K2Node_Select_Item_ImplicitCast;                   // 0x16C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D               K2Node_Select_Emote_ImplicitCast;                  // 0x174(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.OnShowOffer
struct UWBP_ShopOfferDetailsPanel_C_OnShowOffer_Params
{
public:
	class UNWXShopOfferListItem*                 OfferToShow;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.OnShowReward
struct UWBP_ShopOfferDetailsPanel_C_OnShowReward_Params
{
public:
	class UNWXShopRewardListItem*                RewardToShow;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.SetupRewardDetails
struct UWBP_ShopOfferDetailsPanel_C_SetupRewardDetails_Params
{
public:
	class UNWXShopRewardListItem*                Reward;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetIcon_ReturnValue;                      // 0x10(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                          K2Node_DynamicCast_AsOverlay_Slot;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXShopOfferDetailsSimpleWidget*      CallFunc_GetDisplayWidgetFromOffer_ReturnValue;    // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemTypeLabel_ReturnValue;             // 0x58(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.SetupOfferDetails
struct UWBP_ShopOfferDetailsPanel_C_SetupOfferDetails_Params
{
public:
	class UNWXShopOfferListItem*                 Offer;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetItemLabel_ReturnValue;                 // 0x10(0x18)(None)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXShopOfferDetailsSimpleWidget*      CallFunc_GetDisplayWidgetFromOffer_ReturnValue;    // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemTypeLabel_ReturnValue;             // 0x38(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.GetDisplayWidgetFromOffer
struct UWBP_ShopOfferDetailsPanel_C_GetDisplayWidgetFromOffer_Params
{
public:
	class UNWXShopOfferDetailsSimpleWidget*      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ETransactableType, class UClass*> TransactableToWidgetType;                          // 0x8(0x50)(Edit, BlueprintVisible)
	TMap<enum class ETransactableType, class UClass*> K2Node_MakeVariable_MakeVariableOutput;            // 0x58(0x50)(None)
	class UWBP_ShopOfferDetailsSimple_C*         CallFunc_Create_ReturnValue;                       // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ETransactableType                 CallFunc_GetTransactableType_ReturnValue;          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ObjectIsA_ReturnValue;                    // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETransactableType                 CallFunc_GetTransactableType_ReturnValue_1;        // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Map_Find_Value;                           // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXShopOfferDetailsSimpleWidget*      CallFunc_Create_ReturnValue_1;                     // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.GetItemTypeLabel
struct UWBP_ShopOfferDetailsPanel_C_GetItemTypeLabel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class ETransactableType                 CallFunc_GetTransactableType_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x20(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.UpdateRequirementsNotMetPanel
struct UWBP_ShopOfferDetailsPanel_C_UpdateRequirementsNotMetPanel_Params
{
public:
	class UNWXShopOfferListItem*                 K2Node_DynamicCast_AsNWXShop_Offer_List_Item;      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.UpdatePurchaseButton
struct UWBP_ShopOfferDetailsPanel_C_UpdatePurchaseButton_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EShopOfferPurchasableState        Temp_byte_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXShopOfferListItem*                 K2Node_DynamicCast_AsNWXShop_Offer_List_Item;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x18(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.BndEvt__WBP_ShopOfferDetailsPanel_PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UWBP_ShopOfferDetailsPanel_C_BndEvt__WBP_ShopOfferDetailsPanel_PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.ExecuteUbergraph_WBP_ShopOfferDetailsPanel
struct UWBP_ShopOfferDetailsPanel_C_ExecuteUbergraph_WBP_ShopOfferDetailsPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXShopOfferListItem*                 K2Node_DynamicCast_AsNWXShop_Offer_List_Item;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


